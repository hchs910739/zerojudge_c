#include<stdio.h>
#include<stdlib.h>
int main(){
    int x,ans,a=0,t=0;
    while(scanf("%d",&x)!=EOF)
    {
                              for(int i=2;;i++)
                              {
                                      t++;
                                      for(int j=1;j<i;j++)
                                      {
                                              if(t%2==0)
                                              {
                                                      a++;
                                                      if(a==x)
                                                      {
                                                              printf("TERM %d IS %d/%d\n",x,j,(i-j));
                                                              break;
                                                      }
                                              }
                                              else
                                              {
                                                      a++;
                                                      if(a==x)
                                                      {
                                                              printf("TERM %d IS %d/%d\n",x,(i-j),j);
                                                              break;
                                                      }
                                              }
                                      }
                                      if(a==x)break;
                              }
                              t=0;
                              a=0;
    }
system("pause");
return 0;
}
