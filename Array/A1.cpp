#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int count=1;
    int arr[9] = {2,2,2,2,2,2,2,2,2};
    vector<int>ans;
    for(int i=0;i<9;i++)
    {
        if(arr[i]==arr[i+1])
        {
            count++;
        }
        else if(count>4)
        {
           ans.push_back(arr[i]);
        }
        else
        {
            count = 1;
        }
    }
    if(ans.empty())
    {
        cout<<"-1";
    }
    else
    {
        cout<<ans[0];
    }
}