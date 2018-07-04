#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int x,i,ans=1,l,j;
    char s[100];
    while(scanf("%d",&x)!=EOF)
    {
                              for(i=1;i<=x;i++)
                              {
                                               scanf("%s",s);
                                               l=strlen(s);
                                               for(j=0;j<l;j++)
                                               {
                                                               ans=ans*(s[j]-48);
                                               }
                                               printf("%d\n",ans);
                                               ans=1;
                              }
    }
system("pause");
return 0;
}
