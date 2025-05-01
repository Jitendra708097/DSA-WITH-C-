// directed unweighted graph
// adjancy matrix
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
    int u ,v;
    for(int i=0;i<edge;i++)
    {
        cout<<"Enter the nodes in between edge formed : ";
        cin>>u>>v;
        adjmat[u][v] = 1;
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