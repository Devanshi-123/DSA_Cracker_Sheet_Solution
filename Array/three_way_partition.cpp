#include<bits/stdc++.h>
using namespace std;
void threeWayPartition(vector<int>& array,int a,int b)
{
    int n = array.size();
        int p = 0;
        int q = n-1;
        int i=0;
        for(i=0;i<=q;)
        {
            if(array[i]<a)
            {
                swap(array[i],array[p]);
                p++;
                i++;
            }
           else if(array[i]>b)
            {
                swap(array[i],array[q]);
                q--;
            }
            else{
           i++;
            }
        }
        for(int c=0;c<n;c++)
        {
            cout << array[c] << " ";
        }
    }
int main()
{
    vector<int>array;
    int a,b;
    cin >> a >> b;
    threeWayPartition(array,a,b);
    return 0;
}