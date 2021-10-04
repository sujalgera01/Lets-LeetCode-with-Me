#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		vector<int> v(n);
		for(int i=0;i<v.size();i++){
			cin>>v[i];
		}
		
		for(int i=0;i<v.size()-1;i++){
			for(int j = i+1;j<v.size();j++){
				if(v[j] - v[i] == x || v[i] - v[j] == x){
					cout<<v[i]<<" " <<v[j]<<endl;
				}
			}
		}
		
	}
}
