#include <cstdio>
#include <iostream>
using namespace std;
int main (int argc, char** argv )
{

int x=8 ; 
int *ip ; 

ip=&x ;

int y=*ip ; 

printf ( " x is %d , ip is %d  , &x   is %d ,  y is %d  , *ip is %d  , ", x,ip,&x,y,*ip);    


int  z,g ; 
z=6 ;
g=z; 
printf ( " z is %d , g is %d  , &z   is %d , &g is %d   ", z,g,&z,&g);    
return 0 ;

}
