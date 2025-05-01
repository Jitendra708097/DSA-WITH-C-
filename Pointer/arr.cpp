#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5,6};
     
    // cout<<arr<<endl;  //it print the address of element
    // // To print values of array using pointer 
    // for(int i=0;i<6;i++)
    // {
    //     cout<<*(arr+i)<<" "<<endl;
    // }

    // // To print addresses
    // for(int i=0;i<6;i++)
    // {
    //     cout<<arr+i<<endl;
    // }

    // int *ptr = arr;
    
    // // Print all the values using arithmatic operation
    // for(int i=0;i<6;i++)
    // {
    //     cout<<*ptr<<" ";
    //     ptr++;
    // }



    // // Print addresses using arithmatic operation
    // for(int i=0;i<6;i++)
    // {
    //     cout<<ptr<<" ";
    //     ptr++;
    // }

    //  int *ptr = arr;
    //  for(int i=0;i<6;i++)
    //  {
    //     cout<<ptr+i<<" ";
    //  }

    //  for(int i=0;i<6;i++)
    //  cout<<ptr[i]<<" ";
    //  cout<<endl;

    //  for(int i=0;i<6;i++)
    //  cout<<i[ptr]<<" ";


    //  To print reverse array using ptr and decreament arithmatic operator

    int *ptr1 = &arr[5];
    for(int i=0;i<6;i++)
    {
        cout<<*ptr1<<" ";
        ptr1--;
    }
    
}