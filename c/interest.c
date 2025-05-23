#include <stdio.h>
#include <math.h>

int main()
{
    // COMPOUND INTEREST CALCULATOR

    double principal = 0.0;
    double rate  = 0.0;
    int years = 0;
    int times_compounded = 0;
    double total = 0.0;

    printf("Compound Interest Calculator\n");
    
    printf("Enter the principal amount (P): ");
    scanf("%lf", &principal);

    printf("Enter the interest rate %% (r);  ");
    scanf("%lf", &rate);
    rate = rate / 100;

    printf("Enter the # of years (t): ");
    scanf("%d", &years);

    printf("Enter the # of times compounded per year (n): ");
    scanf("%d", &times_compounded);

    total = principal * pow(1 + rate / times_compounded, times_compounded * years);

    printf("After %d years, the total will be $%.2lf.", years, total);

    return 0;
}