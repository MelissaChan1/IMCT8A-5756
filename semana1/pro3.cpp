#include<iostream>

using namespace std;

int ingre(int a)
{
int i;	
int nums[a];	
	for(i=0;i<a;i++)
		cin>>nums[i];

return nums[i];
}

int main()
{
	int n, m, k;
cin>>n;
cin>>m;
cin>>k;
int a=ingre(n);
cout<<a<<endl;
	int soli[n]={ingre(n)};
	for(int i=0;i<n;i++)
	cout<<soli[n]<<" ";
return 0;
}
