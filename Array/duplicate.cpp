#include<bits/stdc++.h>
using namespace std;
int duplicate(int arr[], int n){
   sort(arr,arr+n);
   int i;
   for(i=0;i<n;i++)
   {
       if(arr[i]==arr[i-1])
       {
            break;
       }
   }
   return arr[i];
}
//One duplicate in array of n+1 integers
int main()
{
    int n;
    cin >> n;
    int arr[n]={0};
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << duplicate(arr,n);
    return 0;
}