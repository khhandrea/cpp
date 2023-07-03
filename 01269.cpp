#include <stdio.h>
#include <vector>
#include <set>
#include <stack>

using namespace std;

int main() {
    short N, M, V;
    short current, from, to;
    short i, j;
    set<short> *graph;
    set<short>::iterator iter;
    vector<bool> *visited;
    stack<short> dfs_stack;
    bool deep_first;

    // Scan
    scanf("%hd %hd %hd", &N, &M, &V);
    graph = new set<short>[N];
    visited = new vector<bool>(N);

    // Initial stack
    dfs_stack.push(V - 1);

    // Make adjacent list and visited set
    for(i=0; i<M; i++) {
        scanf("%hd %hd", &from, &to);
        graph[from - 1].insert(to - 1);
        graph[to - 1].insert(from - 1);
    }
    for(i=0; i<N; i++) {
        visited->at(i) = false;
    }

    // DFS
    while (!dfs_stack.empty()) {
        current = dfs_stack.top();
        
        if (!visited->at(current)) {
            visited->at(current) = true;
            printf("%d ", current + 1);
        }

        deep_first = false;
        for (iter=graph[current].begin(); iter!=graph[current].end(); iter++) {
            if (!visited->at(*iter)) {
                dfs_stack.push(*iter);
                deep_first = true;
                break;
            }
        }
        if (!deep_first) {
            dfs_stack.pop();
        }
    }
    printf("\n");

    // BFS

    return 0;
}