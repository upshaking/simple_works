#include <stdio.h>
int main()
{
    char code = '\0';
    double weight1 = 0; 
    int weight = 0;

    printf("Enter area code\n(e.g. A/B/C, A stands for same city, B stands for within the province, C stands for outside the province)\n");
    scanf(" %c", &code);
    printf("Enter the package's weight(/kg)\n");
    scanf("%lf", &weight1);

    int weight2 = (int)weight1;
    if ((weight1 - weight2) > 0)
    {
        weight = weight2 + 1;
    }else
    {
        weight = weight2;
    }
    // printf("%d\n", weight);
    // printf("%f\n", weight1);
    // printf("%d\n", weight2);

    switch (code)
    {
        case 'A':
        if (weight <= 1 && weight >= 0)
        {
            printf("price: %dyuan\n", 10);
        }else if (weight > 1 && weight <= 20)
        {
            printf("price: %d yuan\n", (weight - 1) * 3 + 10);
        }else if (weight > 20)
        {
            printf("Overweight, won't accept\n");
        }else
        {
            printf("Please enter positive number\n");
        }
        break;

        case 'B':
        if (weight <= 1 && weight >= 0)
        {
            printf("price: %d yuan\n", 12);
        }else if (weight > 1 && weight <= 20)
        {
            printf("price: %d yuan\n", (weight - 1) * 5 + 12);
        }else if (weight > 20)
        {
            printf("Overweight, won't accept\n");
        }else
        {
            printf("Please enter positive number\n");
        }
        break;

        case 'C':
        if (weight <= 1 && weight >= 0)
        {
            printf("price: %d yuan\n", 20);
        }else if (weight > 1 && weight <= 20)
        {
            printf("price: %d yuan\n", (weight - 1) * 8 + 20);
        }else if (weight > 20)
        {
            printf("Overweight, won't accept\n");
        }else
        {
            printf("Please enter positive number\n");
        }
        break;

        default:
        printf("Enter right area code!\n");
        break;
    }
    return 0;
}