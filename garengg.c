#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int factorial(int input);

int main()
{
    int ujikasus, banyak_angka;
    scanf("%d", &ujikasus);

    int angka[100];
    int a, b, c, hasil[100];

    for (int uji = 0; uji < ujikasus; uji++)
    {
        hasil[uji] = 0;
        scanf("%d", &banyak_angka);
        for (int i = 0; i < banyak_angka; i++)
        {
            scanf("%d", &angka[i]);
        }

        // int fac = factorial(banyak_angka)/ (6* factorial(banyak_angka - 3));

        // int ia = 0, ib = 0,ic = 0;

        for (int ia = 0; ia < (banyak_angka - 2); ia++)
        {
            a = angka[ia];

            for (int ib = 0; ib < (banyak_angka - 1); ib++)
            {
                if (ib < 1 || ib < ia + 1)
                    continue;
                b = angka[ib];
                // printf("ia :%d\n",ia);
                for (int ic = 0; ic < banyak_angka; ic++)
                {
                    if (ic < 2 || ic < ib + 1)
                        continue;
                    c = angka[ic];
                    // printf("ib :%d\n",ib);
                    if (a > b && b < c || a < b && b > c)
                    {
                        //printf("%d %d %d\n", a, b, c);
                        //printf("=====\n");
                        hasil[uji] += 1;
                    }
                }
            }
        }
    }
printf("OUTPUT\n");
    for (int i = 0; i < ujikasus; i++)
    {
        printf("%d\n", hasil[i]);

    }
    


        return 0;
}

// int factorial(int input)
// {
//     int hasil = 1;
//     for (int i = 0; i < input; i++)
//     {
//         hasil *= (input - i);
//     }
//     return hasil;
// }