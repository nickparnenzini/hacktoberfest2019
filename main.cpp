#include "UndirectedGraph.h"
#include <iostream>

int main() {
    UndirectedGraph g(5);
    g.add_edge(1, 0); 
    g.add_edge(0, 2); 
    g.add_edge(2, 1); 
    g.add_edge(0, 3); 
    g.add_edge(3, 4);

    std::cout << g.detect_cycle() << std::endl;
}