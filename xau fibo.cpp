#include <bits/stdc++.h>

using namespace std;

//ifstream fi("Data.INP");
//ofstream fo("Data.OUT");

int t;
string f[33];


int n,k;
int rel;
void create(){
	for(int i=2;i<=n;i++){
		if(f[i]=="")
			f[i]=f[i-2]+ f[i-1];
	}
	return;
}
int main(int argc, char const *argv[])
{
	f[0]="a";
	f[1]="b";
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n>>k;
		if(f[n]=="")
			create();
		rel=0;
		for(int j=0;j<k;j++){
			if(f[n][j]=='a')
				rel++;
		}
		cout<<rel<<endl;
	}
	return 0;
}
