#include<stdio.h>
#include<stdlib.h>
int main(){
    int x,a=0;
    while(scanf("%X",&x)!=EOF)
    {
         if(a==0)
         {
                 printf("十六進位表示法  相對應的十進位表示法\n");
                 a=1;
         }
         if(x==0)
         {
                        printf("      %.2X                 0\n",x);
         }
         else
         {
                        printf("      %.2X                 %d\n",x,x);
         }
    }
system("pause");
return 0;
}
