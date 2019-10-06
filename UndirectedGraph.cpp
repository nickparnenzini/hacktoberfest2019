#include "UndirectedGraph.h"

UndirectedGraph::UndirectedGraph(int V) : Graph(V) {
}

void UndirectedGraph::addEdge(int u, int v) {
	adj_list[u].push_back(v);
    adj_list[v].push_back(u);
}

bool UndirectedGraph::detect_cycle() {
    std::vector<bool> visited(V, false);
    for (int i = 0; i < V; ++i) {
        if (!visited[i]) {
            if (detectCycleUtil(i, visited, -1)) {
                return true;
            }
        }
    }
    return false;
}

bool UndirectedGraph::detectCycleUtil(int src, std::vector<bool>& visited, int parent) {
    visited[src] = true;
    for (auto it = adj_list[src].begin(); it != adj_list[src].end(); ++it) {
        if (!visited[*it]) {
            if (detectCycleUtil(*it, visited, src)) {
                return true;
            }
        }
        else if (*it != parent) {
            return true;
        }
    }
    return false;
}
