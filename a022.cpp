//a022: �j�� 
/*  �H�U�O�D�ػ���
�j�媺�w�q�����V�A�ϦVŪ�쪺�r�ꧡ�ۦP
�p�Gabba , abcba ... ���N�O�j��
�ЧP�_�@�Ӧr��O�_�O�@�Ӱj��H

��J���� �G
�@�Ӧr��(���� < 1000)

��X���� �G
yes or no

�d�ҿ�J �G 
�Y�D�بS���S�O�����A�h���ӥH�h���ꪺ�覡Ū���A�Y�����p��Ū���аѦ� a001 ���d�ҵ{���Cabba
abcd

�d�ҿ�X �G
yes
no
*/
//�H�U�O�{������
#include <stdio.h>
#include <stdlib.h>
#include <string.h> //�]���Ψ�r���ơA�ҥH�n���������ŧi�� 
int main(void)
{
   int str_length; //�O���o�쪺�r����� 
   int i; //�Ƽƥ� 
   int flag_yes; //0�N���O�j��ơA1�N��O�j��� 
   char string[1000];
   while(gets(string)!=NULL) //���o�r��A�p�G���O�S�r�N�p��A�_�h�N��S��ƤF�A�{������ 
   {
      str_length = strlen(string); //��X�r����� 
      flag_yes = 1; //�����]�諸 
      for(i=0;i<str_length/2;i++) //�Ҧ��r���@�b 
      { 
         if(string[i] != string[str_length-1-i]) //�۹諸�����@�ӬO�����A�N�]�����O��A�����}�A���A��� 
         {
            flag_yes = 0;
            break;
         }
      }
      if(flag_yes == 1) //�p�G�̫ᵲ�G�O 1 �N��O�j��ơA�_�h�N���O�C 
         printf("yes\n"); 
      else
         printf("no\n"); 
   }
} 
