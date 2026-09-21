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
    char areacode = '\0';
    double weight1 = 0.0;

    printf("Enter area code\n(e.g. A/B/C, A stands for same city, B stands for within the province, C stands for outside the province)\n");
    scanf("%c", &areacode);
    printf("Enter the package's weight(/kg)\n");
    scanf("%lf", &weight1);

    int weight2 =(int)weight1;
    int weight = 0;
    if ((weight1 - weight2) > 0 )
    {
        weight = ++weight2;//容易忘记先自增再赋值
    }
    // printf("weight = %d\n", weight);
    
    /*下面统一定义firstprice和extraprice，可简化代码结构*/
    int firstprice = 0;
    int extraprice = 0;

    switch(areacode)
    {
        case 'A': 
        firstprice = 10;
        extraprice = 3;
        break;
        case 'B':
        firstprice = 12;
        extraprice = 5;
        break;
        case 'C':
        firstprice = 12;
        extraprice = 5;
        break;
        default:
        printf("please enter correct areacode\n");
    }
    if(weight <= 1)
    {
        printf("price is %d\n", firstprice);
    }else if(weight > 1 && weight <= 20)
    {
        printf("price is %d\n", firstprice + (weight - 1) * extraprice);
    }else
    {
        printf("overweight,won't accept\n");
    }
    
    return 0;
}
/*总共54行代码，较v1版本少24行*/