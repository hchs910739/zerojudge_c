#include<stdio.h>
#include<stdlib.h>
int main(void){
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
                    if(((a*60)+b)>=1020||((a*60)+b)<450)printf("Off School\n");
                    else printf("At School\n");
    }
system("pause");
return 0;
}
