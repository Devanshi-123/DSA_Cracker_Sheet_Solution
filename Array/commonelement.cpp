#include<bits/stdc++.h>
using namespace std;
void commonElements(int A[],int B[],int C[],int n1,int n2,int n3)
{
    vector<int>ans;int a,b,c;
            for( a=0;a<n1-1;a++)
            {
                if(A[a]!=A[a+1])
                {
                    ans.push_back(A[a]);
                }
            }
            ans.push_back(A[a]);
            for( b=0;b<n2-1;b++)
            {
                if(B[b]!=B[b+1])
                {
                    ans.push_back(B[b]);
                }
            }
            ans.push_back(B[b]);
            for( c=0;c<n3-1;c++)
            {
                if(C[c]!=C[c+1])
                {
                    ans.push_back(C[c]);
                }
            }
            ans.push_back(C[c]);
            sort(ans.begin(),ans.end());
            vector<int>answer;
            for(int t=0;t<ans.size()-2;t++)
            {
                if(ans[t]==ans[t+1] && ans[t+1]==ans[t+2])
                {
                    answer.push_back(ans[t]);
                }
            }
            for(int s=0;s<answer.size();s++)
            {
                cout << answer[s] << " ";
            }
}
int main()
{
    int n1,n2,n3;
    cin >> n1 >> n2 >> n3;
    int A[n1] = {0};
    int B[n2] = {0};
    int C[n3] = {0};
    commonElements(A,B,C,n1,n2,n3);
    return 0;
}