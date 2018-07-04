#include<iostream>
using namespace std;
main(){
       int a,M=0,i;
       int b[1000];
       int c[1000];
       int d[100]={0};
                    for(i=1;;i++)
                    {
                            cin>>b[i];
                            if(b[i]==0)
                            {
                                       break;
                            }
                            for(int j=1;j<=b[i];j++)
                            {
                                    cin>>c[j];
                            }
                            for(int k=1;k<b[i];k++)
                            {
                                    if(c[k]>c[k+1])
                                    {
                                                   d[i]=d[i]+(c[k]-c[k+1])*10;
                                    }
                                    if(c[k]<c[k+1])
                                    {
                                                   d[i]=d[i]+(c[k+1]-c[k])*20;
                                    }
                            }
                    }
                    for(int l=1;l<i;l++)
                    {
                            cout<<d[l]<<endl;
                    }
system("pause");
return 0;
}
