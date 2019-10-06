#include "Graph.h"

class UndirectedGraph : public Graph
{
public:
    UndirectedGraph() = default;
	UndirectedGraph(int V);
    void add_edge(int u, int v) {addEdge(u,v);}
    bool detect_cycle();    

private:
    bool detectCycleUtil(int src, std::vector<bool>& visited, int parent);
    virtual void addEdge(int u, int v); 
};