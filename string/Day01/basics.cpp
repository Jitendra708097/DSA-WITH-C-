#include<iostream>
using namespace std;
int main()
{
    // char arr[] = {'j','e','n','d','r','a','s','h','a','r'};
   // cout<<arr;
 /*  char arr[20];
   cin>>arr;
   arr[3] = '\0';  // \0 this is a null character which is store end of end string for traversal
   cout<<arr;
   cout<<endl;

   // introducing to string
     // here is no reqirement to tell size of word
   string s;
   cin>>s;
   cout<<s;
   */


  // agar space ko bhi print krana hai to hm getline function ka use krte hai

  string s;
  getline(cin,s);
  cout<<s<<endl;
  cout<<s.size();  // isse hm string ka size pta kr lenge
}