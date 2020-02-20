#include<iostream>
using namespace std;
int main()
{
	int i, n, p=0, ni=0;
	float  s=0, si=0;
	float m;
cout<<"introduzca numeros"<<endl;
for(i=1;i<=10;i++){
cin>>n;
if(n%2==0){
s=s+n;
p+=+1;}
else {
si=si+n;
ni+=+1;
}
}
m=si/ni;
cout<<"num pares encontrados:  "<<p<<endl;
cout<<"suma de pares:  "<<s<<endl;
cout<<"media de impares:  "<<m<<endl;
return 0;
}
