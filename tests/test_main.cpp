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

void test_graph_logic() {
    Graph<int> g;
    
    g.addEdge(1, 2);
    g.addEdge(3, 4);

    assert(g.getShortestDistance(1, 2) == 1);
    
    assert(g.getShortestDistance(1, 4) == -1); 
    
    assert(g.getShortestDistance(1, 99) == -1);

    assert(g.getShortestDistance(1, 1) == 0);

    std::cout << "All Graph assertions passed!" << std::endl;
}
int main() {
    test_optimizer();
    test_graph();
    std::cout << "ALL TESTS PASSED SUCCESSFULLY!" << std::endl;
    return 0;
}
