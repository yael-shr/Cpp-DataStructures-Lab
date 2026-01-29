#include <iostream>
#include "ChangeOptimizer.hpp"
#include "Graph.hpp" // הקובץ שיצרנו קודם

int main() {
    // 1. בדיקת אלגוריתם תכנון דינמי (הקוד שלך)
    std::cout << "--- DP: Change Optimizer ---" << std::endl;
    ChangeOptimizer optimizer;
    std::vector<int> coins1 = {1, 2, 5};
    std::cout << "Target 11: " << optimizer.minCoins(coins1, 11) << " (Expected: 3)" << std::endl;

    std::cout << std::endl;

    // 2. בדיקת אלגוריתם גרפים (BFS)
    std::cout << "--- Graph: BFS Traversal ---" << std::endl;
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(3, 4);
    g.BFS(0);

    return 0;
}