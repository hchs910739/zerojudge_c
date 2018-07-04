#include<stdio.h>
#include<stdlib.h>
int main(void){
    int a,b,x,num=0,ans=0;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
                    for(int i=a;i<=b;i++)
                    {
                            x=i;
                            while(x!=1)
                            {
                                       num++;
                                       if(x%2==1)x=((x*3)+1);
                                       else x=x/2;
                            }
                            if(num>=ans)ans=num;
                            num=0;
                    }
                    printf("%d %d %d\n",a,b,ans+1);
                    ans=0;
    }
system("pause");
return 0;
}
