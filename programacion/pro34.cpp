#include<iostream>
using namespace std;
int main()
{
	int N,  i;
int P=0;
cout<<"ingrese numeros: "<<endl;
for(i=1;i<=10;i++)
{
cin>>N;
if(N>0){
P+=+1;}
}
cout<<"Numeros Positivos encontrados:  "<<P<<endl;
return 0;
}

