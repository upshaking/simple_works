#include <stdio.h>
int main()
{
    double income = 0.0;
    double taxable_income = 0.0;

    printf("Enter Personal income: \n");
    scanf("%lf", &income);

    taxable_income = income - 5000;

    if (taxable_income <= 0)
    {
        printf("tax: %.2lf", 0.0);
    } else if(taxable_income <=3000)
    {
        printf("tax: %.2lf", taxable_income * 0.03);
    }else if(taxable_income <= 12000)
    {
        printf("tax: %.2lf", taxable_income * 0.1 - 210);
    }else if(taxable_income <= 25000)
    {
        printf("tax: %.2lf", taxable_income * 0.2 - 1410);
    }else if(taxable_income <= 35000)
    {
        printf("tax: %.2lf", taxable_income * 0.25 - 2660);
    }else if(taxable_income <= 55000)
    {
        printf("tax: %.2lf", taxable_income * 0.3 - 4410);
    }else if(taxable_income <= 80000)
    {
        printf("tax: %.2lf", taxable_income * 0.35 - 7160);
    }else
    {
        printf("tax: %.2lf", taxable_income * 0.45 - 15160);
    }

    return 0;
}