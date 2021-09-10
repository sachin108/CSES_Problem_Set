#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n==2||n==3)
		cout<<"NO SOLUTION";
	else{
		string s="";
		for(int i=2;i<=n;i+=2){
			s+=to_string(i)+" ";
		}
		for(int i=1;i<=n;i+=2){
			s+=to_string(i)+" ";
		}
		cout<<s;
	}
	return 0;
}