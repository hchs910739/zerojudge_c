#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,i,n[1000],num=0;
    while(scanf("%d",&a)!=EOF)
    {
                              for(i=1;i<=a;i++)
                              {
                                               scanf("%d",&n[i]);
                                               num=num+n[i];
                              }
                              if(num==(a*59))printf("yes\n");
                              else if((num/a)>=59)printf("no\n");
                              else printf("yes\n");
                              num=0;
    }
system("pause");
return 0;
}
