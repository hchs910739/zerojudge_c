#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int a1,a2,c,d1,d2,i,ans=1;
    float b;
    while(scanf("%d %d %f %d %d %d",&a1,&a2,&b,&c,&d1,&d2)!=EOF)
    {
                    for(i=1;i<=a2;i++)ans=ans*(a1);
                    printf("%d\n",a1);
                    printf("%.3f\n",sqrt(b));
                    printf("%d\n",abs(c));
                    printf("%d\n",d1+2);
                    ans=1;
    }
system("pause");
return 0;
}
