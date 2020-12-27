#include<bits/stdc++.h>
using namespace std;
//finding reverse of a string in O(1) space complexity and O(n) time complexity.
string reverse_array(string str)
{
    int l = str.length();
    int c=0;
    for(int i=l-1;i>=0;i--)
    {
        str = str + str[i];
    }
    str.erase(0,l);
    return str;
}
int main()
{
    string str;
    cin >> str;
    string rev_str = reverse_array(str);
    cout << rev_str;
    return 0;
}