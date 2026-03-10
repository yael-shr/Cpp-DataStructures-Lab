#ifndef GRAPH_HPP
#define GRAPH_HPP
#include <iostream>
#include <vector>
#include <list>
#include <queue>

class Graph {
private:
    int V; 
    std::vector<std::list<int>> adj;
public:
    Graph(int vertices) : V(vertices) {
        adj.resize(vertices);
    }

    void addEdge(int v, int w) {
        adj[v].push_back(w);
        adj[w].push_back(v);
    }

    void BFS(int s) {
        std::vector<bool> visited(V, false);
        std::queue<int> q;

        visited[s] = true;
        q.push(s);

        std::cout << "BFS starting from vertex " << s << ": ";

        while (!q.empty()) {
            int curr = q.front();
            std::cout << curr << " ";
            q.pop();

            for (int neighbor : adj[curr]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }
        std::cout << std::endl;
    }
    void printShortestDistance(int s, int dest) {
    std::vector<int> dist(V, -1);
    std::queue<int> q;

    dist[s] = 0;
    q.push(s);

    while (!q.empty()) {
        int curr = q.front();
        q.pop();

        for (int neighbor : adj[curr]) {
            if (dist[neighbor] == -1) {
                dist[neighbor] = dist[curr] + 1;
                q.push(neighbor);
            }
        }
    }
    std::cout << "Shortest distance between " << s << " and " << dest << " is: " << dist[dest] << std::endl;
}
};
#endif