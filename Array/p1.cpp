#include<iostream>
using namespace std;
int main()
{
    // five methods to declare array 
    // 1st method 
    int arr[5] = {1,2,3,4,5};

    // 2nd method 
    int arr1[] = {1,3,45};
    for(int i=0;i<3;i++)
    {
        cout<<arr1[i]<<" ";
    }

    // 3rd method 
     int arr2[8] = {0};

    //  4th method 
     int arr3[6] = {7,8};

    //  input from user 
    int arr4[4];
    {
        for(int i=0;i<4;i++)
        {
            cin>>arr4[i];
        }
    }


    for(int i=0;i<8;i++)
    {
        cout<<arr2[i]<<" ";
    }
}