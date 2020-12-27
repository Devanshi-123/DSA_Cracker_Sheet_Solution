#include<bits/stdc++.h>
using namespace std;
// method 1 with time complexity of n*n*n
void maxsumSubarrays(int A[],int n)
{
	int max = 0;
	int sum;sum=0;
	for(int p=0;p<n;p++)
	{
         sum=sum+A[p];
          if(sum <0)
          {
          	sum =0;
		  }
			if(sum>max)
			{
				max=sum;
			}
		}
	cout << max << endl;
}
int main()
{
	int t;
	cin >> t;
	for(int i=0;i<t;i++)
	{
	 int n;
	 cin >> n;
	 int A[n];
	 for(int i=0;i<n;i++){
	 	cin >> A[i];
	 }
	 maxsumSubarrays(A,n);
}
	 return 0;
}
