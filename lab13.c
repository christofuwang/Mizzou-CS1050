Last login: Sat Jan  1 11:35:10 on console

The default interactive shell is now zsh.
To update your account to use zsh, please run `chsh -s /bin/zsh`.
For more details, please visit https://support.apple.com/kb/HT208050.
(base) Chriss-MacBook-Air:~ chriswang$ ssh cwcn6@tc.rnet.missouri.edu
cwcn6@tc.rnet.missouri.edu's password: 
Last login: Tue Dec 14 13:04:58 2021 from 10.7.74.228
* ********************************************************************
* Welcome to clark-r630-login-node907.cobalt.lan, CentOS, 7.9.2009
* Archive of news is available in /etc/motd-archive
* University of Missouri Division of IT Research Computing Support Services
*
* Use of this system is governed by the rules and regulations of the
* University of Missouri and the University of Missouri System and also
* by requirements of various granting agencies.
*
* Users must be familiar with and abide by the UM System acceptable use
* policy (CRR 110.005) and the UM System Data Classification System (DCL).
* http://umsystem.edu/ums/rules/collected_rules/facilities/ch110
* http://umsystem.edu/ums/is/infosec/classification

* Helpful Links
* News: http://doit.missouri.edu/research/research-computing-news
* Support: rcss-support@missouri.edu
* Announcement list: https://po.missouri.edu/cgi-bin/wa?A0=rcss-announce-l
* Training: http://docs.rnet.missouri.edu/training
* Documentation: http://docs.rnet.missouri.edu/

* ********************************************************************
[cwcn6@clark-r630-login-node907 ~]$ cd lab13
[cwcn6@clark-r630-login-node907 lab13]$ lab13.c
-bash: lab13.c: command not found
[cwcn6@clark-r630-login-node907 lab13]$ vim lab13.c

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

//Hi Nelson, can you send me a picture of a cute otter if you see this?

// Stubs for functions you need to implement
Course GetCourseByDeptAndNumber(char * dept, int number)
{   
    Course *cd = GetAllCourses(), *c = GetAllCourses();
    int test = 0;
    while (strlen((*cd).name)>0) {
                                                              1,1           Top
