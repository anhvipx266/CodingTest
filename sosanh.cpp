#include <bits/stdc++.h>

using namespace std;

ifstream fi("Data.INP");
ofstream fo("Data.OUT");

long a,b;

int main(int argc, char const *argv[])
{
	fi>>a>>b;
	fo<<(a==b?"=":(a>b?">":"<"));
	return 0;
}
