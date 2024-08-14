#include<stdio.h>
int main(int argc, char const *argv[])
{
    char s[50];
    int n,i;
    int cnt=0;
    printf("Enter Your Message:");
   gets(s);
    printf("%s",s);
    while (s[i]!='\0')
    {
        i++;
        cnt++;
    }
    printf("%d",i);
    

    return 0;
}
