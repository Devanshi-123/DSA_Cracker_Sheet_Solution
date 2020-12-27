#include<bits/stdc++.h>
using namespace std;
bool zero_sum_subarray(int arr[], int n)
{
    unordered_set<int>s;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
        if(sum==0 || s.find(sum)!= s.end())
        {
            return true;
        }
        s.insert(sum);
    }
    return false;
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
    if(zero_sum_subarray(arr,n))
    {
        cout << "YES" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}