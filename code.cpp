#include <bits/stdc++.h>

using namespace std;


int main()
{
    int arr[5],arr2[5];
    cout<<"Enter array1"<<endl;int i;
    for(i=0;i<5;i++)
    cin>>arr[i];
    
     cout<<"Enter array2"<<endl;
    for(i=0;i<5;i++)
    cin>>arr2[i];
      set<int> s;
    
   
    for( i=0;i<5;i++)
    {
        s.insert(arr[i]);
    }
    for( i=0;i<5;i++)
    {
        s.insert(arr2[i]);
    }
    cout<<"Merged Array"<<endl;
    for(auto x:s)
    cout<<x<<" ";
    return 0;
}
 
 