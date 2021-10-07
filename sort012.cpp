//Sort 0 1 2 
//Time Complexity O(nlogn)

#include <bits/stdc++.h>
using namespace std;

int main() {    


int n;
cin>>n;
int arr[n];
int i;
for(i=0;i<n;i++)
    cin>>arr[i];
int zero=0,one=0,two=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==1)
            one++;
        if(arr[i]==2)
            two++;
        if(arr[i]==0)
            zero++;
    }
    for(i=1;i<=zero;i++)
        cout<<0<<" ";
     for(i=1;i<=one;i++)
        cout<<0<<" ";
     for(i=1;i<=two;i++)
        cout<<0<<" ";
    
   
    return 0;
}
