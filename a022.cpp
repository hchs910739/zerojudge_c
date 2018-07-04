//a022: 迴文 
/*  以下是題目說明
迴文的定義為正向，反向讀到的字串均相同
如：abba , abcba ... 等就是迴文
請判斷一個字串是否是一個迴文？

輸入說明 ：
一個字串(長度 < 1000)

輸出說明 ：
yes or no

範例輸入 ： 
若題目沒有特別說明，則應該以多測資的方式讀取，若不知如何讀取請參考 a001 的範例程式。abba
abcd

範例輸出 ：
yes
no
*/
//以下是程式本體
#include <stdio.h>
#include <stdlib.h>
#include <string.h> //因為用到字串函數，所以要有此類的宣告檔 
int main(void)
{
   int str_length; //記錄得到的字串長度 
   int i; //數數用 
   int flag_yes; //0代表不是迴文數，1代表是迴文數 
   char string[1000];
   while(gets(string)!=NULL) //取得字串，如果不是沒字就計算，否則代表沒資料了，程式結束 
   {
      str_length = strlen(string); //算出字串長度 
      flag_yes = 1; //先假設對的 
      for(i=0;i<str_length/2;i++) //所有字全一半 
      { 
         if(string[i] != string[str_length-1-i]) //相對的的有一個是錯的，就設為不是對，並離開，不再比較 
         {
            flag_yes = 0;
            break;
         }
      }
      if(flag_yes == 1) //如果最後結果是 1 代表是迴文數，否則就不是。 
         printf("yes\n"); 
      else
         printf("no\n"); 
   }
} 
