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
