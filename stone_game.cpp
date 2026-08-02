#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int n = piles.size();
        // dp[i][j] = max difference current player can achieve
        vector<vector<int>> dp(n, vector<int>(n, 0));

        // Base case: only one pile
        for (int i = 0; i < n; i++) {
            dp[i][i] = piles[i];
        }

        // Fill DP table for larger subarrays
        for (int len = 2; len <= n; len++) {
            for (int i = 0; i + len - 1 < n; i++) {
                int j = i + len - 1;
                dp[i][j] = max(piles[i] - dp[i+1][j],
                               piles[j] - dp[i][j-1]);
            }
        }

        // Alice starts with full range [0...n-1]
        return dp[0][n-1] > 0;
    }
};

int main() {
    Solution sol;
    vector<int> piles = {3, 9, 1, 2};
    cout << (sol.stoneGame(piles) ? "Alice wins" : "Bob wins") << endl;
    return 0;
}
