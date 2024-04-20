#include <stdio.h>
// Define a structure for Employee
struct Employee 
{
    int empno;
    char empname[50];
    char address[100];
    int age;
};
// Function to display employee info
void displayEmployee(struct Employee emp) 
{
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Address: %s\n", emp.address);
    printf("Age: %d\n", emp.age);
}

int main() 
{
    struct Employee emp;

    // Input employee details
    printf("Enter Employee Number: ");
    scanf("%d", &emp.empno);

    printf("Enter Employee Name: ");
    scanf("%s", emp.empname);

    printf("Enter Address: ");
    scanf("%s", emp.address);  
    printf("Enter Age: ");
    scanf("%d", &emp.age);

    printf("\nEmployee Details:\n");
    displayEmployee(emp);

    return 0;
}

