#include<iostream>

using namespace std;

int main()
{
	int a;
	long b,r=0;
	cin>>a;
	cin>>b;
if(a>=1&&b<=1000000000){
	r=(a+b)+(a*b)+(b+a)+(b*a);
	cout<<r<<endl;}
return 0;
}
