#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	long long int x,a[70];
	a[0]=2;
	a[1]=6;
	for(int i=2;i<=63;i++)
	{
		a[i]=(a[i-1]-a[i-2])*2+a[i-1];
		if(i>=10)
		{
			a[i]=a[i]-pow(2,i-10);
		}
	}
	while(scanf("%d",&x)!=EOF)
	{
		printf("%d\n",a[x]);
	}
system("pause");
return 0;
}
