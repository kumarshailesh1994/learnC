#include<stdio.h>

void show(int a){

printf("%d",a);

}

void add(int a){
printf("%d",a+10);

}

int wrapper(void (*opt)(int))

{
	int a=10;
	opt(a);

}

int main(){

wrapper(add);
wrapper(show);

}

