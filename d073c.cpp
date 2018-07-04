#include<stdio.h>
#include<stdlib.h>
int main(void){
    int x;
    while(scanf("%d",&x)!=EOF)
    {
                              printf("%d\n",((x-1)/3)+1);
    }
system("pause");
return 0;
}
