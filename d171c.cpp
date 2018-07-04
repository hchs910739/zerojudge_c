#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int x,y;
	float ans;
	while(scanf("%d %d",&x,&y)!=EOF)
	{
		ans=y*log10(x);
		printf("%d\n",(int)ans+1);
	}
system("pause");
return 0;
}
