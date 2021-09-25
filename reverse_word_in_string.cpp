#include<bits/stdc++.h>
using namespace std;
int main(){
	string s,res=" ";
	// cout<<res;
	getline(cin,s);
	int n=s.size();
	int i=0,j=0;
	while(i<n){
		while(i<0 && s[i]==' ')
			i++;
		if(i>=n)break;
		j=i;
		while(j<n && s[j]!=' ')
			j++;
		string w=s.substr(i,j-i);
		if(res=="  ")
			res=w;
		else
			res=w+" "+res;
		i=j+1;
	}
	cout<<res<<endl;
}
