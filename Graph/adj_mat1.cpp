// undirected unweighted graph
// show in adjancy matrix
#include<iostream>
#include<vector>
using namespace std;
int main()
{
      int vertex,edge;
    cout<<"Enter the size of vertex : ";
    cin>>vertex;
    cout<<"Enter the size edges : ";
    cin>>edge;
    vector<vector<bool>>adjmat(vertex,vector<bool>(vertex,0));
    int u ,v;
    for(int i=0;i<edge;i++)
    {
        cout<<"Enter the nodes in between edges is happened : ";
        cin>>u>>v;
        adjmat[u][v] = 1;
        adjmat[v][u] = 1;
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