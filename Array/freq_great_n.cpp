#include<bits/stdc++.h>
using namespace std;
void freqGreater(int arr[],int n,int k)
{
    unordered_map<int,int>freq;
    for(int i=0;i<n;i++)
    {
        freq[arr[i]]++;
    }
    set<int>s;
    for(int i=0;i<n;i++)
    {
        if(freq[arr[i]]>(n/k))
        {
            s.insert(arr[i]);
        }
    }
     for(set<int>::iterator it=s.begin();it!=s.end();it++)
        {
            cout << *(it) << " ";
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
    int k;
    cin >> k;
    freqGreater(arr,n,k);
    return 0;
}