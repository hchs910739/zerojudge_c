#include<stdio.h>
#include<stdlib.h>
int main(void){
    int x;
    while(scanf("%d",&x)!=EOF)
    {
                              if(x==0)printf("0\n");
                              else if(x>0)printf("1\n");
                              else printf("-1\n");
    }
system("pause");
return 0;
}
