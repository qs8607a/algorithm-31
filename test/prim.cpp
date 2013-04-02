#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

#include "../include/prim.hpp"

int main(void)
{
    init_graph(graph);
    print_graph(graph);

    cout << "minmum spanning tree:\n";

    prim(graph);

    return 0;
}
