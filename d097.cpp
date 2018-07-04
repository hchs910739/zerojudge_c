#include<iostream>
using namespace std;
main(){
       int a,c=0;
       int b[5000];
       while(cin>>a)
       {
                    for(int i=1;i<=a;i++)
                    {
                            cin>>b[i];
                    }
                    for(int j=3;j<=a;j++)
                    {
                            if(((b[j]-b[j-1])-(b[j-1]-b[j-2])==1)||((b[j]-b[j-1])-(b[j-1]-b[j-2])==-1))
                            {
                                                                c++;
                            }
                            else
                            {
                                break;
                            }
                    }
                    if(c==a-4)cout<<"Jolly"<<endl;
                    else cout<<"Not jolly"<<endl;
                    c=0;
       }
system("pause");
return 0;
}
