#ifndef CHANGE_OPTIMIZER_HPP
#define CHANGE_OPTIMIZER_HPP

#include <vector>
#include <algorithm>
#include <climits>

class ChangeOptimizer {
public:
    int minCoins(const std::vector<int>& coins, int amount) {
        std::vector<int> dp(amount + 1, INT_MAX);
        dp[0] = 0;
        for (int coin : coins) {
            for (int x = coin; x <= amount; ++x) {
                if (dp[x - coin] != INT_MAX) {
                    dp[x] = std::min(dp[x], dp[x - coin] + 1);
                }
            }
        }
        return (dp[amount] == INT_MAX) ? -1 : dp[amount];
    }
};

#endif