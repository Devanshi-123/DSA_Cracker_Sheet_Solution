#include<bits/stdc++.h>
using namespace std;
//Smallest Subarray with sum greater than x
int smallestSubarray(int arr[],int n,int x)
{
   int sum,l,c;l=INT_MAX;
   for(int i=0;i<n-1;i++)
   {
       sum = arr[i];
       c=1;
       for(int j=i+1;j<n;j++)
       {
           if(sum>x)
           {
               l = min(l,c);
           }
           else{
               sum += arr[j];
               c++;
           }
       }
   }
   if(arr[n-1]>x)
   {
       l=1;
   }
   return l;
}
int main()
{
    int t;
    cin >> t;
    for(int s=0;s<t;s++)
    {
    int n;int x;
    cin >> n >> x;
    int arr[n]={0};
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << smallestSubarray(arr,n,x) << endl;
    }
    return 0;
}