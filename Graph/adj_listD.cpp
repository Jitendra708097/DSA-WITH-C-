// to adjancy list for directed graph

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int vertex,edge;
    cout<<"Enter the number of vertex : ";
    cin>>vertex;
    cout<<"Enter the number of edges : ";
    cin>>edge;
    
    vector<int>list[vertex];
    int u,v;
    for(int i=0;i<edge;i++)
    {
        cout<<"Enter the nodes in between edge formed : ";
        cin>>u>>v;
        
        list[u].push_back(v);
    }

    // print the adjancy list
    for(int i=0;i<vertex;i++)
    {
        cout<<i<<" - > ";
        for(int j=0;j<list[i].size();j++)
        {
            cout<<list[i][j]<<" ";
        }
        cout<<endl;
    }
}