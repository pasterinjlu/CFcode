#include<bits/stdc++.h>
using namespace std;
#define maxn 300005
#define rep(i,a,n) for(int i=a;i<=n;i++)
int n,son[maxn][2];
string s;
//题意：给一颗二叉树，树上每个点有L，r,u的标记，表示往这个方向走的代价是0，其它方向是1，求从根到叶子的最小代价，
//二叉树的建树方式 s[maxn][2];
//树形dp
int dfs(int u){
    if(!son[u][0]&&!son[u][1]) return 0;
    int res=1e9;
    if(son[u][0]) res=min(res,dfs(son[u][0])+(s[u]!='L'));
    if(son[u][1]) res=min(res,dfs(son[u][1])+(s[u]!='R'));
    return res;
}
void work(){
    cin>>n>>s;
    s=" "+s;rep(i,1,n) cin>>son[i][0]>>son[i][1];
    cout<<dfs(1)<<"\n";
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int t;cin>>t;while(t--){
        work();
    }
    return 0;
}