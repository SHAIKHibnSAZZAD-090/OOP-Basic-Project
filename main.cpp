//main.cpp
#include<iostream>
#include "classA.h"
using namespace std;

int main()
{
    classA ob1;
    classA ob2(10,20);
    cout<<ob1.get_a()<<" "<<ob1.get_b()<<endl;
    cout<<ob2.get_a()<<" "<<ob2.get_b()<<endl;
}
