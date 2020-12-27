#include<bits/stdc++.h>
using namespace std;
int long_cons_subs(int arr[], int N)
{
   unordered_set<int>s;
   for(int i=0;i<N;i++)
   {
       s.insert(arr[i]);
   }
   int answer=0;
   for(int i=0;i<N;i++)
   {
       int j = arr[i];
       //to see this j is the start of a subsequence or not
       if(s.find(j-1)==s.end())
       {
           while(s.find(j)!=s.end())
           {
               j++;
           }
           answer = max(answer,j-arr[i]);
       }
   }
   return answer;
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
    cout << long_cons_subs(arr,n);
    return 0;
}