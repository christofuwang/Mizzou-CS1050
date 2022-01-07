#include <stdio.h>

void getintArray(int * outputArray, int * count){
        printf("How many integers would you like you array?: \n");
        scanf("%d",count);
        for(int x = 0; x<*count;outputArray++){
                printf("Enter Integer #%d: ",x+1);
                int scan = 0;
                scanf("%d",&scan);
                *outputArray = scan;
                scan = 0;
                x++;
        }

}

void printArray(int * array,int count){
        printf("You entered an Array with %d elements\n", count);
        for(int y = 0; y<count;y++){
                printf("Element #%d = %d\n", y, array[y]);
        }
}

int TotalArray(int * array, int count){
        int total = 0;
        for(int y = 0; y<count;y++){
                total += *array;
                array++;
        }
        return total;
}

float AvgArray(int * array, int count){
        float a = 0;
        for(int y = 0; y<count;y++){
                a += *array;
                array++;
        }
        a = a/count;
        return a;
}

int main(void){
        int c = 0;
        int *count;
        count = &c;
        printf("Welcome to Lab 7-8\n");
  
        int outputArray[256];
        getintArray(outputArray,count);
        printArray(outputArray,*count);
        int total1 = TotalArray(outputArray,*count);
        printf("Total of array = %d\n",TotalArray(outputArray,*count));
        printf("Average of array = %.2f\n",AvgArray(outputArray,*count));
        int place = *count;

        c = 0;

        int outputArray2[256];
        getintArray(outputArray2,count);
        printArray(outputArray2,*count);
        float avg = (float)(TotalArray(outputArray2,*count)+total1)/(place + *count);
        printf("Total of array1 and array2 = %d\n",(TotalArray(outputArray2,*count)+total1));
        printf("Average of array1 and array2 = %.2f\n",avg);
}
