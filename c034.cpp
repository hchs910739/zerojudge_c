#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int l,max=0;
    char all[1001]={0},a[1001];
    while(scanf("%s",a)!=EOF)
    {
                             l=strlen(a);
                             if(l>max)max=l;
                             if(l==1&&a[0]==48)
                             {
                                               if(all[max]!=0)
                                               {
                                                            printf("%d",all[max]);
                                                            all[max]=0;
                                               }
                                               for(int k=max-1;k>=0;k--)
                                               {
                                                       printf("%d",all[k]);
                                                       all[k]=0;
                                               }
                                               printf("\n");
                                               max=0;
                             }
                             for(int i=l-1,j=0;i>=0;i--,j++)
                             {
                                     all[j]=all[j]+(a[i]-48);
                                     if((all[j]/10)>=1)
                                     {
                                                       all[j+1]=all[j+1]+(all[j]/10);
                                                       all[j]=all[j]%10;
                                     }
                             }
    }
system("pause");
return 0;
}
