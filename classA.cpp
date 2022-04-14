//classA
#include "classA.h"
classA::classA(){
    a=0;
     b=0;
}


classA::classA(int a,int b){
    this->a=a;
    this->b=b;
}

int classA::get_a()
{
    return a;
}
int classA::get_b()
{
    return b;
}