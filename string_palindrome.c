#include<stdio.h>
#include<string.h>

int main()
{
char str1[50],str2[50];
printf("\n enter the string to chek pallindrome ");
gets(str1);
strcpy(str2,str1);
strrev(str2);

if(strcmp(str1,str2)==0)
{
    printf("the string is pallindrome ");
}else 
printf("the string is not pallindrome");

}