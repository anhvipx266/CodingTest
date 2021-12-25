	#include <bits/stdc++.h>

	using namespace std;

	ifstream fi("TROCHOI.INP");
	ofstream fo("TROCHOI.OUT");

	int n;
	string a[10000]={};
	string str;
	int s,e;
	int p;


	void moveRight(int pos){
		//find ""
		bool ok= false;
		int i;
		for (i = pos; i < n; i++)
		{
			if(a[i]==""){
				ok= true;
				break;
			}
		}
		if(not ok)
			return;
		for (i = i-1; i >= pos; i--)
		{
			a[i+1]=a[i];
		}
		a[pos]="";
		return;
	}
	void moveLeft(int pos){
		//find ""
		bool ok= false;
		int i;
		for (i = pos; i >=0; i--)
		{
			if(a[i]==""){
				ok= true;
				break;
			}
		}
		if(not ok)
			return;
		for (i = i+1; i <= pos; i++)
		{
			a[i-1]=a[i];
		}
		a[pos]="";
	}

	int main(int argc, char const *argv[])
	{
		fi>>n;
		//add and sort
		for (int i = 0; i < n; i++)
		{
			fi>>str;
			
			s=0;
			e= n-1;
			while(1){
				p= (s+e)/2;
				if(a[p]==""){
					a[p]= str;
					break;
				}
				if(str.length()>=a[p].length()){
					if(p==(p+e-1)/2){
						s= p+1;
					}
					else{
						s=p;
					}
				}
				else{
					if(p==(p+s+1)/2){
						e= p-1;
					}
					else
						e=p;
				}
				if(s==e){
					if(str.length()>= a[s].length()){
						moveLeft(s);
						if(a[s]!="")
							moveRight(s);
					}
					else{
						moveRight(s);
						if(a[s]!="")
							moveLeft(s);
					}

					a[s]= str;
					break;
				}
			}
		}
		//output
		for (int i = 0; i < n; i++)
		{
			fo<<a[i]<<endl;
		}
		return 0;
	}
