#include<bits/stdc++.h>
using namespace std;
void shift_neg(int arr[],int n)
{
    int i=0;
    for(int k=0;k<n;k++)
    {
        if(arr[k]<0)
        {
            swap(arr[i],arr[k]);
            i++;
        }
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
    shift_neg(arr,n);
    return 0;
}