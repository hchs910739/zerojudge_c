#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,x[1010],y[1010];
	char b[1010];
	while(scanf("%d",&a)!=EOF)
	{
		if(a==0)break;
		for(int i=1;i<=a;i++)
		{
			scanf("%d %d",&x[i],&y[i]);
			if(x[i]>y[i])b[i]='>';
			else if(x[i]==y[i])b[i]='=';
			else if(x[i]<y[i])b[i]='<';
		}
		for(int i=a;i>=1;i--)printf("%c%d ",b[i],(x[i]+y[i]));
		printf("\n");
	}
system("pause");
return 0;
}
