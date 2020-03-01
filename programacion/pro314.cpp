#include<iostream>
using namespace std;
int main()
{
	int i, p=0, n, s=0;
cin>>n;
while(cin){
if(n%2==0)
p+=+1;
if(n%2==0&&p<=10)
s=s+n;
cin>>n;
}
cout<<"suma de los 10 pares:  "<<s<<endl;
return 0;

}
