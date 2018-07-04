#include<stdio.h>
#include<stdlib.h>
int main(void){
    int x;
    while(scanf("%d",&x)!=EOF)
    {
                            printf("%d\n",x*(x-1)+2);
    }
system("pause");
return 0;
}
