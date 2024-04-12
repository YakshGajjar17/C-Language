#include <stdio.h>
int main()

{
	char name[50],address[50];
	int date,age;
	printf("Enter Your Name:");
	scanf("%s",&name);
	printf("Enter Your Birth Date:");
	scanf("%d",&date);
	printf("Enter Your Age:");
	scanf("%d",&age);
	printf("Enter Your Address:");
	scanf("%s",&address);
	
	printf("Your Name is:%s\n",name);
	printf("Your Birth Date is:%d\n",date);
	printf("Your Age is:%d\n",age);
	printf("Your Address is:%s\n",address);
					
		return 0;
} 
