#include<iostream>
using namespace std;
main(){
       int x,i,a,b;
       int n[1000];
       while(cin>>x)
       {
                    for(i=1;i<=x*2;i=i+2)
                    {
                                         cin>>n[i]>>n[i+1];
                    }
                    for(int j=1;j<=x*2;j=j+2)
                    {
                            if(n[j]>n[j+1])
                            {
                                           cout<<(n[j]+n[j+1])/2<<" "<<((n[j]-n[j+1])/2)<<endl;
                            }
                            else if(n[j]<n[j+1])
                            {
                                cout<<"impossible"<<endl;
                            }
                    }
       }
system("pause");
return 0;
}
