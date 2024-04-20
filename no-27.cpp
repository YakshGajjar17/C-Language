#include <stdio.h>

// structure for Employee
struct Employee 
{
    int empno[5];
    char empname[50];
    char address[100];
    int age;
};

int main() 
{
    // Declare an array of five Employee structure 
    struct Employee employees[5];

    // Input details of employees
    for (int i = 0; i < 5; i++) 
	{
        printf("Enter details for Employee %d:\n", i + 1);

        printf("Employee Number: ");
        scanf("%d", &employees[i].empno);

        printf("Employee Name: ");
        scanf("%s", employees[i].empname);  

        printf("Address: ");
        scanf("%s", employees[i].address);  

        printf("Age: ");
        scanf("%d", &employees[i].age);

        printf("\n");
    }

    // Display details of employees
    printf("Employee Details:\n");
    for (int i = 0; i < 5; i++) 
	{
        printf("Employee %d\n", i + 1);
        printf("Employee Number: %d\n", employees[i].empno);
        printf("Employee Name: %s\n", employees[i].empname);
        printf("Address: %s\n", employees[i].address);
        printf("Age: %d\n", employees[i].age);
        printf("\n");
    }

    return 0;
}

