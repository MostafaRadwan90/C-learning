#include <cstdio>
#include <iostream>

int main (int argc ,char *argv[])

{
int ia[5];

int *ip = ia ; 
*ip =2; 
++ip ; 
*ip=3;
*(++ip)=4;
ia[3]=5;

printf(" first is  %d  , second is %d   , Third is %d   ,   fourth is   %d    ",ia[0],ia[1],ia[2],ia[3]);
return 0 ;
}
