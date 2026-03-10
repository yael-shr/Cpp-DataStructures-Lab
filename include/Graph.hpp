#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <iostream>
#include <vector>
#include <list>
#include <queue>
#include <memory>
#include <unordered_map>

template <typename T = int>
class Graph {
private:
    std::unique_ptr<std::unordered_map<T, std::list<T>>> adj;

public:
    Graph() : adj(std::make_unique<std::unordered_map<T, std::list<T>>>()) {}

    void addEdge(T v, T w) {
        (*adj)[v].push_back(w);
        (*adj)[w].push_back(v);
    }

    void BFS(T s) const {
        std::unordered_map<T, bool> visited;
        std::queue<T> q;

        visited[s] = true;
        q.push(s);

        std::cout << "BFS starting from vertex " << s << ": ";

        while (!q.empty()) {
            T curr = q.front();
            std::cout << curr << " ";
            q.pop();

            for (const auto& neighbor : (*adj)[curr]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }
        std::cout << std::endl;
    }

    int printShortestDistance(T s, T dest) const {
        std::unordered_map<T, int> dist;
        for (const auto& pair : *adj) {
            dist[pair.first] = -1;
        }

        std::queue<T> q;
        dist[s] = 0;
        q.push(s);

        while (!q.empty()) {
            T curr = q.front();
            q.pop();

            if (curr == dest) break;

            for (const auto& neighbor : (*adj)[curr]) {
                if (dist[neighbor] == -1) {
                    dist[neighbor] = dist[curr] + 1;
                    q.push(neighbor);
                }
            }
        }

        if (dist.find(dest) == dist.end() || dist[dest] == -1) {
            std::cout << "No path exists between " << s << " and " << dest << std::endl;
        } else {
            std::cout << "Shortest distance between " << s << " and " << dest << " is: " << dist[dest] << std::endl;
        }
    }
  return dist[dest];
};

#endif
