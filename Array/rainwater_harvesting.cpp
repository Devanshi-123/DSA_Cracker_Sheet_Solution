#include<bits/stdc++.h>
using namespace std;
int rainwaterHarvesting(int height[],int n)
{
    int water=0;
    int L[n] = {0};
    int R[n] = {0};
    int maxl,maxr;
    maxl = maxr = 0;
    //To find the leftmost tallest building
    for(int i=0;i<n;i++)
    {
        if(height[i]>=maxl)
        {
            maxl = height[i];
        }
        L[i] = maxl;
    }
     //To find the rightmost tallest building
    for(int i=n-1;i>=0;i--)
    {
        if(height[i]>=maxr)
        {
            maxr = height[i];
        }
        R[i] = maxr;
    }
    for(int k=0;k<n;k++)
    {
        water = water + abs(min(L[k],R[k])-height[k]);
    }
    return water;
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
    cout << rainwaterHarvesting(arr,n);
    return 0;
}