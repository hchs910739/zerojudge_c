#include<stdio.h>
#include<stdlib.h>
int main(void){
    int x,i=1,a=0;
    int ans[100];
    while(scanf("%d",&x)!=EOF)
    {
                              if(x==0)printf("0");
                              while(x!=0)
                              {
                                         ans[i]=x%10;
                                         x=(x-(x%10))/10;
                                         i++;
                              }
                              for(int j=1;j<i;j++)
                              {
                                      if(ans[j]!=0&&a==0)
                                      {
                                                   printf("%d",ans[j]);
                                                   a=1;
                                      }
                                      else if(a==1)
                                      {
                                           printf("%d",ans[j]);
                                      }
                              }
                              printf("\n");
                              i=1;
                              a=0;
    }
system("pause");
return 0;
}
