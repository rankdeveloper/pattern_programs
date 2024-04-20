// full pyramid

#include <stdio.h>

int main()
{

    char arr[5] = {'A', 'B', 'C', 'D', 'E'};

    for (int i = 5; i > 0; i--)
    {

        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }

        for (int k = 0; k < 5 - i; k++)
        {
            printf("%c ", arr[k]);
            // printf("* ");
        }

        printf("\n");
    }

    return 0;
}

// output:
//     *
//    * *
//   * * *
//  * * * *

//     A
//    A B
//   A B C
//  A B C D