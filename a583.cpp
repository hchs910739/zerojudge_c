#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int a[21],b[21],x,y,min=1000;
    while(scanf("%d %d",&x,&y)!=EOF)
    {
                    for(int i=1;i<=y;i++)
                    {
                            scanf("%d %d",&a[i],&b[i]);
                    }
                    for(int j=1;j<y;j++)
                    {
                            for(int k=(j+1);k<=y;k++)
                            {
                                    if(((a[j]-a[k])*(a[j]-a[k]))+((b[j]-b[k])*(b[j]-b[k]))<min)min=(a[j]-a[k])*(a[j]-a[k])+(b[j]-b[k])*(b[j]-b[k]);
                                    //printf("%d min%d ",(a[j]-a[k])*(a[j]-a[k])+(b[j]-b[k])*(b[j]-b[k]),min);
                            }
                    }
                    printf("%.4f\n",sqrt(min));
                    min=1000;
    }
system("pause");
return 0;
}
