#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int l,int r)
{
    int pivot = arr[r];
    cout << pivot << ".";
    int i=l;
    for(int j=l;j<=r-1;j++)
    {
        if(arr[j]<=pivot)
        {
            swap(arr[i],arr[j]);
            i++;
        }
    }
    swap(arr[i],arr[r]);
    cout << i << ":";
    return i;
}
int kth_smallest(int arr[],int l,int r,int k)
{
    if(k>0 && k<=r-l+1)
    {
    int index = partition(arr,l,r);
    cout << index << ",";
    //if index-l = k-1
    if(index-l == k-1)
    {
        return arr[index];
    }
    if(index-l > k-1)
    {
        //search in left subarray
        r=index-1;
        kth_smallest(arr,l,r,k);
    }
    return
        //search in right subarray
        l=index+1;
        kth_smallest(arr,l,r,k-index+l-1);
    }
    return INT_MAX;
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
    int smallest = kth_smallest(arr,0,n-1,k);
    cout << smallest;
    return 0;
}