#include "include/my_stack.h"
/*
 * my_stack的实现文件
 * 如果采用C++的实现，那也可以把此文件名改为.cpp
 * 但是记住g++才是编译C++的编译器
 *
 */
int a[100];

void stack_push(int x)
{
a[1]=x;
}
int stack_pop()
{
int k1;
k1=a[1];

a[1]=0;
return k1;
}

// The capacity of the stack
int stack_capacity()
{
return 0;}

// Current available size of the stack
int stack_size()
{
int k=100;
return k;
}


/*
 * return 0/1 to check if stack is empty or full
 * 0 - No
 * 1 - Yes
 */
int stack_is_empty()
{
int i;
for(i=1;i<100;i++){
if(a[i]!=0)
return 1;
}
return 0;
}

int stack_is_full()
{
int j;
j=0;
return j;
}





