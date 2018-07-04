#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int main(){
    int a[10][10],x=0,y=0,ans=0,s=0,n1=0,n2=0,n3=0,n4=0,n5=0,n6=0,n7=0,n8=0,n9=0;
    while(scanf("%d",&a[1][1])!=EOF)
    {
            if(a[1][1]==1)n1++;
            else if(a[1][1]==2)n2++;
            else if(a[1][1]==3)n3++;
            else if(a[1][1]==4)n4++;
            else if(a[1][1]==5)n5++;
            else if(a[1][1]==6)n6++;
            else if(a[1][1]==7)n7++;
            else if(a[1][1]==8)n8++;
            else if(a[1][1]==9)n9++;
            for(int i=1;i<=9;i++)
            {
                    for(int j=1;j<=9;j++)
                    {
                            if(i==1&&j==1)continue;
                            scanf("%d",&a[i][j]);
                            if(a[i][j]==1)n1++;
                            else if(a[i][j]==2)n2++;
                            else if(a[i][j]==3)n3++;
                            else if(a[i][j]==4)n4++;
                            else if(a[i][j]==5)n5++;
                            else if(a[i][j]==6)n6++;
                            else if(a[i][j]==7)n7++;
                            else if(a[i][j]==8)n8++;
                            else if(a[i][j]==9)n9++;
                    }
            }
            if(n1!=9)ans=1;
            else if(n2!=9)ans=1;
            else if(n3!=9)ans=1;
            else if(n4!=9)ans=1;
            else if(n5!=9)ans=1;
            else if(n6!=9)ans=1;
            else if(n7!=9)ans=1;
            else if(n8!=9)ans=1;
            else if(n9!=9)ans=1;
            for(int k=1;k<=9;k++)
            {
                    if(ans==1)break;
                    for(int l=1;l<=9;l++)
                    {
                            x=x+a[k][l];
                            y=y+a[l][k];
                    }
                    if(x!=45||y!=45)
                    {
                                    ans=1;
                                    break;
                    }
                    x=0;
                    y=0;
            }
            for(int m=1;m<=9;m=m+3)
            {
                    if(ans==1)break;
                    for(int n=1;n<=9;n=n+3)
                    {
                            if(a[m][n]+a[m][n+1]+a[m][n+2]+a[m+1][n]+a[m+1][n+1]+a[m+1][n+2]+a[m+2][n]+a[m+2][n+1]+a[m+2][n+2]!=45)
                            {
                                                                                                                                   ans=1;
                                                                                                                                   break;
                            }
                    }
            }
            if(ans==0)
            {
                      printf("yes\n");
            }
            else
            {
                printf("no\n");
                ans=0;
            }
            n1=0;
            n2=0;
            n3=0;
            n4=0;
            n5=0;
            n6=0;
            n7=0;
            n8=0;
            n9=0;
    }
system("pause");
return 0;
}
