#include <stdio.h>
// Define a structure for Employee
struct Employee 
{
    int empno;
    char empname[50];
    float salary;
};

// Define a union for Data
union Data 
{
    int i;
    float f;
    char str[20];
};

int main() 
{
    // Structure Example
    struct Employee emp;
    emp.empno = 101;
    printf(emp.empname, "Raj");
    emp.salary = 50000;

    printf("Structure (Employee):\n");
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Salary: %.2f\n", emp.salary);
    printf("Size of Structure (Employee): %zu bytes\n\n", sizeof(emp));

    // Union Example
    union Data data;
    data.i = 10;
    printf("Union (Integer):\n");
    printf("Integer: %d\n", data.i);
    printf("Size of Union (Integer): %zu bytes\n\n", sizeof(data));

    data.f = 10.5;
    printf("Union (Float):\n");
    printf("Float: %.2f\n", data.f);
    printf("Size of Union (Float): %zu bytes\n\n", sizeof(data));

    printf(data.str, "Hello");
    printf("Union (String):\n");
    printf("String: %s\n", data.str);
    printf("Size of Union (String): %zu bytes\n", sizeof(data));

    return 0;
}

