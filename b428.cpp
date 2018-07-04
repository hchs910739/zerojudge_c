#include<stdio.h>
#include<stdlib.h>
int main(void){
	char a[1001],b[1001];
	while(scanf("%s %s",a,b)!=EOF)
	{
		if(b[0]-a[0] >= 0)printf("%d\n",b[0]-a[0]);
		else printf("%d\n",b[0]-a[0]+26);
	}
system("pause");
return 0;
}

