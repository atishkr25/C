

#include <stdio.h>
int main() {
int n, factorial=0;
printf("enter any a number: ");
scanf("%d",&n);
if(n<0)
printf("error ! factorial cant exist");
else
  for(int i=1; i<=n; i++)
  factorial =factorial*i;

printf("fact = %d",factorial);


   
        
// //     else {
// //     printf("not pelindrome");}
//  int n,rem,rev=0,c; 
// printf("enter the numer: ");
// scanf("%d",&n);
// c = n;
// while (n>0){
//     rem = n%10;
//     rev = (rev*10)+rem;
//     n = n/10;
// }
//     if (c==rev)
//     printf("palindrome ");
//     else 
//     printf("not pelindrome ");
return 0;
}