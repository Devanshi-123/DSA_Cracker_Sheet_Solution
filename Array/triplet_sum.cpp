#include<bits/stdc++.h>
using namespace std;
void tripletSum(int arr[],int n,int k)
{
    int p,q,key;
    int flag=0;
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        key = k-(arr[i]);
        cout << key << ";";
        p = i+1;
        q = n-1;
        if(flag == 1)
        {
            break;
        }
        while(p<q)
        {
        if(arr[p]+arr[q]<key)
        {
            p++;
            cout << p << "'";
        }
        else if(arr[p]+arr[q]>key)
        {
            q--;
            cout << q << ".";
        }
        else{
            flag=1;
            cout << "WOW" << endl;
            break;
        }
        }
    }
    if(flag==1)
    {
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
int main()
{
    int n,k;
    cin >> n >> k;
    int arr[n]={0};
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    tripletSum(arr,n,k);
    return 0;
}