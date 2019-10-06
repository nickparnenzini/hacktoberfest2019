
#include <memory>

class Graph
{
public:
    Graph() = default;
    Graph(int V);

private:
    int V; // number of nodes in the Graph
    std::unique_ptr<std::list<int>[]> adj_list;
};