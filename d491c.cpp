#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b,ans=0,i;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
                    if(a<b)
                    {
                       if(a%2==1)a++;
                       if(b%2==1)b--;
                       for(i=a;i<=b;i=i+2)
                       {
                                          ans=ans+i;
                       }
                       printf("%d\n",ans);
                       ans=0;
                    }
                    else
                    {
                       if(a%2==1)a--;
                       if(b%2==1)b++;
                       for(i=b;i<=a;i=i+2)
                       {
                                          ans=ans+i;
                       }
                       printf("%d\n",ans);
                       ans=0;
                    }
    }
system("pause");
return 0;
}
