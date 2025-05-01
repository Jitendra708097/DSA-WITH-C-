 // all properties are same of set but some differnce
 // it stores unique and duplicates element in sorted way
 #include<iostream>
 #include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
int main()
{
 unordered_set<int>s1;
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
  for(auto it = s1.begin();it!=s1.end();it++)
  {
    cout<<*it<<" ";
  }
}