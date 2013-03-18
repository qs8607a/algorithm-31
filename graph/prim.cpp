#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int N = 8;
const int MAX = 0x7fffffff;

int graph[N][N];

void init_graph(int array[][N])
{
    srand((unsigned)time(NULL));
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            array[i][j] = rand() % 10;
            array[j][i] = array[i][j];
        }
    }
}

void print_graph(int array[][N])
{
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            std::cout << array[i][j] << ' ';
        }
        cout << '\n';
    }
}

void prim(int array[][N])
{
    int flag[N];
    int cost[N];
    int next[N];

    for (int i = 1; i < N; i++) {
        cost[i] = (array[0][i] == 0) ? MAX : array[0][i];
        next[i] = 0;
    }
    
    for (int i = 0; i < N; i++) {
        flag[i] = false;
    }
    flag[0] = true;

    while (true) {
        int min = MAX; 
        int pos = -1;

        for (int i = 0; i < N; i++) {
            if (!flag[i] && cost[i] < min && cost[i] != 0) {
                pos = i;
                min = cost[i]; 
            }
        }
        if (pos == -1) {
            break; 
        }
        cout << next[pos] << "--" << pos << "  " << min << endl;

        flag[pos] = true;

        for (int j = 0; j < N; j++) {
            if (!flag[j] && array[pos][j] != 0 && array[pos][j] < cost[j]) {
                cost[j] = array[pos][j]; 
                next[j] = pos;
            }
        }
    }
}

int main(void)
{
    init_graph(graph);
    print_graph(graph);

    cout << "minimum spanning tree:\n";

    prim(graph);

    return 0;
}
