#include<bits/stdc++.h>
using namespace std;
long long max_product_subarray(int arr[],int n)
{
	  long long minVal = arr[0]; 
    long long maxVal = arr[0]; 
  
    long long maxProduct = arr[0]; 
  
    for (int i = 1; i < n; i++) { 
        long long x = (long long)arr[i];
  
        // When multiplied by -ve number, 
        // maxVal becomes minVal 
        // and minVal becomes maxVal. 
        if (x < 0) 
            swap(maxVal, minVal); 
  
        // maxVal and minVal stores the 
        // product of subarray ending at arr[i]. 
        maxVal = max(x, maxVal * x); 
        minVal = min(x, minVal * x); 
  
        // Max Product of array. 
        maxProduct = max(maxProduct, maxVal); 
    } 
  
    // Return maximum product found in array. 
    return maxProduct; 
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
    cout << max_product_subarray(arr,n);
    return 0;
}