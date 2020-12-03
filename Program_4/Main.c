/*
    Write a program which accept string from user and check whether
it contains vowels in it or not.

Input : “marvellous”

Output : TRUE

Input : “Demo”

Output : TRUE
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
 BOOL Vowel(char Str[]) 
 {
     int i=0;
     
     while(Str[i]!='\0')
     {
         if((Str[i]=='A')||(Str[i]=='a')||(Str[i]=='E')||(Str[i]=='e')
         ||(Str[i]=='I')||(Str[i]=='i')||(Str[i]=='O')||(Str[i]=='o')
         ||(Str[i]=='U')||(Str[i]=='u'))
         {
             break;
         }
         i++;
     }
     if(Str[i]=='\0')
     {
         return FALSE;
     }
     else
     {
         return TRUE;
     }
 }
int main()
{
    char arr[30];
    BOOL iRet=FALSE;
    printf("enter the character");
    scanf("%[^'\n]s",arr);
    iRet=Vowel(arr);
    if(iRet==TRUE)
    {
        printf("it contains Vowels in it,TRUE");
    }
    else
    {
        printf("It does not contain Vowels in it,FALSE");
    }
    return 0;
}
