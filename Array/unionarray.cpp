#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        int n,m;
        cin >> n >> m;
        int x,y;
        set<int>s;
        for(int j=0;j<n;j++)
        {
            cin >> x;
            s.insert(x);
        }
        for(int k=0;k<m;k++)
        {
            cin >> y;
            s.insert(y);
        }
        //to print union
        for(set<int>::iterator it=s.begin();it!=s.end();it++)
        {
            cout << *(it) << " ";
        }
        cout << endl;
    }
    return 0;
}