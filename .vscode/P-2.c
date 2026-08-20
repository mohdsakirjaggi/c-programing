// Write a program to find profit or loss percentage given cost price and selling price.

/*#include <stdio.h>
int main()
{
    float sp, cp, loss, profit, percentage; // SP=sellintg , CP=cost price

    printf("Enter Cost Price: ");
    scanf("%f", &cp);

    printf("Enter Selling Price: ");
    scanf("%f", &sp);
    if (sp > cp)
    {
        profit = sp - cp;
        percentage = (profit / cp) * 100;
        printf("profit=%f\n", profit);
        printf("profit percentage=%f\n", percentage);
    }
    else if (cp > sp)
    {
        loss = cp - sp;
        percentage = (loss / cp) * 100;
        printf("Loss=%f\n", loss);
        printf("loss percentage=%f\n", percentage);
    }
    else
    {
        printf("NO profit no loss");
    }
    return 0;
}*/

#include <stdio.h>

int main()
{
    float cp, sp, profit, loss, percentage;

    printf("Enter Cost Price: ");
    scanf("%f", &cp);

    printf("Enter Selling Price: ");
    scanf("%f", &sp);

    if (sp > cp)
    {
        profit = sp - cp;
        percentage = (profit / cp) * 100;

        printf("Profit = %.2f\n", profit);
        printf("Profit Percentage = %.2f%%\n", percentage);
    }
    else if (cp > sp)
    {
        loss = cp - sp;
        percentage = (loss / cp) * 100;

        printf("Loss = %.2f\n", loss);
        printf("Loss Percentage = %.2f%%\n", percentage);
    }
    else
    {
        printf("No Profit, No Loss\n");
    }

    return 0;
}