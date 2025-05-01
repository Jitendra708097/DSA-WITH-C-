#include<iostream>
#include<vector>

using namespace std;
int main()
{
   /* const float factor = 2.54; // 1 inch equals to 2.54 cm
    float x,in,cm;
    char ch = 0;
    cout<<" Enter the length : ";
    cin>>x;
    cin>>ch;
    switch(ch)
    {
        case 'i':  // inch
        in = x;
        cm = x*factor;
        break;

        case 'c': // cm
        in = x/factor;
        cm = x;
        break;
        default:
        in = cm  =0;
        break;
    }

    cout<<in<<" in = "<<cm<<" cm\n";
    */

   // A class with the main purpose of holding objects is commonly called a container
   string str;
   cout<<" please enter your name ";
  // cin>>str;  //only reads before space
   getline (cin ,str);  // you can read a whole line using the getline () function
   cout<<" Hello "<<str;
  cout<<endl;
   // vector
   vector<int>ans(100);  // vector of 100 elements
   vector<int>ans[100];  // 100  empty vectors 
}