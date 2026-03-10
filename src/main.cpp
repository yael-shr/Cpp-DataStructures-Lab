#include <iostream>
#include <vector>
#include <chrono>
#include "ChangeOptimizer.hpp" 
#include "Graph.hpp"         

int main() {
    std::cout << "--- DP: Change Optimizer (Generic & Modern) ---" << std::endl;
    
    ChangeOptimizer<int> optimizer;
    std::vector<int> coins = {1, 2, 5, 10, 20, 50};
    int target = 93;

    auto start = std::chrono::high_resolution_clock::now();
    int result = optimizer.minCoins(coins, target);
    auto end = std::chrono::high_resolution_clock::now();
    
    std::chrono::duration<double, std::milli> elapsed = end - start;

    std::cout << "Target " << target << ": " << result << " coins." << std::endl;
    std::cout << "Execution time: " << elapsed.count() << " ms" << std::endl;

    std::cout << "\n-------------------------------------------\n" << std::endl;

    std::cout << "--- Graph: BFS Traversal (Generic Nodes) ---" << std::endl;
    
    Graph<std::string> g;
    g.addEdge("Home", "Library");
    g.addEdge("Home", "Park");
    g.addEdge("Library", "University");
    g.addEdge("Park", "Station");
    g.addEdge("Station", "University");

    g.BFS("Home");
    g.printShortestDistance("Home", "University");

    return 0;
}
