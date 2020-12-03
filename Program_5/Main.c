/*
    Write a program which accept string from user and display it inn
reverse order.

Input : “MarvellouS”

Output : “SuollevraM”
*/
#include<stdio.h>

void Reverse(char Str[])
{
    int iStart=0,iEnd=0,temp=0;
    if(Str==NULL)
    {
        return;
    }
    while(Str[iEnd]!='\0')
    {
        iEnd++;
    }
    iEnd--;
    
    while(iStart<iEnd)
    {
        temp=Str[iStart];
        Str[iStart]=Str[iEnd];
        Str[iEnd]=temp;

        iStart++;
        iEnd--;
    }
     
    
}
int main()
{
    char arr[30];
    printf("enter the character");
    scanf("%[^'\n]s",arr);
    Reverse(arr);
    printf("%s",arr);
    return 0;
}
