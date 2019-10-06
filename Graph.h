#ifndef GRAPH_H
#define GRAPH_H

#include <list>
#include <vector>
#include <queue>
#include <memory>
#include <iostream>

class Graph
{
public:
    Graph() = default;
    Graph(int V);	
	void BFS();
	void DFS();
	
protected:
    virtual addEdge(int u, int v) = 0;

    int V; // number of nodes in the Graph
    std::unique_ptr<std::list<int>[]> adj_list;
	
private:
    void BFSUtil(int src);
	void DFSUtil(int src, std::vector<bool>& visited, std::vector<int>& visited_nodes);
};

#endif