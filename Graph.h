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
	virtual void BFS();
	virtual void DFS();
	
protected:
    virtual void addEdge(int u, int v) = 0;
	void BFSUtil(int src);
	void DFSUtil(int src, std::vector<bool>& visited, std::vector<int>& visited_nodes);

    int V; // number of nodes in the Graph
    std::unique_ptr<std::list<int>[]> adj_list;
};

#endif