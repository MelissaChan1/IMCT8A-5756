#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int fact(int n){
int i, f=1;
        if(n<0)
                f=0;
        else if(n==0)
                f=1;
        else
{
        for(i=1;i<=n;i++)
        f=f*i;
}
return f;
}

int main()
{
srand(time(NULL));

int n, sum, s=0, a, b, c, d, e;
cin>>n;
cin>>sum;
int nums[n];
        for(int i=0;i<n;i++)
                cin>>nums[i];
a=fact(n);
b=fact(4);
c=n-4;
d=fact(c);
e=a/(b*d);
int size=4;
int ind;

        for(int i=0;i<=e;i++)

{
        for(int i=0;i<n;i++)
        cout<<nums[i]<<" ";

        while(size>0)
{
ind=rand()%size;
s=s+nums[ind];
int aux;
        while(ind<size)
        {
        nums[ind]=nums[ind+1];
        nums[ind+1]=0;
        ind++;
}

        size--;

        for(int i=0;i<=n;i++)
        cout<<nums[i]<<" ";
}
        cout<<"la suma es: "<<s<<endl;
}
cout<<endl;
return 0;
}

