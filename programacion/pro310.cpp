#include<iostream>
using namespace std;
int main()
{
	int n, i, a=0;
	cout<<"ingrese el numero de multiplos de 4 deseados:  ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
	if(a%4==0)
	cout<<a<<endl;
	a=a+4;
	}
return 0;
}
