#include <cassert>
#include <iostream>
#include "ChangeOptimizer.hpp"
#include "Graph.hpp"

void test_optimizer() {
    ChangeOptimizer<int> opt;
    assert(opt.minCoins({1, 2, 5}, 11) == 3); 
    assert(opt.minCoins({2}, 3) == -1);
    assert(opt.minCoins({1, 5}, 0) == 0);
    
    std::cout << "Optimizer tests passed!" << std::endl;
}

void test_graph_edge_cases() {
    Graph<int> g;

    std::cout << "Testing: Path between non-existent nodes..." << std::endl;
    g.printShortestDistance(99, 100); 

    g.addEdge(1, 2);
    g.addEdge(3, 4);
    std::cout << "Testing: Disconnected components..." << std::endl;
    g.printShortestDistance(1, 4);

    std::cout << "Testing: Self-loop distance..." << std::endl;
    g.printShortestDistance(1, 1);

    std::cout << "Testing: Large vertex IDs..." << std::endl;
    g.addEdge(0, 1000000);
    g.printShortestDistance(0, 1000000);

    std::cout << "Graph edge case tests completed!" << std::endl;
}

int main() {
    test_optimizer();
    test_graph();
    std::cout << "ALL TESTS PASSED SUCCESSFULLY!" << std::endl;
    return 0;
}
