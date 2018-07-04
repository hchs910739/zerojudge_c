#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void){
    int x,a,b=0;
    while(scanf("%d",&x)!=EOF)
    {
                         a=sqrt(x);
                         for(int i=2;i<=a;i++)
                         {
                                 if(x%i==0)
                                 {
                                           b=1;
                                           break;
                                 }
                         }
                         if(b==1)
                         {
                                 printf("非質數\n");
                         }
                         else
                         {
                             printf("質數\n");
                         }
                         b=0;
    }
system("pause");
return 0;
}
