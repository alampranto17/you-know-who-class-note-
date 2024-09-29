#include <iostream>
#include <vector>
#include <climits>
using namespace std;

struct Edge {
    int src, dest, weight;
};

class Graph {
private:
    int V, E;
    vector<Edge> edges;

public:
    Graph(int V, int E) {
        this->V = V;
        this->E = E;
    }

    void addEdge(int src, int dest, int weight) {
        edges.push_back({src, dest, weight});
    }

    void bellmanFord(int start) {
        vector<int> dist(V, INT_MAX);
        dist[start] = 0;


        for (int i = 0; i < V - 1; i++) {
            for (const auto &edge : edges) {
                int u = edge.src;
                int v = edge.dest;
                int weight = edge.weight;

                if (dist[u] != INT_MAX && dist[u] + weight < dist[v]) {
                    dist[v] = dist[u] + weight;
                }
            }
        }


        for (const auto &edge : edges) {
            int u = edge.src;
            int v = edge.dest;
            int weight = edge.weight;

            if (dist[u] != INT_MAX && dist[u] + weight < dist[v]) {
                cout << "Graph contains a negative-weight cycle\n";
                return;
            }
        }


        cout << "Vertex Distance from Source\n";
        for (int i = 0; i < V; i++) {
            cout << i << "\t\t" << dist[i] << "\n";
        }
    }
};

int main() {
    int V = 4;
    int E = 5;
    Graph g(V, E);

    g.addEdge(0, 1, 6);
    g.addEdge(0, 3, 7);
    g.addEdge(1, 2, 5);
    g.addEdge(1, 3, -2);
    g.addEdge(2, 3, -3);

    g.bellmanFord(0);

    return 0;
}

