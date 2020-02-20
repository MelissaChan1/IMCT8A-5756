#include<iostream>
using namespace std;
int main()
{
	int N, r, t;
	cin>>N;
	r=N%2;
	t=N%3;
	if (N!=3&&N!=2){
	if(r==1&&t>0){ 
	cout<<N<<" es primo"<<endl;}
	else {
	cout<<N<<" No es primo"<<endl;}}
	else{
	cout<<N<<" es primo"<<endl;}
return 0;
}
