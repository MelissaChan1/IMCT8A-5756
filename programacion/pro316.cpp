#include<iostream>
using namespace std;
int main()
{
	int i, n, q=0, c=0, r=0;
cout<<"ingresar numeros"<<endl;
for(i=1;i<=100;i++){
cin>>n;
if(n<15)
q+=+1;
if(n>50)
c+=+1;
if(n>25&&n<45)
r+=+1;
}
cout<<q<<"  numeros menores a 15 detectados"<<endl;
cout<<c<<"  numeros mayores a 50 detectados"<<endl;
cout<<r<<"  numeros entre 25 y 45 detectados"<<endl;
return 0;
}
