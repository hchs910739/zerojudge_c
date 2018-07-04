#include<stdio.h>
#include<stdlib.h>
int main(void){
    int x;
    while(scanf("%d",&x)!=EOF)
    {
                              if(x>50)printf("%d",x-1);
                              else printf("%d",x);
    }
system("pause");
return 0;
}
