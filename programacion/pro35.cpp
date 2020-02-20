#include<iostream>
using namespace std;
int main()
{
	unsigned int U;
	float CA, T, IVA, PT, D;
	cin>>CA>>U;
	T=CA*U;
	cout<<"Total:"<<T<<endl;
	IVA=T*0.15;
	cout<<"IVA:"<<IVA<<endl;
	PT=T+IVA;
	cout<<"Total con iva:"<<PT<<endl;
	if(PT>50000){
	D=PT*0.5;
	cout<<"total con descuento:"<<PT-D<<endl;}
	else {
	cout<<"sin descuento"<<endl;}
return 0;
}
