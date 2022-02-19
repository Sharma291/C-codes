//C program to read weekday number and print weekday name using switch
#include<stdio.h>
int main(){
    int weekdaynum;
    printf("Enter the weekday number : ");
    scanf("%d",&weekdaynum);
    switch(weekdaynum){
        case 1: {printf("Monday");
                   break;}
        case 2: {printf("Tuesday");
                   break;}
        case 3: {printf("Wednesday");
                   break;}
        case 4: {printf("Thursday");
                   break;}
        case 5: {printf("Friday");
                   break;}
        case 6: {printf("Saturday");
                   break;}
        case 7: {printf("Sunday");
                   break;}

        default: printf("Invalid number!");
    }
    printf("\n\nVignesh Sharma\n21B037");
    return 0;
}