#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int lim(int lim_inf,int lim_sup)
{
	int temp;
	temp=lim_inf+rand()%(lim_sup+1-lim_inf);
	return temp;
}

int carreras()
{
int i, t=0, l=0, temp;
for(i=1;i<=1000;i++){
	temp=lim(0,100);
                if(temp<=30){
                        t=t+1;
                        cout<<"gana la tortuga"<<endl;
                        }
                else{
                        l=l+1;
                        cout<<"gana la liebre"<<endl;
                        }
			}
cout<<"la tortuga ganó=  "<<t<<" veces"<<endl;
cout<<"la liebre ganó=  "<<l<<" veces"<<endl;
return 0;

}
int main(){
srand(time(NULL));
int c;
        c=carreras();

return 0;
}
