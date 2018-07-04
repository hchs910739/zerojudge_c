#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b,c,x[5],max=-1;
	while(scanf("%d %d %d",&a,&b,&c)!=EOF)
	{
		if(a==1&&b==1&&c==1)
		{
			printf("12\n");
			continue;
		}
		x[1]=((a*10)+b)*c;
		x[2]=a*((b*10)+c);
		x[3]=a*b*c;
		max=x[1];
		for(int i=1;i<3;i++)
		{
			if(x[i+1]>x[i])max=x[i+1];
		}
		printf("%d\n",max);
		max=-1;
	}
system("pause");
return 0;
}
