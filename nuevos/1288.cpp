#include<iostream>
using namespace std;
int main()
{
	int T,n, i;
cin>>T;//ingresar el archivo 1288.txt
for(i=1;i<=T;i++)
{
	cin>>n;
	if(n%6==0)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	}
return 0;
}
