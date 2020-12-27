#include<bits/stdc++.h>
using namespace std;
void alternate(vector<int>& vect,int n)
{
    int a = 0;int b=1;
    for(int i=0;i<n;i++)
    {
        if(vect[i]<0)
        {
            swap(vect[a],vect[i]);
            a++;
        }
    }
    int c=a;
    while(a>0)
    {
        vect.insert(vect.begin()+b,vect[c]);
        c++;
        vect.erase(vect.begin()+c);
        b=b+2;
        a--;
    }
    for(int t=0;t<n;t++)
    {
        cout << vect[t] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int>vect;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        vect.push_back(x);
    }
    alternate(vect,n);
    return 0;
}