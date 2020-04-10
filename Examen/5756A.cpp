#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
float h=0, c, r=0;
int i, j, a, n,p;
cin>>n;
	for(j=0;j<n;j++)
	{
	cin>>c;
	cin>>p;
	r=c/(6.28318);
	h=r*3;
	std::cout << std::fixed << std::setprecision(p)<<h<<" ";
	a=h/10;
	for(i=0;i<=a;i++)
		cout<<"#";
	}
return 0;
}
