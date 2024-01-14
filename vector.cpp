#include<bits/stdc++.h>
using namespace std;

//vector is also called dynamic array...
//it contain value as we want...
void print(vector<int>arr)
{
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int>v={1,2,3,4};
    cout<<v[0]<<endl;//
    v.push_back(5);
    print(v);
    v.emplace_back(9); //1 2 3 4 5 9 
    print(v);
    vector<int>arr(5,10); //10 10 10 10 10 
    print(arr);
    arr.push_back(20); // 10 10 10 10 10 20 
    //when copy value from other vector...
   
    print(arr);
    return 0;
   
}