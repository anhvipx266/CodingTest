#include <bits/stdc++.h>

using namespace std;

ifstream fi("GHH.INP");
ofstream fo("GHH.OUT");

int n,num,sq;
int ghh[10000];
int con=0;
long long k;
int main(int argc, char const *argv[])
{
	fi>>n;
	for (int i = 0; i < n; i++)
	{
		fi>>num;
		//cal k
		k=num+1;
		sq= sqrt(num);

		for (int j = 2; j <= sq; j++)
		{
			if(num%j==0)
				k += j + num/j;
		}
		if(sq*sq==num)
			k-= sq;
		//check and add
		if(num*2 <= k){
			ghh[con] = num;
			con++;
		}
	}
	//result out
	fo<<con<<endl;
	for (int i = 0; i < con; i++)
	{
		fo<<ghh[i]<<endl;
	}
	return 0;
}
