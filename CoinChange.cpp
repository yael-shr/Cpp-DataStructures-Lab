#include <iostream>
#include <vector>
#include <algorithm>
#include <climits> 

using namespace std;

class ChangeOptimizer {
public:
    int minCoins(const vector<int>& coins, int amount)
     {
        vector<int> dp(amount + 1, INT_MAX);
        dp[0] = 0; 
        for (int coin : coins) {
          for (int x = coin; x <= amount; ++x) {
                if (dp[x - coin] != INT_MAX) {
                    dp[x] = min(dp[x], dp[x - coin] + 1);
                }
            }
        
return (dp[amount] == INT_MAX) ? -1 : dp[amount];
        }
    }  
};

int main() {
    ChangeOptimizer optimizer;
    
  
    vector<int> coins1 = {1, 2, 5};
    cout << "Target 11: " << optimizer.minCoins(coins1, 11) << " (Expected: 3)" << endl;

    vector<int> coins2 = {2};
    cout << "Target 3: " << optimizer.minCoins(coins2, 3) << " (Expected: -1)" << endl;

    return 0;
}