#include<bits/stdc++.h>
using namespace std;
void sort012(int arr[],int n)
{
    int cnt0 = count(arr,arr+n,0);
    int cnt1 = count(arr,arr+n,1);
    int cnt2 = count(arr,arr+n,2);
    int i=0;
    while(cnt0>0)
    {
        arr[i++]=0;
        cnt0--;
    }
    while(cnt1>0)
    {
        arr[i++]=1;
        cnt1--;
    }
    while(cnt2>0)
    {
        arr[i++]=2;
        cnt2--;
    }
    for(int t=0;t<n;t++)
    {
        cout << arr[t] << " ";
    }
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
    sort012(arr,n);
    return 0;
}