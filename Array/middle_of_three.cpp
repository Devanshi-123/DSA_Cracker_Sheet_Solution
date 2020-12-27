#include<bits/stdc++.h>
using namespace std;
//Find the middle of three numbers without comparisons
int middle_of_three(int a,int b,int c)
{
    int mx = max(a,max(b,c));
    int mn = min(a,min(b,c));
    int ans = ((a+b+c)-(mx+mn));
    return ans;
}
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    int ans = middle_of_three(a,b,c);
    cout << ans << endl;
    return 0;
}