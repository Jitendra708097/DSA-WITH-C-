#include<iostream>
using namespace std;

// int countdigit(int n1)
// {
//     int count=0;
//     while(n1)
//     {
//         count++;
//         n1/=10;
//     }

//     return count;
// }

// bool armstrong(int n1)
// {
//     int original_number = n1,ans=0,pow = 1;
//     int counting = countdigit(n1);

//     while(n1)
//     {
//         int digit = n1%10;
//         n1/=10;
//         int i=0;
//         while(i<counting)
//         {
//             pow*=digit;
//             i++;
//         }
//         ans+=pow;
//         pow = 1;
//     }

//     if(original_number == ans)
//     {
//         return 1;
//     }

//     return 0;
// }

int f(int x, int y) {
    for (int i = 0; i < y; i++) {
        x = x + x + y;
    }
    return x;
}

int main()
{
    // cout<<"Enter the number : ";
    // int n;
    // cin>>n;

    // cout<<armstrong(n);
    cout<<f(10,20);
}
// 1,048,576.