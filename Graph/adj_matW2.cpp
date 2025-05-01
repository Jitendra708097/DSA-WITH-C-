// undirected weighted graph
// show in adjancy matrix
#include<iostream>
#include<vector>
using namespace std;
int main()
{
      int vertex,edge;
    cout<<"Enter the size of vertex : ";
    cin>>vertex;
    cout<<"Enter the size of edge : ";
    cin>>edge;
    vector<vector<int> >adjmat(vertex,vector<int>(vertex,0));
    int u ,v,weight;
    for(int i=0;i<edge;i++)
    {
        cout<<"Enter the nodes of edge in between formed and weight of edge : ";
        cin>>u>>v>>weight;
        adjmat[u][v] = weight;
        adjmat[v][u] = weight;
    }

    for(int i=0;i<vertex;i++)
    {
        for(int j=0;j<vertex;j++)
        {
            cout<<adjmat[i][j]<<" ";
        }

        cout<<endl;
    }
}