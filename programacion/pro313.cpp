#include<iostream>
using namespace std;
int main()
{
	int  n, i;

 	float notas, m, sa=0;
cout<<"ingrese numero de alumnos"<<endl;
cin>>n;
cout<<"ingrese notas: "<<endl;
for(i=0;i<=n;i++){
cin>>notas;
sa=sa+notas;
}
m=sa/n;
cout<<"el promedio es:"<<m<<endl;


return 0;
}
