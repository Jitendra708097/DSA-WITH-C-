#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>ans;
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        ans.push_back("litendra");
        
        ans.push_back("oitendra");
        
        ans.push_back("gitendra");
        
        ans.push_back("aitendra");
        
        ans.push_back("titendra");
        
        ans.push_back("pitendra");
        
        ans.push_back("mjitendra");

    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    
}