#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inventory[6] = {12, 0, 45, 3, 99, 1};
    int out_of_stock_count = 0;

    for (int i = 0; i < 6; i++)
    {
        if (inventory[i] < 5)
        {
            printf("Products with id %d is less in the stocks and their quantity is:%d\n", i, inventory[i]);
        }
    }

    for (int i = 0; i < 6; i++)
    {
        if (inventory[i] == 0)
        {
            out_of_stock_count++;
        }
    }
    printf("Total products out of stock are: %d\n", out_of_stock_count);

    for (int i = 0; i < 6; i++)
    {
        if (inventory[i] <= 0)
        {
            inventory[i] = inventory[i] + 5;
        }
    }
    printf("Inventory after restocking is:\n");
    printf("---------------------------------------------------\n");
    for (int j = 0; j < 6; j++)
    {
        printf("Product %d stock: %d\n", j, inventory[j]);
    }
    return 0;
}
