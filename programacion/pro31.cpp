#include <iostream>
using namespace std;
int main()
{
unsigned int N, SP, SI;

for(N=1;N<=200;N++){
if(N%2==0){
SP=SP+N;}
else{
SI=SI+N;}
}
cout<<"suma de impares es:"<<SI<<endl;
cout<<"suma de pares es:"<<SP<<endl;
return 0;
}
	
