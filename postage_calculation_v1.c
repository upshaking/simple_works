/*快递运费计算器（多条件分支）
某快递公司运费规则如下：

首重 1 公斤以内（含 1 公斤）：

同城：10 元

省内：12 元

省外：20 元

超过 1 公斤的部分，每公斤加收：

同城：3 元/公斤

省内：5 元/公斤

省外：8 元/公斤

不足 1 公斤按 1 公斤算（向上取整）

如果重量超过 20 公斤，拒收，输出“超重，拒收”

输入： 重量（double）、地区代码（char，'A' 同城，'B' 省内，'C' 省外）
输出： 总运费（保留两位小数）或拒收提示

要求： 只用 if - else if - else 和 switch，不许用循环。*/



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