#include<bits/stdc++.h>
using namespace std;
int maxProfitAtmostTwice(int price[],int n)
{
    //mp1 --> minprice1 mxp --> max profit
    int mp1,mp2;
    mp1=mp2 = INT_MAX;
    int mxp1,mxp2;
    mxp1 = mxp2 = 0;
    for(int i=0;i<n;i++)
    {
        mp1 = min(mp1,price[i]);
        mxp1 = max(mxp1,price[i]-mp1);
        mp2 = min(mp2,price[i]-mxp1);
        mxp2 = max(mxp2,price[i]-mp2);
    }
    return mxp2;
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
    cout << maxProfitAtmostTwice(arr,n);
    return 0;
}