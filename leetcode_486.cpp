#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int solve(vector<int>& nums, int i, int j) {
        if (i == j) {
            return nums[i];
        }

        int left = nums[i] - solve(nums, i + 1, j);
        int right = nums[j] - solve(nums, i, j - 1);

        return max(left, right);
    }

    bool predictTheWinner(vector<int>& nums) {
        return solve(nums, 0, nums.size() - 1) >= 0;
    }
};

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution sol;
    if (sol.predictTheWinner(nums)) {
        cout << "Player 1 can win or tie." << endl;
    } else {
        cout << "Player 1 cannot win." << endl;
    }

    return 0;
}
