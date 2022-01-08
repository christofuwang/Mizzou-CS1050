/*****************************************************************************
 *   Chris Wang
 *   Lab 6
 *   CS1050
 *   Oct 8, 2021
 *   Fall 2021 Semester
 *   Pawprint: cwcn6
 *****************************************************************************/

#include <stdio.h>

//Initializing Array
int InitializeArray(int array[], int begin, int end, int increment){
        int count = 0;
        if(end>begin){
                while(begin<=end){
                        array[count] = begin;
                        begin+=increment;
                        count++;
                }
        }
        else
        {       
                while(end<=begin){
                        array[count] = begin;
                        begin-=increment;
                        count++;
                }
        }
        return count;
}

//Printing Contents of Array
void PrintArray(int array[],int array2[], int array3[],int size){
        for(int y = 0; y<size;y++){
                printf("Array 1 Element %2d = %5d Array 2 Element %2d = %5d Array 3 Element %2d = %5d",y,array[y],y,array2[y],y,array3[y]);

        printf("\n");
        }
        printf("\n");
}

//Multiplying content of 2 arrays 
int MultArray(int array1[], int array2[],int array3[],int size){
        int count = 0;
        for(int x = 0; x<size;x++){
                count++;
                array3[x] = array1[x]*array2[x];
        }
        return count;
}

//Reverse Multiplying content of 2 arrays
int RevMultArray(int array1[], int array2[],int array3[],int size){
        int count = 0;
        for(int x = 0; x<size;x++){
                count++;
                array3[x] = array1[x]*array2[size-1-x];
        }
        return count;
}

int main(void){
        int FirstArray[100];
        int SecondArray[100];
        int ThirdArray[100];
        printf("FirstArrays: \n");
        printf("\n");
        InitializeArray(FirstArray,1,31,3);
        InitializeArray(SecondArray,2,52,5);
        MultArray(FirstArray,SecondArray,ThirdArray,11);
        PrintArray(FirstArray,SecondArray,ThirdArray,InitializeArray(FirstArray,1,31,3));

        int RevFirstArray[100];
        int RevSecondArray[100];
        int RevThirdArray[100];
        printf("FirstArrays Reverse Multiplied: \n");
        printf("\n");
        InitializeArray(RevFirstArray,1,31,3);
        InitializeArray(RevSecondArray,2,52,5);
        RevMultArray(RevFirstArray,RevSecondArray,RevThirdArray,11);
        PrintArray(RevFirstArray,RevSecondArray,RevThirdArray,InitializeArray(RevFirstArray,1,31,3));

        int TwoFirstArray[100];
        int TwoSecondArray[100];
        int TwoThirdArray[100];
        printf("SecondArrays: \n");
        printf("\n");
        InitializeArray(TwoFirstArray,22,0,2);
        InitializeArray(TwoSecondArray,84,7,7);
        MultArray(TwoFirstArray,TwoSecondArray,TwoThirdArray,12);
        PrintArray(TwoFirstArray,TwoSecondArray,TwoThirdArray,InitializeArray(TwoFirstArray,22,0,2));

        int RevTwoFirstArray[100];
        int RevTwoSecondArray[100];
        int RevTwoThirdArray[100];
        printf("SecondArrays Reverse Multiplied: \n");
        printf("\n");
        InitializeArray(RevTwoFirstArray,22,0,2);
        InitializeArray(RevTwoSecondArray,84,7,7);
        RevMultArray(RevTwoFirstArray,RevTwoSecondArray,RevTwoThirdArray,12);
        PrintArray(RevTwoFirstArray,RevTwoSecondArray,RevTwoThirdArray,InitializeArray(RevTwoFirstArray,22,0,2));

}
