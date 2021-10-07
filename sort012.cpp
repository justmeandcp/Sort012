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
int low=0,high=n-1,mid=0;

while(mid<=high)
{
if(a[mid]==1)
{
    mid++;
}
else if(a[mid]==0)
{
    swap(a[mid],a[low]);
    low++;
    mid++;

}
else
{
    swap(a[mid],a[high]);
    high--;
}
}
  for(int x:arr)
      cout<<x<<" ";
   
    return 0;
}
