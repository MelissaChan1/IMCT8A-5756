#include<iostream>
using namespace std;

int par(int n)
{
	int r=n/2;
return r;
}

int impar(int n)
{
	int r=(n*3)+1;
return r;
}

int deci(int n)
{
	if(n%2==0){
		n=par(n);
		cout<<n<<" ";}
	else{
		n=impar(n);
		cout<<n<<" ";}
return n;
}

int main()
{
	int n;
cin>>n;
	if(n>=1&&n<=106){
		cout<<n<<" ";
		while(n!=1)
		n=deci(n);}
	else
		return 0;
}
