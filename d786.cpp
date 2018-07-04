#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main(void){
       int a;
       int b[100];
       int c[1000];
       double d[100];
       double e[100];
       while(scanf("%d",&a))
       {
                    for(int i=1;i<=a;i++)
                    {
                            scanf("%d",&b[i]);
                            for(int j=1;j<=b[i];j++)
                            {
                                    scanf("%d",&c[j]);
                                    d[i]=d[i]+c[j];
                            }
                    }
                    for(int i=1;i<=a;i++)
                    {
                            e[i]=d[i]/b[i];
                            printf("%.2f\n",e[i]);
                    }
       }
system("pause");
return 0;
}
