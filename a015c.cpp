#include<stdio.h>
#include<stdlib.h>
int main(void){
    int x,y;
    int a[110][110];
    while(scanf("%d %d",&x,&y)!=EOF)
    {
                    for(int i=1;i<=x;i++)
                    {
                            for(int j=1;j<=y;j++)
                            {
                                    scanf("%d",&a[i][j]);
                            }
                    }
                    for(int k=1;k<=y;k++)
                    {
                            for(int l=1;l<=x;l++)
                            {
                                    printf("%d ",a[l][k]);
                            }
                            printf("\n");
                    }
    }
system("pause");
return 0;
}
