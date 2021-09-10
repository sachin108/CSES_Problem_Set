#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int originalMax=0,previous_max=1;
	int length_of_sequence=s.size();
	char previous_char=s[0];
	for(int i=1;i<length_of_sequence;i++){
		if(s[i]==previous_char){
			++previous_max;
		}	
		else{
			if(originalMax<previous_max){
				originalMax=previous_max;
			}
			previous_max=1;
		}
		previous_char=s[i];
	}
	if(originalMax<previous_max)
		originalMax=previous_max;
	cout<<originalMax;
	return 0;
}
