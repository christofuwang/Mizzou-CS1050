/*****************************************************************************
 *   Chris Wang
 *   Lab 5
 *   CS1050
 *   Oct 1, 2021
 *   Fall 2021 Semester
 *   Pawprint: cwcn6
 *****************************************************************************/

#include <math.h>
#include <stdio.h>

//factorial function
long factorial(int n){
        long result = 1;
        for (int i=n;i>1;i--)
        {
                result*=i;
        }
        return result;
}

//Calculates value of e with powers from 1-5
double printe(double pownum){
        int x = 1;
        double one = 1;
        double  e = 1;
        for(x=1;x<50;x++){
                e = e + (one/(factorial(x)));
        }
        double num = 0;
        num = pow(e,pownum);
        return (num);
}

//Main function print contents on printe
int main(void){
        int z = 0;
        for(z = 1; z<6;z++){
                printf("e to the %d power = %.3lf",z,printe(z));
                printf("\n");
        }
}
