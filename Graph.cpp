#include "Graph.h"

Graph::Graph(int V) {
    this->V = V;
    adj_list = std::make_unique<std::list<int>[]>(V);
}

void Graph::BFS() {
	// Assumption: we start from node 0
    BFSUtil(0);	
}

void Graph::DFS() {
	std::vector<int> visited_nodes;
	std::vector<bool> visited(V, false);
	for (int i = 0; i < V; ++i) {
		if (!visited[i]) {
			DFSUtil(i, visited, visited_nodes);
		}
	}
}

void Graph::BFSUtil(int src) {
	std::vector<int> visited_nodes;	
    std::queue<int> q;	
    std::vector<bool> visited(V, false);
	
	q.push(src);
	visited[src] = true;
	
	while (!q.empty()) {
	   int u = q.front();
	   visited_nodes.push_back(u);
       q.pop();
       for (auto it = adj_list[u].begin(); it != adj_list[u].end(); ++it) {
           if (!visited[*it]) {
               visited[*it] = true;
               q.push(*it);
           }
       }	   
	}
	
	for (auto elem : visited_nodes) {
		std::cout << elem << " ";
	}
}

void Graph::DFSUtil(int src, std::vector<bool>& visited, std::vector<int>& visited_nodes) {
    visited[src] = true;
	visited_nodes.push_back(src);
    for (auto it = adj_list[src].begin(); it != adj_list[src].end(); ++it) {
        if (!visited[*it]) {
            DFSUtil(*it, visited, visited_nodes);
        }
    }		
}

