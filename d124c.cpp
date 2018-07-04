#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char a[10000];
    int b,i,ans=0;
    while(scanf("%s",&a)!=EOF)
    {
                 b=strlen(a);
                 for(i=0;i<=b;i++)
                 {
                                  ans=ans+(a[i]-48);
                 }
                 if(ans%3==0)printf("yes\n");
                 else printf("no\n");  
                 ans=0;           
    }
system("pause");
return 0;
}
