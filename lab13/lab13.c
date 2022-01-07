#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "university.h"
#define OUTBOUNDS -1

/*****************************************************************************
 *   Chris Wang
 *   Lab 13
 *   CS1050
 *   Dec 3, 2021
 *   Fall 2021 Semester
 *   Pawprint: cwcn6
 *****************************************************************************/

// Stubs for functions you need to implement
Course GetCourseByDeptAndNumber(char * dept, int number)
{
    Course *cd = GetAllCourses(), *c = GetAllCourses();
    int test = 0;
    while (strlen((*cd).name)>0) {
        test = ((strcmp((*cd).dept,dept)==0)&&((*cd).number == number))?1:0;
        if(test==1){
            c =  cd;
            break;
        }
        cd++;
    }

    switch(test) {
        case 1:
            return *c;
            break;
    }
    (*c).number = OUTBOUNDS;
    return *c;
}

Course GetCourseByID(COURSE_ID id)
{
    Course *cd = GetAllCourses(), *c = GetAllCourses();
    int test = 0;
    while (strlen((*cd).name)>0) {
        test = (((*cd).id == id))?1:0;
        if(test==1){
            c =  cd;
            break;
        }
        cd++;
    }

    switch(test) {
        case 1:
            return *c;
            break;
    }
    (*c).number = OUTBOUNDS;
    return *c;
}

void PrintCourse(Course course)
{
        if(course.number==OUTBOUNDS){
                ;
        }
        else{
                printf("Id: %d/ Dept: %s/ Number: %d/ Name: %s/ Instructor: %s %s",course.id,course.dept,course.number,course.name,course.instructor_fname,course.instructor_lname);
        }
}

//////////////////////////////////////////////////////////////
// Stubs for bonus functions you may choose to implement
Student * GetStudentsByLastName(char * lname)
{
    Student *st = GetAllStudents(), *s = (Student *)malloc(sizeof(GetAllStudents()));
    int num = 0;
    int test = 0;

    while (strlen((*st).fname)>0) {
        if(strcmp((*st).lname,lname)==0){

            *s = *st;
            s++;
            num++;
            test = 1;

        }
        st++;
    }

    switch (test) {
        case 1:
            (*s).number = OUTBOUNDS;
            s-=(num);
            return s;
    }
    s = GetAllStudents();
    (*s).number = OUTBOUNDS;
    return s;
}

// For Honors students, you must also implement this function if you want bonus points
Student * GetStudentsByFirstAndLastName(char * fname, char * lname)
{
    Student *st = GetAllStudents(), *s = (Student *)malloc(sizeof(GetAllStudents()));
    int num = 0;
    int test = 0;
    while (strlen((*st).fname)>0) {
        if((strcmp((*st).fname,fname)==0)&&(strcmp((*st).lname,lname)==0)){

            *s = *st;
            s++;
            num++;
            test = 1;

        }
        st++;
    }

    switch (test) {
        case 1:
            (*s).number = OUTBOUNDS;
            s-=(num);
            return s;
    }
    s = GetAllStudents();
    (*s).number = OUTBOUNDS;
    return s;
}
/////////////////////////////////////////////////////////////////

// main() - Don't change this
int main(int argc, char * argv[])
{
    Course c;

    printf("Test #1:\n");
    c=GetCourseByID(5);
    PrintCourse(c);

    printf("\nTest #2:\n");
    c=GetCourseByID(11);
    PrintCourse(c);

    printf("\nTest #3:\n");
    c=GetCourseByID(999);
    PrintCourse(c);

    printf("\nTest #4:\n");
    c=GetCourseByDeptAndNumber("CS",1050);
    PrintCourse(c);

    printf("\nTest #5:\n");
    c=GetCourseByDeptAndNumber("STAT",4540);
    PrintCourse(c);

    printf("\nTest #6:\n");
    c=GetCourseByDeptAndNumber("ZZZZZZZZ",1050);
    PrintCourse(c);
  
    printf("\nTest #7:\n");
    c=GetCourseByDeptAndNumber("CS",999999);
    PrintCourse(c);

    /////////////////////////////
    // OPTIONAL BONUS TESTS
    /////////////////////////////
    Student * s;
    printf("\nTest #8:\n");
    s=GetStudentsByLastName("Ries");
    PrintStudents(s);

    printf("\nTest #9:\n");
    s=GetStudentsByLastName("Walkenhorst");
    PrintStudents(s);

    printf("\nTest #10:\n");
    s=GetStudentsByLastName("ZZZZZZZZZZZ");
    PrintStudents(s);

    printf("\nTest #11:\n");
    s=GetStudentsByFirstAndLastName("Charlotte","Ries");
    PrintStudents(s);
    /////////////////////////////
    /////////////////////////////

    return 0;
}
