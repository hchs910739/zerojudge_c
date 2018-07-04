#include<stdio.h>
#include<stdlib.h>
int main(void){
    int x;
    while(scanf("%d",&x)!=EOF)
    {
                              printf("%d\n",((x/12)*50)+((x%12)*5));
    }
system("pause");
return 0;
}
