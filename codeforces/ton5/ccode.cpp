#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int i=a;i<=n;++i) 
#define rrep(i,a,n) for(int i=n;i>=a;i--)
#define maxn 200005
int a[maxn],b[maxn],c[maxn],res[maxn];
void work(){
    int n,x;cin>>n>>x;
    rep(i,0,n-1) cin>>a[i];
    rep(i,0,n-1) cin>>b[i];
    iota(c,c+n,0);
    sort(c,c+n,[&](int l,int r){
        return a[l]<a[r];
    });sort(b,b+n);
    rep(i,0,x-1)
        res[c[n-x+i]]=b[i];
    rep(i,x,n-1)
        res[c[i-x]]=b[i];
    rep(i,0,n-1) x-=(a[i]>res[i]);
    
    if(x==0){
        cout<<"YES\n";rep(i,0,n-1) cout<<res[i]<<" ";cout<<endl;
    }
    else cout<<"NO\n";
    
}
int main(){
    int t;cin>>t;while(t--){
        work();
    }
    return 0;
}