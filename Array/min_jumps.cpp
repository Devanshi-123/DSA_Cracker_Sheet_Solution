#include<bits/stdc++.h>
using namespace std;
int minJumps(int arr[], int n){
    if(n==0 || arr[0]==0)
    {
        return INT_MAX;
    }
    int jumps[n];
    jumps[0] = 0;
    for(int i=1;i<n;i++)
    {
        jumps[i] = INT_MAX;
        for(int j=0;j<i;j++)
        {
            if(j+arr[j]>=i && jumps[j]!=INT_MAX)
            {
                jumps[i] = min(jumps[i],jumps[j]+1);
                break;
            }
        }
    }
    return jumps[n-1];
}
int main()
{
    int n;
    cin >> n;
    int arr[n]={0};
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << minJumps(arr,n);
    return 0;
}