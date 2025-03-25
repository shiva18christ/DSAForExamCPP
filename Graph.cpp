#include<iostream>
# include<list>

using namespace std;
class Graph{
    public:
    int vertex;
    list<int>* adjList;
    Graph(int vertex){
        this->vertex=vertex;
        this->adjList=new list<int>[vertex];
    }
    void addEdge(int source,int destination){
        adjList[source].push_back(destination);
        adjList[destination].push_back(source);
    }
    void display(){
        for(int i=0;i<vertex;i++){
            cout<<i<<" ->";
            for(int j:adjList[i]){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
    void DFS(int node,bool* visited){
        visited[node]=true;
        cout<<node<<" ";
        for(int neighbour:adjList[node]){
            if(!visited[neighbour]){
                DFS(neighbour,visited);
            }
        }

    }
    void DFSTraversal(int start){
        bool* visited=new bool[vertex];
        cout<<"DFS traversal:";
        DFS(start,visited);
    }
};
int main(){
    Graph graph(6);
    graph.addEdge(0,1);
    graph.addEdge(0,2);
    graph.addEdge(1,2);
    graph.addEdge(1,4);
    graph.addEdge(2,3);
    graph.addEdge(2,4);
    graph.addEdge(3,4);
    graph.addEdge(3,5);
    graph.addEdge(4,5);
    graph.display();
    graph.DFSTraversal(0);
}
