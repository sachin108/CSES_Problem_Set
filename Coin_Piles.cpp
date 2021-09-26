#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n,x,y;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x>>y;
		if((x+y)%3==0 && min(x,y)>=max(x,y)/2)
			cout<<"YES";
		else
			cout<<"NO";
		cout<<endl;
	}
	return 0;
}