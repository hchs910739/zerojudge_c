#include<iostream>
#include<cstring>
using namespace std;
main(){
    int ans;
    char a[12];
    int k[15];
    while(cin.getline(a,12))
    {
          if(a[0]=='A')
          {
                       a[0]=10;
          }
           else if(a[0]=='B')
          {
                       a[0]=11;
          }
           else if(a[0]=='C')
          {
                       a[0]=12;
          }
           else if(a[0]=='D')
          {
                       a[0]=13;
          }
           else if(a[0]=='E')
          {
                       a[0]=14;
          }
           else if(a[0]=='F')
          {
                       a[0]=15;
          }
           else if(a[0]=='G')
          {
                       a[0]=16;
          }
           else if(a[0]=='H')
          {
                       a[0]=17;
          }
           else if(a[0]=='I')
          {
                       a[0]=34;
          }
           else if(a[0]=='J')
          {
                       a[0]=18;
          }
           else if(a[0]=='K')
          {
                       a[0]=19;
          }
           else if(a[0]=='L')
          {
                       a[0]=20;
          }
           else if(a[0]=='M')
          {
                       a[0]=21;
          }
           else if(a[0]=='N')
          {
                       a[0]=22;
          }
           else if(a[0]=='O')
          {
                       a[0]=35;
          }
           else if(a[0]=='P')
          {
                       a[0]=23;
          }
           else if(a[0]=='Q')
          {
                       a[0]=24;
          }
           else if(a[0]=='R')
          {
                       a[0]=25;
          }
           else if(a[0]=='S')
          {
                       a[0]=26;
          }
           else if(a[0]=='T')
          {
                       a[0]=27;
          }
           else if(a[0]=='U')
          {
                       a[0]=28;
          }
           else if(a[0]=='V')
          {
                       a[0]=29;
          }
           else if(a[0]=='W')
          {
                       a[0]=32;
          }
           else if(a[0]=='X')
          {
                       a[0]=30;
          }
           else if(a[0]=='Y')
          {
                       a[0]=31;
          }
           else if(a[0]=='Z')
          {
                       a[0]=33;
          }
          for(int i=1;i<=9;i++)
          {
                  if(a[i]==48)
                  {
                              k[i]=0;
                  }
                  else if(a[i]==49)
                  {
                         k[i]=1;       
                  }
                  else if(a[i]==50)
                  {
                         k[i]=2;       
                  }
                  else if(a[i]==51)
                  {
                         k[i]=3;       
                  }
                  else if(a[i]==52)
                  {
                         k[i]=4;       
                  }
                  else if(a[i]==53)
                  {
                         k[i]=5;       
                  }
                  else if(a[i]==54)
                  {
                         k[i]=6;       
                  }
                  else if(a[i]==55)
                  {
                         k[i]=7;       
                  }
                  else if(a[i]==56)
                  {
                         k[i]=8;       
                  }
                  else if(a[i]==57)
                  {
                         k[i]=9;       
                  }
          }
          ans=((a[0]/10)+(a[0]%10)*9+(k[1]*8)+(k[2]*7)+(k[3]*6)+(k[4]*5)+(k[5]*4)+(k[6]*3)+(k[7]*2)+(k[8]*1)+k[9]);
          if(ans%10==0)
          {
                                                                                                         cout<<"real"<<endl;
          }
          if(ans%10!=0)
          {
                                                                                                         cout<<"fake"<<endl;
          }
    }
system("pause");
return 0;
}
