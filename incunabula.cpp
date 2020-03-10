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

struct entry{
	int scanlimit;
	int id;
	int books;
	int signup;
	vector <int > v;
};

bool cmp(entry &e1 ,entry &e2){
	return e1.signup<e2.signup;
}
signed main(){
    fast;
   	freopen("c_incunabula.txt", "r", stdin);
   	freopen("3.txt", "w", stdout);
   	int nb,nl,td;
   	cin>>nb>>nl>>td;
   	int sc[nb];
   	for(int i=0;i<nb;i++){
   		cin>>sc[i];
   	}
   	//int library[nl][3];
   	vector <struct entry > library;
   	vector<int> adj[nl];
   	for(int i=0;i<nl;i++){
   		int b,signup,scanlimit;
   		cin>>b>>signup>>scanlimit;
   		struct entry obj;
   		obj.books = b;
   		obj.signup = signup;
   		obj.scanlimit = scanlimit;
   		obj.id = i;
   		/*library[i][0] = b;
   		library[i][1] = signup;
   		library[i][2] = scanlimit;
   		library[i][4] = i;*/
   		for(int j=0;j<b;j++){
   			int cc;
   			cin>>cc;
   			obj.v.pb(cc);
   		}
   		library.pb(obj);
   	}
   	sort(all(library),cmp);
   	int hh = 0;
   	int till = 0;
   	int mp[nb]={};
   	vector<int> ans[nl];
	for(int i=0;i<nl;i++){
		int ff = 0;
		struct entry e = library[i];
		int idd = e.id;
		for(auto it:e.v){
			if(mp[it])
				continue;
			till++;
			mp[it] = 1;
			ff = 1;
			ans[idd].pb(it);
			if(till == nb)
				break;
		}
		if(ff){
			hh++;
		}
   	}
   	cout<<hh<<"\n";
   	for(int i=0;i<nl;i++){
   		struct entry e = library[i];
		int idd = e.id;
   		if((int)ans[idd].size()==0)
   			continue;
   		cout<<idd<<" "<<(int)ans[idd].size();
	   		cout<<"\n";
	   		for(auto it:ans[idd]){
	   			cout<<it<<" ";
	   		}
   		cout<<"\n";
   	}
}   
