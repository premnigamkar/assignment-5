#include <iostream>
using namespace std;
int sumarr(int a[100],int n,int i,int s=0)
{for(int i=0;i<n;i++)
s=s+a[i];
return s;}
int main() {
	int a[100],n,i;
	cout<<"Enter the size of the array:";
	cin>>n;
	cout<<"\nEnter the elements of the array:";
	for(int i=0;i<n;i++)
	{cin>>a[i];}
	cout<<"\nThe sum of the elements of the array is "<<sumarr(a,n,0,0)<<".";
	return 0;
}
