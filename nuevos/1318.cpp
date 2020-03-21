#include<iostream>

using namespace std;
int main()
{
	int n,x,y,a,b,c;

cin>>n;
cin>>x;
cin>>y;

if(n<x&&n<y){
	a=n;
	if(x<y){
		b=x;
		c=y;}
	else{
		b=y;
		c=x;}
	}
else if(x<n&&x<y){
	a=x;
	if(n<y){
		b=n;
		c=y;
		}
	else{
	b=y;
	c=n;}
	}
if(y<n&&y<x){
	a=y;
	if(n<x){
		b=n;
		c=x;}
	else{
		b=x;
		c=n;}
	}
cout<<"ABC"<<endl;
cout<<a<<b<<c<<endl;
return 0;
}
