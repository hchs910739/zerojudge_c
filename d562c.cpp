#include<stdio.h>
#include<stdlib.h>
int main(void){
    int a,x[101],y[101];
    while(scanf("%d",&a)!=EOF)
    {
                              for(int i=1;i<=a;i++)
                              {
                                      scanf("%d",&x[i]);
                              }
                              for(int j=1;j<=a;j++)
                              {
                                      for(int k=j;k<=a;k++)
                                      {
                                              printf("%d ",x[k]);
                                      }
                                      printf("\n");
                                      for(int m=j+1;m<=a;m++)
                                      {
                                              y[m]=x[m]; 
                                      }
                                      for(int n=j+1;n<=a;n++)
                                      {
                                              x[n]=y[a-n+j+1];
                                      }
                              }
    }
system("pause");
return 0;
}
