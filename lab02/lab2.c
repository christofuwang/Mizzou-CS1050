#include<stdio.h>

int main(void)
{
        //Initialzing integers//
        int number1;
        int number2;
        int number3;
        int number4;
        //Scanning for input//
        printf("Enter 4 integers (A,B,C,D) separated by  spaces: ");
        scanf("%d %d %d %d", &number1, &number2, &number3 ,&number4);
        //Printing inital Values//
        printf("Intial Values: ");
        printf("%d %d %d %d\n", number1, number2, number3, number4);
        //Sum of A and D//
        printf("The sum of A and D: ");
        printf("%d\n",number1+number4);
        //Product of B and C//
        printf("The product of B and C: ");
        printf("%d\n",number2*number3);
        //Integer Quotient of C divided by A//
        printf("The integer quotient of C divided by A: ");
        printf("%d\n",number3/number1);
        //The integer remainder of D divided by C//
        printf("The integer remainder of D divided by C: ");
        printf("%d\n", number4%number3);
        //The product of A and B divided by the quantity of sum of C and D//
        printf("The product of A and B divided by the quantity of sum of C and D: ");
        printf("%d\n",(number1*number2)/(number3+number4));
}
