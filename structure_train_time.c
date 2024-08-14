#include<stdio.h>
struct time
{
    int hour;
    int min;
    int sec;
};
struct train
{
    char name[89];
    int number;
    struct time arrivaltime;
    struct time deptime;
};
int main(){
    int i;
    struct train t[1];
 printf("the traiin details are as follows;\n");
 for(i=0;i<1;i++)
 {
    printf("the train name is:\n");
    scanf("%s",t[i].name);
    printf("the train number is:\n");
    scanf("%d",&t[i].number);
    printf("the train arrival time  is:\n");
    scanf("%d:%d:%d",&t[i].arrivaltime.hour,&t[i].arrivaltime.min,&t[i].arrivaltime.sec);
    printf("the train deparure time  is:\n");
    scanf("%d:%d:%d",&t[i].deptime.hour,&t[i].deptime.min,&t[i].deptime.sec);
 }
 printf("the details are as folloes");
 for(i=0;i<1;i++)
 {
    printf("the train name is %s\n",t[i].name);
    printf("the train number is %d\n",t[i].number);
    printf("the train arival is %d\t%d%d\n",t[i].arrivaltime.hour,t[i].arrivaltime.min,t[i].arrivaltime.sec);
    printf("the train departure is %d\t%d%d\n",t[i].deptime.hour,t[i].deptime.min,t[i].deptime.sec);
 }
 return 0;
}




