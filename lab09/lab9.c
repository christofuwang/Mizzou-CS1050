/*****************************************************************************
 *   Chris Wang
 *   Lab 9
 *   CS1050
 *   Oct 29, 2021
 *   Fall 2021 Semester
 *   Pawprint: cwcn6
 *****************************************************************************/

#include <stdio.h>

void CreateString(char x[]){
        printf("Please enter a string: ");
        scanf("%s",x);
}

int segString(char * sPtr, int segLen){
        int numcount = 0;
        while(*sPtr!='\0'){
                numcount++;
                sPtr++;
        }
        numcount = numcount/segLen;
        return numcount;
}

void revSegString(char * cPtr, int segLen, int numseg){

        int placeholder = segLen*numseg;

        while(*(cPtr+placeholder)!='\0'){
                printf("%c",(*(cPtr+placeholder)));
                placeholder++;
        }

        placeholder = segLen*numseg;
        cPtr = cPtr+placeholder;
        for(int y = 1; y<=numseg;y++){

                cPtr = (cPtr-segLen);


                for(int x = 0; x<segLen;x++){
                        printf("%c",*(cPtr+x));
                }

        }
        printf("\n");

}

int main(void){
        char x2[256];
        int segLen = 0;

        printf("Welcome to Lab 9!\n");
        CreateString(x2);

        printf("Please enter a segment length: ");
        scanf("%d",&segLen);
        printf("You entered: %s\n", x2);

        printf("There are %d segments in the string\n",segString(x2,segLen));
        printf("The modified string is: ");
        revSegString(x2,segLen,segString(x2,segLen));

        printf("Thanks for doing Lab 9\n");
}
