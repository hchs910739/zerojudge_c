#include<stdio.h>
#include<stdlib.h>
int main(){
	int x,y;
	while(scanf("%d %d",&x,&y)!=EOF)
	{
		if(x==0&&y==0)printf("Ok!\n");
		else if(y!=0&&x%y==0)printf("Ok!\n");
		else printf("Impossib1e!\n");
	}
system("pause");
return 0;
}
