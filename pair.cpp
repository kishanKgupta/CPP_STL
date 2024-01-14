#include<bits/stdc++.h>
using namespace std;
//algorithm
//containers
//functions
//iterators
int main()
{
   pair<int,int>p={1,3};
   pair<int,pair<int,int>>q={1,{3,4}};
   cout<<p.first<<endl;//1
   cout<<p.second<<endl;//3
   cout<<q.second.second<<endl;//4
   //this is always contain value in pair

   //array of pair..
   pair<int,int>arr[]={{1,2},{2,3}};
   cout<<arr[0].first<<endl;
   cout<<arr[1].second<<endl;
   return 0; 
}
