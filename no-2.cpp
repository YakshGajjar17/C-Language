#include<stdio.h>
int main()
{
	int choice;
	float num1,num2,sum;
	
	printf("====== Choice Board ======\n\n");
	printf("1.Addition\n");
	printf("2.Substraction\n");
	printf("3.Multiplication\n");
	printf("4.Division\n");
	printf("5.Modulo\n");
		
	printf("Enter Your Choice=");
	scanf("%d",&choice);
	
	printf("Enter Any Number");
	scanf("%f",&num1);
	printf("Enter Any Number");
	scanf("%f",&num2);
	
	if (choice==1)
	{
	sum=num1+num2;
	printf("Your Ans:%f",sum);	
	}
	else if (choice==2)
	{
		sum=num1-num2;
		printf("Your Ans:%f",sum);
	}
	else if (choice==3)
	{
		sum=num1*num2;
		printf("Your Ans:%f",sum);
	}
	else if (choice==4)
	{
		sum=num1/num2;
		printf("Your Ans:%f",sum);
	}
	else if (choice==5)
	{
		sum=num1%num2;
		printf("Your Ans:%f",sum);
	}
	
	return 0;
}

