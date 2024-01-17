#include <bits/stdc++.h>
using namespace std;

int main() {
	int k,ans=0;
	char c;
	cin>>k;
	string s;
	cin>>s;
	int n=s.size();
	sort(s.begin(),s.begin()+s.size());
	for(int i=0;i<s.size();i++){
	    if(i%k==0){
	       c=s[i]; 
	    }
	    if(s[i]==c){
	        ans++;
	    }
	}
	if(n==ans && ans%k==0){
	    for(int i=0;i<k;i++){
	        for(int j=0;j<s.size();j+=k){
	            cout<<s[j];
	        }
	    }
	}else{
	    cout<<"-1";
	}

	return 0;
}