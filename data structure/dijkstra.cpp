#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Node {
public:
    int vertex;
    int weight;
    Node* next;

    Node(int v, int w) {
        vertex = v;
        weight = w;
        next = nullptr;
    }
};

class Graph {
private:
    int vertices;
    vector<Node*> adjList;

public:
    Graph(int v) {
        vertices = v;
        adjList.resize(vertices, nullptr);
    }

    void addEdge(int src, int dest, int weight) {
        Node* newNode = new Node(dest, weight);
        newNode->next = adjList[src];
        adjList[src] = newNode;


        newNode = new Node(src, weight);
        newNode->next = adjList[dest];
        adjList[dest] = newNode;
    }

    void dij(int start) {
        vector<int> dist(vertices, INT_MAX);
        dist[start] = 0;
        vector<bool> visited(vertices, false);

        for (int count = 0; count < vertices - 1; count++) {

            int minDist = INT_MAX;
            int u;
            for (int i = 0; i < vertices; i++) {
                if (!visited[i] && dist[i] <= minDist) {
                    minDist = dist[i];
                    u = i;
                }
            }


            visited[u] = true;


            Node* temp = adjList[u];
            while (temp != nullptr) {
                int v = temp->vertex;
                int weight = temp->weight;

                if (!visited[v] && dist[u] + weight < dist[v]) {
                    dist[v] = dist[u] + weight;
                }
                temp = temp->next;
            }
        }


        cout << "Shortest distances from node " << start << ":\n";
        for (int i = 0; i < vertices; i++) {
            cout << "Node " << i << ": " << dist[i] << endl;
        }
    }
};

int main() {
    int v = 4;
    Graph g(v);

    g.addEdge(0, 1, 1);
    g.addEdge(0, 3, 4);
    g.addEdge(1, 2, 2);
    g.addEdge(1, 3, 5);
    g.addEdge(2, 3, 1);

    g.dij(0);

    return 0;
}

