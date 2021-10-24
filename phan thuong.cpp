#include <bits/stdc++.h>

using namespace std;

//ifstream fi("Data.INP");
//ofstream fo("Data.OUT");

string a,b;
int keo=0;
char n,du=0;
bool al;

int main(int argc, char const *argv[])
{
	cin>>a>>b;

	al=(a.length()>b.length());
	int len= (al?a.length():b.length());
	int lmin= ((not al)?a.length():b.length());

	char *rel= new char[a.length()+1]{};

	for(int i=1;i<=lmin;i++){
		n= du+ a[a.length()-i]+ b[b.length()-i]-96;
		du=n/10;
		n=n%10;

		rel[len-i]= 48+ n;
		if(n>keo)
            keo=n;
	}

	for(int i=lmin+1;i<=len+1;i++){
		if(al){
            n= du+ a[a.length()-i] -48;
		}
		else{
            n= du+ b[b.length()-i] -48;
		}
		du=n/10;
		n=n%10;

		rel[len-i]= 48+ n;
        if(n>keo)
            keo=n;
	}
	if(du>0)
		rel[0]= du+48;
	cout<<rel<<endl<<keo;
	return 0;
}
