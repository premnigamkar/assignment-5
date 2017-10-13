#include <iostream>
using namespace std;

int largest(int a[100],int n,int i,int g){
{for(int i=0;i<n;i++)
if(a[i]>g)
g=a[i];}
return g;
}

int smallest(int a[100],int n,int i,int s){
s=a[0];
{for(int i=0;i<n;i++)
if(a[i]<s)
s=a[i];}
return s;
}

float mean(int a[100],int n,int i,float s=0)
{float avg=0;
for(int i=0;i<n;i++)
s=s+a[i];
avg=s/n;
return avg;}

int medianodd(int a[100],int n)
{return a[n/2];}
int medianeven1(int a[100],int n)
{return a[n/2];}
int medianeven2(int a[100],int n)
{return a[n/2-1];}

int freq(int a[100],int n, int x,int j)
{if (n!=0)
{if (a[n]==x)
{j++;}
return freq(a,n-1,x,j);}
else
return j;
}
int main() {
	int a[100],n,i,b,m;
	cout<<"Enter the size of the array:";
	cin>>n;
	cout<<"\nEnter the elements of the array:";
	for(int i=0;i<n;i++)
	{cin>>a[i];}
	cout<<"\nThe largest element of the array is "<<largest(a,n,0,0)<<".";
	cout<<"\nThe smallest element of the array is "<<smallest(a,n,0,0)<<".";
	cout<<"\nThe mean of the elements of the array is "<<mean(a,n,0,0)<<".";
	for(int i=0;i<n;i++)
	{b=a[0];
	for(int j=i;j<n;j++)
	 {if(a[i]>a[j])
	 {b=a[j]; 
	 a[j]=a[i];
	 a[i]=b;}}}
	if (n%2!=0)
	cout<<"\nThe median is "<<medianodd(a,n)<<".";
	else 
	cout<<"\nThe medians are "<<medianeven2(a,n)<<","<<medianeven1(a,n)<<".\n";
	int d=0,e=0,mode;
	for(int i=0;i<n;i++)
	{d=freq(a,n,a[i],0);
	if (d>e)
	{mode=a[i];
	e=d;}
	}
	cout<<"\nThe mode of the array is "<<mode;
	return 0;
}
