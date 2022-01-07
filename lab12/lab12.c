/*****************************************************************************
 *   Chris Wang
 *   Lab 12
 *   CS1050
 *   Nov 19, 2021
 *   Fall 2021 Semester
 *   Pawprint: cwcn6
 *****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _Movie {
        char name[256];
        long gross;
        int year;
} Movie;

int main(int argc, char *argv[]) {

        char * Ascending = "Ascending";
        char * Descending = "Descending";

        char *file1;
        char * Title = "Title";
        char * Gross = "Gross";
        char * Year = "Year";

        file1 = argv[1];
        FILE *fp = fopen(file1, "r");
        if (fp == NULL) {
                printf("Error: Could not open %s\n", file1);
                exit(0);
        }

        int count = 0;

        if(argv[2] == NULL){
                Movie movies[256];
          
                while (!feof(fp)) {
                        fscanf(fp, "%s %ld %d",
                        movies[count].name,
                        &movies[count].gross,
                        &movies[count].year);
                        count++;
                }
          
                printf("\n");
                printf("Original Movies:");
                printf("\n%39sMovie:%5sGross:%1sYear:\n"," "," "," ");
          
                for (int x=0; x<count-1; x++) {
                        printf("%45s %10ld %d\n",
                        movies[x].name,
                        movies[x].gross,
                        movies[x].year);
                }
                exit(0);
        }

        if(strcmp(argv[2],Title)&&strcmp(argv[2],Year)&&strcmp(argv[2],Gross)!=0){
                printf(" - sort_field must be one of Title, Gross, or Year if specified\n");
                exit(0);
        }
  
        if(argv[3]!=NULL){
                if(strcmp(argv[3],Ascending)&&strcmp(argv[3],Descending)!=0){
                        if(argv[3] != NULL){
                                printf(" - sort_order must be one of Ascending or Descending if specified\n");
                                exit(0);
                        }
                }
        }

        if(argv[3] == NULL){
                argv[3] = Ascending;
        }
        
        Movie movies[256];
        while (!feof(fp)) {
                fscanf(fp, "%s %ld %d",
                movies[count].name,
                &movies[count].gross,
                &movies[count].year);
                count++;
        }
  
        printf("\n");
        printf("Original Movies:");
        printf("\n%39sMovie:%5sGross:%1sYear:\n"," "," "," ");
  
        for (int x=0; x<count-1; x++) {
                printf("%45s %10ld %d\n",
                movies[x].name,
                movies[x].gross,
                movies[x].year);
        }

        //Title Ascending
        if(strcmp(argv[3],Ascending)==0){
                if(strcmp(argv[2],Title)==0){
                        int i,j;
                        for(j = 0; j<count-1;j++){
                                for(i = 0; i<count-2;i++){
                                        if(strcmp(movies[i].name, movies[i+1].name)>0){
                                                movies[255] = movies[i];
                                                movies[i] = movies[i+1];
                                                movies[i+1] = movies[255];
                                        }
                                }
                        }
                }
        }

        //Title Descending
        if(strcmp(argv[3],Descending)==0){
                if(strcmp(argv[2],Title)==0){
                        int i,j;
                        for(j = 0; j<count-1;j++){
                                for(i = 0; i<count-2;i++){
                                        if(strcmp(movies[i].name, movies[i+1].name)<0){
                                                movies[255] = movies[i];
                                                movies[i] = movies[i+1];
                                                movies[i+1] = movies[255];
                                        }
                                }
                        }
                }
        }

        //Year Ascending        
        if(strcmp(argv[3],Ascending)==0){
                if(strcmp(argv[2],Year)==0){
                        int i,j;
                        for(j = 0; j<count-1;j++){
                                for(i = 0; i<count-2;i++){
                                        if(movies[i].year>movies[i+1].year){
                                                movies[255] = movies[i];
                                                movies[i] = movies[i+1];
                                                movies[i+1] = movies[255];
                                        }
                                }
                        }
                }
        }

        //Year Descending
        if(strcmp(argv[3],Descending)==0){
                if(strcmp(argv[2],Year)==0){
                        int i,j;
                        for(j = 0; j<count-1;j++){
                                for(i = 0; i<count-2;i++){
                                        if(movies[i].year<movies[i+1].year){
                                                movies[255] = movies[i];
                                                movies[i] = movies[i+1];
                                                movies[i+1] = movies[255];
                                        }
                                }
                        }
                }
        }

        //Gross Ascending
        if(strcmp(argv[3],Ascending)==0){
                if(strcmp(argv[2],Gross)==0){
                        int i,j;
                        for(j = 0; j<count-1;j++){
                                for(i = 0; i<count-2;i++){
                                        if(movies[i].gross>movies[i+1].gross){
                                                movies[255] = movies[i];
                                                movies[i] = movies[i+1];
                                                movies[i+1] = movies[255];
                                        }
                                }
                        }
                }
        }

        //Gross Descending
        if(strcmp(argv[3],Descending)==0){
                if(strcmp(argv[2],Gross)==0){
                        int i,j;
                        for(j = 0; j<count-1;j++){
                                for(i = 0; i<count-2;i++){
                                        if(movies[i].gross<movies[i+1].gross){
                                                movies[255] = movies[i];
                                                movies[i] = movies[i+1];
                                                movies[i+1] = movies[255];
                                        }
                                }
                        }
                }
        }

        //Prints Table
        printf("\n");
        printf("Sorted Movies:");
        printf("\n%39sMovie:%5sGross:%1sYear:\n"," "," "," ");
        for (int x=0; x<count-1; x++) {
                printf("%45s %10ld %d\n",
                movies[x].name,
                movies[x].gross,
                movies[x].year);
        }
        fclose(fp);
}
