#include<bits/stdc++.h>
using namespace std;
//Chocolate Distribution Problem
int chocolateDistribution(int arr[],int n,int m)
{
    sort(arr,arr+n);
    int ans = INT_MAX;
    for(int i=0;i<=n-m;i++)
    {
        ans = min(ans,arr[i+m-1]-arr[i]);
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    for(int s=0;s<t;s++)
    {
    int n;
    cin >> n;
    int arr[n]={0};
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int m;
    cin >> m;
    cout << chocolateDistribution(arr,n,m) << endl;
    }
    return 0;
}