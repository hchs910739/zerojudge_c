#include<iostream>
using namespace std;
main()
{
      int M,D,S;
      while(cin>>M>>D)
      {
                      S=M*2+D;
                      if(S%3==0){
                                 cout<<"´¶³q"<<endl; 
                                 }
                      if(S%3==1){
                                 cout<<"¦N"<<endl; 
                                 }
                      if(S%3==2){
                                 cout<<"¤j¦N"<<endl; 
                                 }
      }
system("pause");
return 0;
}
