#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>& prices) {
       int n;
        n = prices.size();
        int maxprofit = 0;
        int minprice_index=0;
        for(int i=1;i<n;i++)
        {
            if(prices[i]<prices[minprice_index])
            {
                minprice_index = i;
            }
            if(prices[i]-prices[minprice_index]>=maxprofit)
            {
                maxprofit = prices[i]-prices[minprice_index];
            }
        }
        return maxprofit;
}
int main()
{
    int n;
    cin >> n;
    vector<int>prices;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        prices.push_back(x);
    }
    cout << maxProfit(prices);
    return 0;
}