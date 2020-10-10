#include <bits/stdc++.h>
using namespace std;
 
#define int long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define rep(i,a,b) for(int i=a;i<b;i++)
#define repr(i,a,b) for(int i=a;i>=b;i--)
#define endl '\n'
#define pi 3.141592653589793238
#define mp make_pair
#define pb push_back
#define precise cout<<fixed<<setprecision(20)
#define ff first
#define ss second
#define uniq(v) v.resize(distance(v.begin(),unique(all(v))))
#define lb lower_bound
#define ub upper_bound
 
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<pair<int,int>> vii;
const int inf=1e18;
const int N=100001;
int mod=1000000007;
//int mod=998244353;
 
int min(int a,int b){if(a<b) return a; else return b;}
int max(int a,int b){if(a>b) return a; else return b;}
int power(int a,int b){int res=1;a%=mod; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
int gcd(int p, int q){if(p%q==0) return q; else{return gcd(q,p%q);}} 
int mul(int a,int b){return ((a%mod)*(b%mod))%mod;}
int sub(int a,int b){return (((a-b)%mod)+mod)%mod;}
 
void solve()
{
	int n,m;
	cin>>n>>m;
	char c[n][m];
	rep(i,0,n)
	rep(j,0,m)
	cin>>c[i][j];
	int a[n][m];
	rep(i,0,n)
	rep(j,0,m)
	if(c[i][j]=='#')
	a[i][j]=0;
	else
	a[i][j]=1;
	rep(i,0,n)
	{
		rep(j,0,m)
		{
			if(a[i][j]==0)
			continue;
			if(i>0&&j>0)
			a[i][j]=(a[i-1][j]%mod+a[i][j-1]%mod)%mod;
			else if(i>0)
			a[i][j]=a[i-1][j];
			else if(j>0)
			a[i][j]=a[i][j-1];
		}
	}
	cout<<a[n-1][m-1];
}
 
signed main()
{
    ios::sync_with_stdio(0); 
    cin.tie(0);cout.tie(0);
    int t=1;
    rep(i,0,t)
    {
    	//cout<<"Case #"<<t+1<<": ";
    	solve();
    }
    return 0;
}
