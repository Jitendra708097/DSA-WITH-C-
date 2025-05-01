  // it stores only unique element
  // it stores values in sorted in ascending order
  // we can sort in descending order using this -> set<int,greater<int> >name_of_set
  // implementation of set is using AVL tree and Red black tree
  // value print krne liye inonrder traversal lga denge AVL tree pe
#include<iostream>
#include<bits/stdc++.h>
#include<set>
using namespace std;
int main()
{
  int value;
  cout<<"Enter thr value you want to search in set "<<endl;
  cin>>value;
 set<int>s1;
 s1.insert(50); 
 s1.insert(55);
 s1.insert(5);
 s1.insert(505);
 s1.insert(50);
 s1.insert(50);
 s1.insert(50);
 s1.insert(506);
 s1.insert(50);
 s1.insert(5066);
 s1.insert(5099);
  // print set using iterator
  cout<<" Print the all element of set : ";
  for(auto it = s1.rbegin();it!=s1.rend();it++)
  {
    cout<<*it<<" ";
  }
   cout<<endl;
   // agar element ko descending order me print krana ho to kuch is tarah

 set<int,greater<int>>s2;
 s2.insert(50); 
 s2.insert(55);
 s2.insert(5);
 s2.insert(505);
 s2.insert(50);
 s2.insert(50);
 s2.insert(50);
 s2.insert(506);
 s2.insert(50);
 s2.insert(5066);
 s2.insert(5099);
  // print set using iterator
  cout<<"Print element in descending order "<<endl;
  cout<<" Print the all element of set : ";
  for(auto it = s2.begin();it!=s2.end();it++)
  {
    cout<<*it<<" ";
  }
  cout<<endl;
  // search element in set
  cout<<"searching element in set "<<endl;
    if(s1.find(value) != s1.end())
    {
      cout<<" Value is present in set "<<endl;
    }
    else
    {
      cout<<"value not present in set "<<endl;
    }
    cout<<s1.count(value)<<endl;       // find the element in set
    cout<<s1.erase(5099)<<endl;        // delete element in set
    cout<<" Print the all element of set : ";
  for(auto it = s1.begin();it!=s1.end();it++)
  {
    cout<<*it<<" ";
  }
}
