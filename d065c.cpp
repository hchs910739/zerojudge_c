#include<stdio.h>
#include<stdlib.h>
int main(void){
    int a[10],max;
    while(scanf("%d %d %d",&a[1],&a[2],&a[3])!=EOF)
    {
                    max=a[1];
                    for(int i=2;i<=3;i++)
                    {
                            if(a[i]>=max)max=a[i];
                    }
                    printf("%d\n",max);
    }
system("pause");
return 0;
}
