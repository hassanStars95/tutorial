// /* This is a program that prints the name of a month according to the number entered by the user*/
// #include <stdio.h>
// int main() {
// int num;
// printf("Please enter a number from 1 to 12\n"); // 1 - 12 represents January to December
// scanf("%d", &num);
// switch (num)
// {
// case 1:
// printf("January");
//     break;

// case 2:
// printf("February");
//     break;

// case 3:
// printf("March");
//     break;

// case 4:
// printf("April");
//     break;

// case 5:
// printf("May");
//     break;

// case 6:
// printf("June");
//     break;

// case 7:
// printf("July");
//     break;

// case 8:
// printf("August");
//     break;

// case 9:
// printf("September");
//     break;

// case 10:
// printf("October");
//     break;

// case 11:
// printf("November");
//     break;

// case 12:
// printf("December");
//     break;

// default:
//     break;
// }

// }
#include<stdio.h>
int main(){
    for (int i = 1; i <= 5; i++)
    {
        printf("\n");
        for (int j = 1; j <= 5; j++)
        {
            printf("%d", j);
        }
    }
}