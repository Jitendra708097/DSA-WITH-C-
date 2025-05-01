#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<char,int>mp;
    mp['A'] = 1;
    mp['B'] = 11;
    mp['C'] = 12;
    mp['D'] = 13;
    mp['E'] = 14;
    mp['F'] = 15;
    mp['G'] = 16;
    mp['H'] = 17;
    

    // first method to interate in map /

    // why not use int instead of whole map 
    // Type Mismatch: The type of iterator for a std::map is not an integer. 
    // The map's iterator is a complex type that knows how to traverse the map's underlying structure.
    //  Using int would not provide the correct functionality,
    //  as an integer cannot navigate through the elements of a map

    // for(map<char,int>::iterator it = mp.begin();it!= mp.end();it++)
    // {
    //     cout<<it->first<<"=>"<<it->second<<endl;
    // }
     
    //  2nd method for iterating on map using auto 

       for(auto it = mp.begin();it!= mp.end();it++)
    {
        cout<<it->first<<"=>"<<it->second<<endl;
    }


}