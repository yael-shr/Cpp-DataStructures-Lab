#ifndef CHANGE_OPTIMIZER_HPP
#define CHANGE_OPTIMIZER_HPP

#include <vector>
#include <algorithm>
#include <limits>
#include <memory>

template <typename T = int>
class ChangeOptimizer {
public:
    T minCoins(const std::vector<T>& coins, T amount) const {
        if (amount < 0) return -1;
        if (amount == 0) return 0;
        
        auto dp = std::make_unique<T[]>(amount + 1);

        const T INF = std::numeric_limits<T>::max();

        std::fill(dp.get(), dp.get() + amount + 1, INF);
        dp[0] = 0;

        for (const auto& coin : coins) {
            for (T x = coin; x <= amount; ++x) {
                if (dp[x - coin] != INF) {
                    dp[x] = std::min(dp[x], dp[x - coin] + 1);
                }
            }
        }

        return (dp[amount] == INF) ? -1 : dp[amount];
    }
};

#endif
