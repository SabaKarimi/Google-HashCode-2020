#include<bits/stdc++.h>
#define int long long 
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define all(a) a.begin(),a.end()
#define ld long double
#define ub upper_bound
#define lb lower_bound
#define pii pair<int,int>
using namespace std;
signed main(){
    fast;
   	freopen("a_example.txt", "r", stdin);
   	freopen("1.txt", "w", stdout);
   	int nb,nl,td;
   	cin>>nb>>nl>>td;
   	int sc[nb];
   	for(int i=0;i<nb;i++){
   		cin>>sc[i];
   	}
   	int library[nl][3];
   	vector<int> adj[nl];
   	for(int i=0;i<nl;i++){
   		int b,signup,scanlimit;
   		cin>>b>>signup>>scanlimit;
   		library[i][0] = b;
   		library[i][1] = signup;
   		library[i][2] = scanlimit;
   		for(int j=0;j<b;j++){
   			int cc;
   			cin>>cc;
   			adj[i].pb(cc);
   		}
   	}
   	cout<<nl<<"\n";
   	int till = 0;
   	int mp[nb]={};
   	vector<int> ans[nl];
	for(int i=0;i<nl;i++){
		for(auto it:adj[i]){
			if(mp[it])
				continue;
			till++;
			mp[it] = 1;
			ans[i].pb(it);
			if(till == nb)
				break;
		}
   	}
   	for(int i=0;i<nl;i++){
   		cout<<i<<" "<<(int)ans[i].size();
   		cout<<"\n";
   		for(auto it:ans[i]){
   			cout<<it<<" ";
   		}
   		cout<<"\n";
   	}
}   
