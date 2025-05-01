 // list is data type which contains non contiguous order
 // operations on list
 // 1. front()
 // 2.back()
 // 3.push_back()
 // 4.push_front()
 // 5.size()
 // 6.pop_back()
 // 7.pop_front()
 //  8.empty() 
 // list<int>name_of_list; 
 #include<iostream>
 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
    list<int>l1;
    l1.push_back(5);
    l1.push_front(50);
    l1.push_back(582);
    l1.push_back(57);
    l1.push_back(53);
    l1.push_back(75);
    l1.push_back(59);
    l1.push_back(58);
    l1.push_back(54);
    l1.push_back(58);
    l1.push_front(15);
    l1.push_back(555);

    for(auto i : l1)
    {
        cout<<i<<" ";
    }
    cout<<endl;
cout<<"size of list : "<<l1.size()<<endl;
cout<<l1.empty()<<endl;
cout<<"Find iterator : "<<l1.back()<<endl;
cout<<l1.front()<<endl;

cout<<"After applying operation "<<endl;
l1.pop_back();
l1.pop_front();
 for(auto i = l1.begin();i!=l1.end ();i++ )
    {
        cout<<*i<<" ";
    }
     cout<<endl;
// list ko reverse print karane ke liye
cout<<" Print the reverse list : "<<endl;
     for(auto i = l1.rbegin();i!=l1.rend ();i++ )
    {
        cout<<*i<<" ";
    }

 }