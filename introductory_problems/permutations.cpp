 
#include <bits/stdc++.h>
using   namespace std;
using   namespace std::chrono; 
#define ll long long
#define ld long double
#define fr(i,u,n) for(i=u;i<n;i++)
#define frv(i,n,u) for(i=n;i>=u;i--)
#define vll vector<ll>
#define vbl vector<bool>
#define pll pair<ll,ll>
#define mll map<ll,ll>
#define vpll vector<pair<ll,ll>>
#define mpll map<pair<ll,ll>,ll>
#define printn(v) for(auto jj:v) cout<<jj<<' '; cout<<'\n';
#define print(v) cout<<v<<'\n';
#define deb(v) cout<<#v<<" is "<<v<<'\n';
#define debn(v) cout<<#v<<" is \n"; for(auto jj:v) cout<<jj<<' '; cout<<'\n';
#define pb push_back
#define modd (ll)(1e9 + 7)
#define all(v) v.begin(),v.end()
#define lb(v,x) lower_bound(v.begin(), v.end(), x)
#define ub(v,x) upper_bound(v.begin(), v.end(), x)
#define fio ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL)
ll modmul(ll a,ll b) { return ( (a%modd) * (b%modd) )%modd;  }
ll modadd(ll a,ll b) { return ( (a%modd) + (b%modd) )%modd;   }
ostream& operator<<(ostream& os, const pll& p) {os<<p.first<<' '<<p.second<<'\n';return os;}
// struct comp { bool operator()(Person const& p1, Person const& p2) { return (p1.cnt*p1.wt) < (p2.cnt*p2.wt); } }; 
// bool operator<(const tri& p1, const tri& p2) {   if(p1.x != p2.x)  return p1.x>p2.x; else if(p1.y != p2.x) return p1.y>p2.y; else return p1.z>p2.z;     } 
//  ostream& operator<<(ostream& os, const pll& p) {os<<p.first<<' '<<p.second<<'\n';return os;}
 
 
 
 
 
 
 
 
int main()
{
fio;
ll tt;
ll n=0,m=0,k=0,x=0,y=0,z=0,i=0,j=0;  
string str; char ch;
vll a,b;
 
 
//auto start = high_resolution_clock::now(); 
 
tt=1;
//cin>>tt;
ll temp=tt;
while(tt--)
{
  n=0,m=0,k=0,x=0,y=0,z=0,i=0,j=0;  
  str.clear(); ch='.';
  a.clear(); b.clear();
 
  //cout<<"Case #"<<temp-tt<<": ";
  //cin>>n;  a.resize(n,0); fr(i,0,n) {cin>>a[i]; }
 
 
 
cin>>n; // a.resize(n,0); fr(i,0,n) {cin>>a[i]; }
if(n<=3 && n>1) cout<<"NO SOLUTION";
else 
{
  fr(i,1,n) {cout<<i+1<<' '; i++;}
  fr(i,0,n) {cout<<i+1<<' '; i++;}
}
  
 
 
 
 
 
 
  cout<<'\n';
} 
 
 
// auto stop = high_resolution_clock::now(); 
// auto duration = duration_cast<microseconds>(stop - start); 
// cout<< duration.count()/1000000.0 << " seconds" << endl; 
 
  return 0;
} 
 
 
 
/*
 
 
 
 
 
 
*/