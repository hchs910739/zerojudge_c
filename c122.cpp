#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[5843],x,A=2;
	a[1]=1;
	for(int i=2;i<=200000;i++)
	{
		x=i;
		while(x%2==0)x=x/2;
		while(x%3==0)x=x/3;
		while(x%5==0)x=x/5;
		while(x%7==0)x=x/7;
		if(x==1)a[A++]=i;
	}
	for(int i=1;i<=100;i++)
	{
		printf("%d\n",a[i]);
	}
system("pause");
return 0;
}
