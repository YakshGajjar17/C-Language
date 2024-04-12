#include <stdio.h>

float calsi(float principal, float rate, float time) 
{
    return (principal * rate * time) / 100;
}

int main() 
{
    float principal, rate, time, interest;
    
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the rate of interest: ");
    scanf("%f", &rate);
    printf("Enter the time in years: ");
    scanf("%f", &time);
    
    interest = calsi(principal, rate, time);
    
    printf("Simple Interest = %f\n", interest);

    return 0;
}

