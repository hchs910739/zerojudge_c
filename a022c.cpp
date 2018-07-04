#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int b,i,j,ans=0;
    char a[1000];
    while(scanf("%s",&a)!=EOF)
    {
                              b=strlen(a);
                              if(b%2==0)
                              {
                                        for(i=0;i<=(b/2)-1;i++)
                                        {
                                                           if(a[i]!=a[b-i-1])
                                                           {
                                                                           ans=1;
                                                                           break;
                                                           }
                                        }
                              }
                              else if(b%2==1)
                              {
                                  for(j=0;j<=(b/2)-1;j++)
                                  {
                                                         if(a[j]!=a[b-j-1])
                                                         {
                                                                         ans=1;
                                                                         break;
                                                         }
                                  }
                              }
                              if(ans==0)printf("yes\n");
                              else printf("no\n");
                              ans=0;
    }
system("pause");
return 0;
}
