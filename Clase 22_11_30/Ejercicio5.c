#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[] = {5, 20, 35, 44, 57, 6};
    int *ap_array;
    int i;

    ap_array = &array[0];
    printf("\n\n");

    for(i = 0; i < 6; i++)
    {
        printf("%d = %d\n", i, array[i]);
        printf("%d = %d\n", i, *(ap_array));
        printf("%d = %d\n", i, *(++ap_array));
        printf("\n");
    }

    return 0;
}