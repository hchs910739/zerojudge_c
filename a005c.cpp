#include<stdio.h>
#include<stdlib.h>
int main(void){
    int a;
    int b[100];
    int ans[30];
    while(scanf("%d",&a)!=EOF)
    {
                       for(int i=1;i<=a*4;i=i+4)
                       {
                                scanf("%d %d %d %d",&b[i],&b[i+1],&b[i+2],&b[i+3]);
                                if(b[i+1]-b[i]==b[i+2]-b[i+1])
                               {
                                                              ans[i]=b[i+3]+(b[i+1]-b[i]);
                               }
                               else
                               {
                                   ans[i]=b[i+3]*(b[i+1]/b[i]);
                               }
                       }
                       for(int k=1;k<=a*4;k=k+4)
                       {
                               printf("%d %d %d %d %d\n",b[k],b[k+1],b[k+2],b[k+3],ans[k]);
                       }
    }
system("pause");
return 0;
}
