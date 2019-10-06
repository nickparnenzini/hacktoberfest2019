#include "Graph.h"

Graph::Graph(int V) {
    this->V = V;
    adj_list = std::make_unique<std::list<int>[]>(V);
}

