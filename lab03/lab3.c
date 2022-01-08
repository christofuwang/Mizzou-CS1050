/*****************************************************************************
 *   Chris Wang
 *   Lab 3
 *   CS1050
 *   Sep 10, 2021
 *   Fall 2021 Semester
 *   Pawprint: cwcn6
 *****************************************************************************/

#include<stdio.h>

int main(void)
{
        int num = 50;
        while(num>=2){
                if(num%5==0&&num%3==0){
                        printf("XY\n");
                }
                if(num%5==0&&num%3!=0){
                        printf("X\n");
                }
                if(num%3==0&&num%5!=0){
                        printf("Y\n");
                }

                if(num%5!=0&&num%3!=0){
                        printf("%d\n",num);
                }
                num=num-2;
        }

}
