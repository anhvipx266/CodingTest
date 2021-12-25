#include <bits/stdc++.h>

using namespace std;

ifstream fi("SDB.INP");
ofstream fo("SDB.OUT");

long a[2000000]={};
int n;
int con=0;
bool ex;
int main(int argc, char const *argv[])
{
	fi>>n;
	// add number and step 1
	for (int i = 0; i < n*2; i+=2)
	{
		fi>>a[i];
		ex= false;
		//1000000001 is unreal number
		a[i+1]= 1000000001;

		//find and add
		for (int j = 0; j < i; j+=2)
		{
			if(a[j]==a[i]){
				ex= true;
				if(a[j+1]== 1000000001 )
					con--;
				a[j+1]= a[j];
				a[i+1]= a[j];
				
				break;
			}

		}
		if(not ex){
			con++;
		}
		
	}
	
	//output
	fo<<con<<endl;
	//check number show only one times
	for (int i = 0; i < n*2; i+=2)
	{
		
		if(a[i+1]==1000000001)
			fo<<a[i]<<endl;
	}

	return 0;
}
