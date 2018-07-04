#include<stdio.h>
#include<stdlib.h>
int main(){
	bool a[2000000];
	for(int i=0;i<=2000000;i++)a[i]=true;
	
	a[0]=false;
	a[1]=false;
	for(int i=2;i<=2000000;i++)
	{
		if(a[i])
		{
			for(int j=i*2;j<=2000000;j=j+i)
			{
				a[j]=false;
			}
		}
	}
	long long int x=0;
	for(int i=2;i<=2000000;i++)
	{
		if(a[i])x=x+i;
	}
	printf("%lld\n",x);
system("pause");
return 0;
}
