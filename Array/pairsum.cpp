#include <bits/stdc++.h>
using namespace std;
//brute force
//sorting + binary search
//sorting + two pointer approach
//hash table(unordered map)
int main()
{
    int n, k;
    cin >> n >> k;
    unordered_map<int, int> fre;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        //inserting elements in map
        cin >> arr[i];
        fre[arr[i]]++;
    }
    int answer = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k - arr[i])
        {
            answer += (fre[arr[i]] - 1);
        }
        else
        {
            answer += (fre[k - arr[i]]);
        }
    }
    answer /= 2;
    cout << "Number of pairs with the given sum are: "<<answer << endl;
    return 0;
}