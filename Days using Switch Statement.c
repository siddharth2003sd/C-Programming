#include<stdio.h>
    int main(){
    int day;
    scanf("%d",&day);
    switch(day)
    {
    case 1:
        printf("Its Monday.Concentrate in work.\n");
        break;
    case 2:
        printf("Still its week day only.");
        break;
    case 3:
        printf("Its Friday.Get ready for the week end.");
        break;
    case 4:
        printf("Enjoy your week-end");
        break;
    default:
        printf("Invalid day number!");
    }
        return 0;
        }
