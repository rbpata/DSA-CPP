#include <iostream>
#include <vector>
using namespace std;

vector<int> Solution(vector<int>& nums) {
    int n = nums.size();
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {
        if (nums[mid] == 0) {
            swap(nums[mid], nums[low]);
            mid++;
            low++;
        } else if (nums[mid] == 1) {
            mid++;
        } else {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
    return nums;
}

int main() {
    vector<int> nums = {0, 2, 1, 1, 0, 2, 1};

    vector<int> res = Solution(nums);

    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }

    return 0;
}
