#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int s=0;s<t;s++)
    {
    int n;
    cin >> n;
    int q=2;
    int arr[10000]={0};
    arr[0] = 1;
    int len=1;
    int x=0;int carry=0;
    while(q<=n)
    {
        x=0;carry=0;
        while(x<len)
        {
            arr[x] = arr[x]*q;
            arr[x] = arr[x]+carry;
            carry = arr[x]/10;
            arr[x] = arr[x]%10;
            x++;
        }
        while(carry!=0)
        {
            arr[len] = carry%10;
            carry = carry/10;
            len++;
        }
        q++;
    }
    for(int i=len-1;i>=0;i--)
    {
        cout << arr[i];
    }
    cout << endl;
    }
}