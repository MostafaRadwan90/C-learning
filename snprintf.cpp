#include <cstdio>
#include <iostream>
#include <string>
int main () 

{
char msg[50];
int value = 0;


 snprintf (msg, 75, "hello world #%ld", value);


for (int i =0 ; i<50 ; i++){
printf ("this what in msg %c   ",msg[i]);
}
return 0 ; 
}
