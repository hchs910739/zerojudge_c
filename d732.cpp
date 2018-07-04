#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[100001],x,y,b[100001],t=0;
    while(scanf("%d %d",&x,&y)!=EOF)
    {
                    for(int i=1;i<=x;i++)scanf("%d",&a[i]);
                    for(int j=1;j<=y;j++)scanf("%d",&b[j]);
                    for(int k=1;k<=y;k++)
                    {
                            for(int l=1;l<=x;l++)
                            {
                                    if(b[k]==a[l])
                                    {
                                                  printf("%d\n",l);
                                                  t=1;
                                    }
                            }
                            if(t==0)
                            {
                                    printf("0\n");
                            }
                            t=0;
                    }
    }
system("pause");
return 0;
}
