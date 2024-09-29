#include <bits/stdc++.h>
using namespace std;

#define V 4

int function(vector<vector<int>> &adjM, int k, int &n)
{
    if (k == 0 && u == v)
        return 1;
    if (k == 1 && graph[u][v])
        return 1;
    if (k <= 0)
        return 0;

    int count = 0;

    for (int i = 0; i < V; i++)
        if (graph[u][i] == 1)
            count += countwalks(graph, i, v, k - 1);

    return count;
}

int main()
{

    // int graph[V][V]= { { 0, 1, 1, 1 },
    // 					{ 0, 0, 0, 1 },
    // 					{ 0, 0, 0, 1 },
    // 					{ 0, 0, 0, 0 } };
    // int u = 0, v = 3, k = 2;
    // cout << countwalks(graph, u, v, k);

    int n, k;
    cout << "Enter number of vertices" << endl;
    cin >> n;
    cout << "Enter k" << endl;
    cin >> k;

    vector<vector<int>> adjM(n, vector<int>(n, 0));

    cout << "Enter vertices, enter 0 for no edge and enter weight if edge exits" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> adjM[i][j];
        }
    }

    int src;
    cout << "Enter Source" << endl;
    cin >> src;

    function(adjM, src, k, n);

    return 0;
}
