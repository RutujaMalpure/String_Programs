/*
    Write a program which accept string from user and count number of
small characters.

Input : “Marvellous”

Output : 9
*/
#include<stdio.h>

int CountSmall(char Str[])
{
    int i=0,iCnt=0;
    if(Str==NULL)
    {
        return -1;
    }
    while(Str[i]!='\0')
    {
        if(Str[i]>='a' &&  Str[i]<='z')
        {
            iCnt++;
        }
        i++;
    }
    return iCnt;
}
int main()
{
    char arr[30];
    int iRet=0;
    printf("enter the String");
    scanf("%[^'\n']s",arr);
    iRet=CountSmall(arr);
    printf("the number of Capital letters are %d",iRet);
    return 0;
}
