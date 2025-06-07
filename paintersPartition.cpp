#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Helper function to check if a given max time is feasible
bool isPossible(vector<int>& arr, int n, int m, int maxAllowed) {
    int painter = 1, time = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > maxAllowed) {
            return false; // A single board exceeds the max allowed time
        }
        if (time + arr[i] <= maxAllowed) {
            time += arr[i];
        } else {
            painter++; // Assign a new painter
            time = arr[i];
        }

        if (painter > m) {
            return false;
        }
    }
    return true;
}

// Function to calculate the minimum time required to paint all boards
int minTimeToPaint(vector<int>& arr, int n, int m) {
    int sum = 0, max_val = 0;

    // Calculate the sum of all board lengths and the max board length
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        max_val = max(max_val, arr[i]);
    }

    // Binary search range: max board length to total sum
    int st = max_val, end = sum, ans = -1;

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (isPossible(arr, n, m, mid)) {
            ans = mid; // Store the potential answer
            end = mid - 1; // Try for a smaller maximum
        } else {
            st = mid + 1; // Increase the maximum time
        }
    }
    return ans;
}

int main() {
    int n, m;
    cin >> n >> m; // Number of boards and painters
    vector<int> arr(n);

    // Read lengths of boards
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Output the minimum time required
    cout << minTimeToPaint(arr, n, m) << endl;

    return 0;
}
