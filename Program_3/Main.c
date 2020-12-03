/*
    Write a program which accept string from user and return
difference between frequency of small characters and frequency of
capital characters.

Input : “MarvellouS”

Output : 6 (8-2)
*/
#include<stdio.h>

int Frequency(char Str[])
{
    int iCapital=0,iSmall=0,i=0;
    if(Str==NULL)
    {
        return -1;
    }
    while(Str[i]!='\0')
    {
        if((Str[i]>='A') &&(Str[i]<='Z'))
        {
            iCapital++;
        }
        else
        {
            iSmall++;
        }
        i++;
    }
    return iSmall-iCapital;
}
int main()
{
    char arr[30];
    int iRet=0;
    printf("enter the String");
    scanf("%[^'\n]s",arr);
    iRet=Frequency(arr);
   printf("the difference between capital and Small letters is %d",iRet);
   return 0;
}
