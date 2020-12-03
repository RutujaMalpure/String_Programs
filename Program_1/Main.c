/*
    1.Write a program which accept string from user and count number of
capital characters.

Input : “Marvellous Multi OS”

Output : 4
*/
#include<stdio.h>

int CountCapital(char Str[])
{
    int i=0,iCnt=0;
    if(Str==NULL)
    {
        return -1;
    }
    while(Str[i]!='\0')
    {
        if(Str[i]>='A' &&  Str[i]<='Z')
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
    iRet=CountCapital(arr);
    printf("the number of Capital letters are %d",iRet);
    return 0;
}
