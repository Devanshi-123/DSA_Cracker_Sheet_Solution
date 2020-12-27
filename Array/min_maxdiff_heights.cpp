#include<bits/stdc++.h>
using namespace std;
int min_maxdiff(int arr[],int n,int k)
{
    if(n==1)
    {
        return 0;
    }
    sort(arr,arr+n);
    //maximum difference before performing the operation
    int ans = arr[n-1]-arr[0];
    //Now we can add or sub k but resulting in a non negative number
    for(int i=0;i<n-1;i++)
    {
        if(arr[i+1]>=k)
        {
            vector<int>v;
            int temp=0;
            v.push_back(arr[0]+k);
            v.push_back(arr[i]+k);
            v.push_back(arr[i+1]-k);
            v.push_back(arr[n-1]-k);
            for(int j=0;j<v.size();j++)
          {
          for(int k=j+1;k<v.size();k++)
           {
             temp = max(temp,arr[k]-arr[j]);
           }
          }
          ans = min(ans,temp);
        }
    }
    return ans;
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
    cin >>k;
    int answer = min_maxdiff(arr,n,k);
    cout << answer;
    return 0;
}