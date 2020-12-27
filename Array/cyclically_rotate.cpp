#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin >> n;
        int arr[n]={0};
        for(int k=0;k<n;k++)
        {
            cin >> arr[k];
        }
        int key=arr[n-1];
        for(int j=n-1;j>=0;j--)
        {
            arr[j+1]=arr[j];
        }
        arr[0] = key;
        for(int k=0;k<n;k++)
        {
           cout << arr[k] << " ";
        }
        cout << endl;
    }
    return 0;
}