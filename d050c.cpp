#include<stdio.h>
#include<stdlib.h>
int main(void){
    int x;
    while(scanf("%d",&x)!=EOF)
    {
                              printf("%d\n",(x+9)%24);
    }
system("pause");
return 0;
}
