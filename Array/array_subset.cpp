#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        int flag=0;
	  vector<int>v1;
	  vector<int>v2;
	  int m,n;
    	cin >> m >> n;
	for(int j=0;j<m;j++)
	{
	    int x;
	    cin >> x;
	    v1.push_back(x);
	}
	for(int z=0;z<n;z++)
	{
	    int y;
	    cin >> y;
	    v2.push_back(y);
	}
	for(int b=0;b<n;b++)
	{
	    if(find(v1.begin(),v1.end(),v2[b])==v1.end())
	    {
	        flag=1;
	    }
	}
	 if(flag==0)
	 {
	     cout << "Yes" << endl;
	 }
	 else{
	     cout << "No" << endl;
	 }
    }
	return 0;
}