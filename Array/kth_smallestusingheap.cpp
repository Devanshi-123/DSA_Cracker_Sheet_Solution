#include<bits/stdc++.h>
using namespace std;
int kth_smallest(int arr[],int n,int k)
{
   //Constructing a min_heap from array
    priority_queue<int>p;
    for(int i=0;i<n;i++)
    {
        p.push(-1*(arr[i]));
    }
    //To extract elements from heap
    int c=1;
    while (c<k)
    {
        p.pop();
        c=c+1;
    }
    int ans = (-1*p.top());
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
    cout << "Enter the value of k" << endl;
    cin >> k;
    int smallest = kth_smallest(arr,n,k);
    cout << smallest;
    return 0;
}