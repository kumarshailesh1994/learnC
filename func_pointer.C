#include<stdio.h>
int fun(int a)
{
return a+10;
}
int main(){

int (*ptr)(int)=&fun;

printf("%d",(*ptr)(10));

}
