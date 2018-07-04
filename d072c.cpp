#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,a,x[1000];
    while(scanf("%d",&a)!=EOF)
    {
                              for(i=1;i<=a;i++)
                              {
                                               scanf("%d",&x[i]);
                                               if(x[i]%4==0&&x[i]%100!=0||x[i]%400==0)printf("Case %d: a leap year\n",i);
                                               else printf("Case %d: a normal year\n",i);
                              }
    }
system("pause");
return 0;
}
