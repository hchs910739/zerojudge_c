#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char a[201];
    int i,b,ans=0,c=0;;
    while(scanf("%s",a)!=EOF)
    {
                              b=strlen(a);                   
                              for(i=0;i<b;i++)
                              {
                                               if(a[0]==48&&b==1)break;
                                               if(a[i]<=90&&a[i]>=65)ans=ans+(a[i]-64);
                                               else if(a[i]<=122&&a[i]>=97)ans=ans+(a[i]-96);
                                               else if(a[i]<=64||(a[i]>=91&&a[i]<=96)||a[i]>=123)
                                               {
                                                   printf("Fail\n");
                                                   c=1;
                                                   break;
                                               }
                              }
                              if(c==0&&a[0]!=48)printf("%d\n",ans);
                              ans=0;
                              c=0;
    }
system("pause");
return 0;
}
