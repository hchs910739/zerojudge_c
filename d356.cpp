#include<stdio.h>
#include<stdlib.h>
int main(){
	int x;
	while(scanf("%d",&x)!=EOF)
	{
		double all=0;
		for(int i=1;;i++)
		{
			all=all+(1.0/i);
			if(all>x)
			{
				printf("%d\n",i);
				break;
			}
		}
	}
system("pause");
return 0;
}
