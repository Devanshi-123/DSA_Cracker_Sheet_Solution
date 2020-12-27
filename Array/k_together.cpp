#include<bits/stdc++.h>
using namespace std;
//Minimum swaps to bring the elements smaller than k together
//use sliding window and two pointer approach
int kTogether(int arr[],int n,int x)
{
     int count = 0; int k=x;
    for (int i = 0; i < n; ++i) 
        if (arr[i] <= k) 
            ++count; 
      
    // Find unwanted elements in current 
    // window of size 'count' 
    int bad = 0; 
    for (int i = 0; i < count; ++i) 
        if (arr[i] > k) 
            ++bad; 
      
    // Initialize answer with 'bad' value of 
    // current window 
    int ans = bad; 
    for (int i = 0, j = count; j < n; ++i, ++j) { 
          
        // Decrement count of previous window 
        if (arr[i] > k) 
            --bad; 
          
        // Increment count of current window 
        if (arr[j] > k) 
            ++bad; 
          
        // Update ans if count of 'bad' 
        // is less in current window 
        ans = min(ans, bad); 
    } 
    return ans; 
}
int main()
{
    int t;
    cin >> t;
    for(int s=0;s<t;s++)
    {
    int n;int x;
    cin >> n ;
    int arr[n]={0};
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cin >> x;
    cout << kTogether(arr,n,x) << endl;
    }
    return 0;
}