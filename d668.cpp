#include<stdio.h>
#include<stdlib.h>
int main(){
    int m,n,a[50001],max=0,min=999999,x,y,i,j,k;
    while(scanf("%d %d",&m,&n)!=EOF)
    {
                    for(i=1;i<=m;i++)
                    {
                            scanf("%d",&a[i]);
                    }
                    for(j=1;j<=n;j++)
                    {
                            scanf("%d %d",&x,&y);
                            for(k=x;k<=y;k++)
                            {
                                    if(a[k]>max)max=a[k];
                                    if(a[k]<min)min=a[k];
                            }
                            printf("%d\n",max-min);
                            max=0;
                            min=999999;
                    }
    }
system("pause");
return 0;
}
