#include <iostream>
#include <cstdio>
#include<string>


class car {

public:

int i=6 ; 
void setvalue(int i) ;
int getvalue(void);

};

void  car:: setvalue(int value) {
i=value ;
}

int car:: getvalue(void)
{
return i ; 
}
