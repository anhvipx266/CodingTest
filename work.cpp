#include <bits/stdc++.h>

using namespace std;

ifstream fi("WORK.INP");
ofstream fo("WORK.OUT");

int n;
short int t[1000000];
short int p[1000000];
int m=0;
int main(int argc, char const *argv[])
{
	fi>>n;
	//read
	for (int i = 0; i < n; i++)
	{
		fi>>t[i];
	}
	for (int i = 0; i < n-1; i++)
	{
		fi>>p[i];
	}
	//process
	int i=0;
	while(i<n-2){
		int dt1= t[i]+t[i+1]- p[i];
		int dt2= t[i+1] + t[i+2]- p[i+1];
		if(dt1>=dt2){
			m+= p[i];
			i+=2;
		}
		else{
			m+= t[i];
			i+=1;
		}
	}
	if(i==n-2){
		m+=p[i];
	}
	else{
		m+=t[i];
	}
	//output
	fo<<m<<endl;
	return 0;
}
