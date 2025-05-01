#include<iostream>
using namespace std;
void prime(int n)
{
    if(n<2)
    return ;

    for(int i=2;i<n;i++)
    {
        if(n%i == 0)
        {
            return ;
        }
    }

    cout<<n<<" ";
    return ;
}
int main()
{
    int n;
    cout<<" enter the n : ";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        prime(arr[i]);
    }
    return 0;
}