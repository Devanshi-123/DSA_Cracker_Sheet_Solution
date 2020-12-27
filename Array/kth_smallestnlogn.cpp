#include<bits/stdc++.h>
using namespace std;
int kth_smallest(int arr[],int n,int k)
{
    //sort the array and return k-1th element of the sorted array
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    return arr[k-1];
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