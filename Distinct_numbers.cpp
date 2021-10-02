#include<bits/stdc++.h>
using namespace std;
int main(){
	long number_of_inputs;
	long value;
	vector<long> v;
	cin>>number_of_inputs;
	for(int i=0;i<number_of_inputs;i++){
		cin>>value;
		v.push_back(value);
	}
	sort(v.begin(),v.end());
	long number_of_distinct_values=1;
	int lIndex=0;
	for(int i=1;i<number_of_inputs;i++){
		if(v[lIndex]!=v[i]){
			++number_of_distinct_values;
		}
		++lIndex;
	}
	cout<<number_of_distinct_values;
}