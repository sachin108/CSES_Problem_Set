#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,res=1;
	cin>>n;
	while(n--){
		res=res<<1;
		//cout<<res;
		res%=(int)1e9+7;
	}
	cout<<res;
	return 0;
}