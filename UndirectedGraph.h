#include "Graph.h"

class UndirectedGraph : public Graph
{
public:
    UndirectedGraph() = default;
	UndirectedGraph(int V);
	
protected:
    virtual void addEdge(int u, int v);	
};