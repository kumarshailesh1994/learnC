#include<stdio.h>
#include<string.h>
int main(){
int length,count;
char name[20];
scanf("%s",name);
length=strlen(name);

for(int i=0;i<length;i++)
	{
		count=1;
		if(name[i]==' '){

			break;}

		else
		{
			for(int j=i+1;j<length;j++){
			if(name[i]==name[j]){
				count++;
				name[j]=' ';
			}
		}

	printf("Charcter %c is prsent %d times\n",name[i],count);
}
}
}
