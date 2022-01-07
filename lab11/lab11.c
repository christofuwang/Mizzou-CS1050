/*****************************************************************************
 * CS1050
 * SP2021
 * Lab 11
 * By Chris Wang (cwcn6)
 * March 22, 2021
 *****************************************************************************/
#include <stdio.h>
#include <string.h>
#include "fight.h"
#include<stdlib.h>

typedef struct _Monster{
        char name[256];
        int AC;
        int HP;
        int TH;
        char A1D[256];
        char A2D[256];
}Monster;

int main(int argc, char * argv[])
{

    if(argv[1]==0||argv[2]==0||argv[3]==0){
        printf("***Syntax:\n./a.out combatant_file combatant1_name combatant2_name\n");
        exit(0);
    }

    int count = 0;
    int count2 = 0;
    int count3 = 0;

    char * file1;
    file1 = argv[1];
    FILE *fp = fopen(file1, "r");
    char string[256];

    if (fp == NULL){
        printf("Error: Could not open %s\n",file1);
        exit(0);
    }
    Monster monster[256];
    fgets(string,256,fp);

    while(fp && !feof(fp)){

        fscanf(fp, "%d,%d,%d,%[^,],%[^,],%s",&monster[count].AC, &monster[count].HP, &monster[count].TH, monster[count].A1D, monster[count].A2D, monster[count].name);
        
        if(strcmp(monster[count].name,argv[2])==0){
                count2 = count;
        }
        if(strcmp(monster[count].name,argv[3])==0){
                count3 = count;
        }
        
        count+=1;
    }
if(strcmp(argv[2],"Ahote")!=0&&count2==0){
        printf("**** Failed to read the right number of data elements from the file\n**** Error: could not find combatant %s\n",argv[2]);
        exit(0);
}

if(strcmp(argv[3],"Ahote")!=0&&count3==0){
        printf("**** Failed to read the right number of data elements from the file\n**** Error: could not find combatant %s\n",argv[3]);
        exit(0);
}

    Fight(monster[count2].name,monster[count2].AC, monster[count2].HP, monster[count2].TH, &monster[count2].A1D, &monster[count2].A2D, monster[count3].name, monster[count3].AC, monster[count3].HP, monster[count3].TH, &monster[count3].A1D, &monster[count3].A2D);
    fclose(fp);
}
