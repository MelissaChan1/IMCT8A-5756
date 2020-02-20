#include<iostream>
using namespace std;
int main()
{
	unsigned int N, P;

cout<<"Rango a sumar:2-100"<<endl;
for(N=2;N<=100;N++){
if (N%2==0)
P=P+N;
}
cout<<"la suma es:"<<P<<endl;
return 0;
}
