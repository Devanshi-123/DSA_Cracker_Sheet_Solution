#include<bits/stdc++.h>
using namespace std;
 vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        int n = intervals.size();
        ans.push_back(intervals[0]);
        int a=0;
        for(int i=1;i<n;i++)
        {
            if((ans[a][0]<=intervals[i][0]) && ((ans[a][1]>=intervals[i][0] && ans[a][1]<=intervals[i][1]) || (intervals[i][0]>=ans[a][0] && intervals[i][0]<=ans[a][1])))
            {
                ans[a][1] = max(ans[a][1],intervals[i][1]);
            }
            else{
                ans.push_back(intervals[i]);
                a=a+1;
            }
        }
        return ans;
    }
int main()
{
    vector<vector<int>>intervals;
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin >> x >> y;
        intervals[i].push_back(x);
        intervals[i].push_back(y);
    }
    vector<vector<int>>answer = merge(intervals);
    int s = answer.size();
    for(int j=0;j<s;j++)
    {
        cout << answer[j][0] << " " << answer[j][1] << ",";
    }
}