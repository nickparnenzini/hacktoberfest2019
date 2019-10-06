
#ifndef GRAPH_H
#define GRAPH_H

#include <memory>

class Graph
{
public:
    Graph() = default;
    Graph(int V);
    virtual addEdge(int u, int v, int weight) = 0;

protected:
    int V; // number of nodes in the Graph
    std::unique_ptr<std::list<int>[]> adj_list;
};

#endif