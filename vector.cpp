#include<bits/stdc++.h>
using namespace std;
void print(vector<int>arr)
{
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    vector<int>v={1,2,3,4};
    cout<<v[0]<<endl;//
    v.push_back(5);
    print(v);
    v.emplace_back(9);
    print(v);
    return 0;
   
}