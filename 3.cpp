#include<bits/stdc++.h>
using namespace std;

#define ll long long int
int main(){
	ll n;
	cin>>n;
	vector<ll> v;
	for(ll i = 2;i*i<=n;i++){
		if(n%i == 0){
			while(n%i == 0){
				v.push_back(i);
				n = n/i;
			}
		}
	}
	if(n > 1){
		v.push_back(n);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}