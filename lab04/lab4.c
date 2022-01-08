/*****************************************************************************
 *   Chris Wang
 *   Lab 4
 *   CS1050
 *   Sep 17, 2021
 *   Fall 2021 Semester
 *   Pawprint: cwcn6
 *****************************************************************************/

#include<stdio.h>

int main(void){
        int start = 0;
        int limit = 0;
        printf("Enter Start: ");
        scanf("%d",&start);
        int c = 0;
        int a = 0;

        c= (start>150)||(start<=0);
        for(int x = 0;x<10;){
                switch(c){
                        case 1:
                                printf("Enter Start: ");
                                scanf("%d",&start);
                                c= ((start>150)||(start<=0));
                                break;
                        case 0:
                                x=10;
                                break;
                }
        }

        printf("Enter Limit: ");
        scanf("%d",&limit);
        a = ((limit>150)||(limit<=0));
        for(int x = 0;x<10;){
                switch(a){
                        case 1:
                                printf("Enter Limit: ");
                                scanf("%d",&limit);
                                a = ((limit>150)||(limit<=0));
                                break;
                        case 0:
                                x=10;
                                break;
                }
        }

        printf("Enter Increment: ");
        int inc = 0;
        scanf("%d",&inc);
        int d = 2;
        int e = 2;

        d = (start>limit)&&(inc>=0);
        for(int x = 0;x<10;){
                switch(d){
                        case 1:
                                printf("Enter Increment: ");
                                scanf("%d",&inc);
                                d = ((start>limit)&&(inc>=0));
                                break;
                        case 0:
                                x=10;
                                break;
                }
        }

        e = (start<=limit)&&(inc<=0);
        for(int x = 0;x<10;){
                switch(e){
                        case 1:
                                printf("Enter Increment: ");
                                scanf("%d",&inc);
                                e = (start<=limit)&&(inc<=0);
                                break;
                        case 0:
                                x=10;
                                break;
                }
        }

        int f = (inc>0);

        switch(f){
                case 1:
                        for(int x = start; x<=limit; x+=inc){
                                printf("%d  ",x);
                        }
                        break;
                case 0:
                        inc = inc*(-1);
                        for(int t = start; t>=limit; t-=inc){
                                printf("%d  ",t);
                        }
                        break;
        }

}
