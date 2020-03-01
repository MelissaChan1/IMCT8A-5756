#include<iostream>
using namespace std;

int main(){
	int n, m=-99;
	cin>>n;
	while(n!=0&&n>=-99)
	{
	if(n>m)
	m=n;
	cin>>n;
	}
cout<<"el num mayor es: "<<m<<endl;
	if(m<0)
	cout<<"numero negativo"<<endl;
return 0;
} 
