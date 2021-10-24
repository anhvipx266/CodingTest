#include <bits/stdc++.h>

using namespace std;

//ifstream fi("Data.INP");
//ofstream fo("Data.OUT");

int n,t;

int a[100001];
long long sum=0;

int s,e;


int main(int argc, char const *argv[])
{
	cin>>n>>t;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	s=1;
	e=n;
	while(sum>t){
		
		if(s==e)
			break;
		if(a[s]>a[e]){
			sum-=a[s];
			s++;
		}
		else if(a[s]<a[e]){
			sum-=a[e];
			e--;
		}
		else {
			if(sum-a[e]<t){
				s++;
				break;
			}
			for(int i=1;i<(e-s+1)/2;i++){
				if(a[s+i]==a[e-i]) continue;

				if(a[s+i]>a[e-i]){
					sum-= a[s];
					s++;

				}
				else{
					sum-=a[e];
					e--;
				}
				break;
			}
		}
	}
	cout<< e-s+1;
	return 0;
}
