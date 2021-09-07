#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,in=0;
	cin>>n;
	long long sum=0;
	for(long long i=0;i<n-1;i++){
		cin>>in;
		sum+=in;
	}
	cout<<(n*(n+1)/2)-sum;
}