#include<stdio.h>
struct date {
    int day;
    int month;
    int year;
};

int compare_date(struct date d1,struct date d2){
    if(d1.year==d2.year  && d1.month==d2.month && d1.day==d2.day){
        printf("given dates are equal\n");
    }
    else {
        printf("given dates are unequal\n");
    }
}
int main(){
 struct date date1= {10, 2, 2024};
 struct date date2= {10, 2, 2024};
 compare_date(date1,date2);

}