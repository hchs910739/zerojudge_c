#include<stdio.h>
#include<stdlib.h>
int main(void){
    int a,b[11],c[70],d[70];
    int A1=0,A2=0,S1=100,S2=100,all=0;
    while(scanf("%d",&a)!=EOF)
    {
                              for(int i=1;i<=a;i++)
                              {
                                      scanf("%d",&b[i]);
                                      for(int j=1;j<=b[i];j++)
                                      {
                                              scanf("%d %d",&c[j],&d[j]);
                                              all=all+((c[j]*60)+d[j]);
                                              if(c[j]<S1)
                                              {
                                                         S1=c[j];
                                                         S2=d[j];
                                              }
                                              else if(c[j]==S1&&d[j]<S2)
                                              {
                                                   S1=c[j];
                                                   S2=d[j];
                                              }
                                              
                                      }
                                      all=all/b[i];
                                      printf("Track %d:\n",i);
                                      printf("Best Lap: %d minute(s) %d second(s).\n",S1,S2);
                                      A2=all%60;
                                      A1=(all-(all%60))/60;
                                      printf("Average: %d minute(s) %d second(s).\n",A1,A2);
                                      all=0;
                                      S1=100;
                                      S2=100;
                              }
    }
system("pause");
return 0;
}
