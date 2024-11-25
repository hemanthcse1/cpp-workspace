#include <iostream>
#include <vector>
using namespace std;

class Graph{
private:
    int vertices;
    vector< vector<int> > adjMatrix;

public:
    Graph(int v){
        vertices = v;
        adjMatrix.resize(vertices,vector<int>(vertices,0));
    }

    void addEdge(int u, int v){
        if(u >= 0 && u < vertices && v >= 0 && v < vertices){
            adjMatrix[u][v] = 1;
            adjMatrix[v][u] = 1;
        }else{
            cout << "Invalid edge!" << endl;
        }
    }

    void removeEdge(int u, int v){
        if (u >= 0 && u < vertices && v >= 0 && v < vertices){
            adjMatrix[u][v] = 0;
            adjMatrix[v][u] = 0;
        }else{
            cout << "Invalid edge!" << endl;
        }    
    }

    void printGraph(){
        cout << "Adjacency Matrix!..." << endl;
        for (int i = 0; i < vertices; ++i)
        {
            for(int j = 0; j < vertices; ++j){
                cout << adjMatrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main(){
    int vertices;
    int edges;

    cout << "Enter number of vertices " << endl;
    cin >> vertices;

    Graph graph(vertices);

    cout << "Enter number of edges "<< endl;
    cin >> edges;

    cout << "Enter the edges (u,v)" << endl;
    for (int i = 0; i < edges; i++)
    {
       int u,v;
       cin>> u >> v;
       graph.addEdge(u,v);
    }

    graph.printGraph();


    return 0;
}