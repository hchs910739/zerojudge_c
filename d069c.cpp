#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,x,i;
    while(scanf("%d",&a)!=EOF)
    {
                              for(i=1;i<=a;i++)
                              {
                                               scanf("%d",&x);
                                               if(x%4==0&&x%100!=0||x%400==0)printf("a leap year\n");
                                               else printf("a normal year\n");
                              }
    }
system("pause");
return 0;
}
