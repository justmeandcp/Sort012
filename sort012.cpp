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
sort(arr,arr+n);
for(i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
    
   
    return 0;
}
