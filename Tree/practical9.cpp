
#include <iostream>
#include <queue>
using namespace std;

#define MAX 5

int graph[MAX][MAX] = {
    {0, 1, 1, 0, 0},
    {1, 0, 0, 1, 1},
    {1, 0, 0, 0, 1},
    {0, 1, 0, 0, 0},
    {0, 1, 1, 0, 0}
};

bool visited[MAX];

// Depth First Search
void DFS(int vertex)
{
    cout << vertex << " ";
    visited[vertex] = true;

    for (int i = 0; i < MAX; i++)
    {
        if (graph[vertex][i] == 1 && !visited[i])
        {
            DFS(i);
        }
    }
}

// Breadth First Search
void BFS(int start)
{
    queue<int> q;

    for (int i = 0; i < MAX; i++)
        visited[i] = false;

    visited[start] = true;
    q.push(start);

    while (!q.empty())
    {
        int vertex = q.front();
        q.pop();

        cout << vertex << " ";

        for (int i = 0; i < MAX; i++)
        {
            if (graph[vertex][i] == 1 && !visited[i])
            {
                visited[i] = true;
                q.push(i);
            }
        }
    }
}

int main()
{
    for (int i = 0; i < MAX; i++)
        visited[i] = false;

    cout << "DFS Traversal: ";
    DFS(0);

    cout << "\nBFS Traversal: ";
    BFS(0);

    cout << endl;
    return 0;
}
