#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,res=0;
	cin>>n;
	int i=5;
	while(i<=n){
		res+=n/i;
		i=i*5;
	}
	cout<<res;
	return 0;
}
