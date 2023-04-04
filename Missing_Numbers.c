#include <stdio.h>

#include <string.h>

#include <math.h>

#include <stdlib.h>



#define read_int(x) scanf("%d", &x)

#define RANGE 100

#define BASE_IDX (RANGE + 1)

#define COUNT_SIZE (RANGE * 2)



int main() {



    int m, n;

    int base, k, i;

    int count[COUNT_SIZE];



    memset(count, 0, COUNT_SIZE * sizeof(int));



    read_int(m);

    read_int(k);

    base = k;

    count[BASE_IDX] = 1;

    for (i = 1; i < m; i++) {

        read_int(k);

        count[BASE_IDX + (k - base)]++;

    }



    read_int(n);

    for (i = 0; i < n; i++) {

        read_int(k);

        count[BASE_IDX + (k - base)]--;

    }



    for (i = 0; i < COUNT_SIZE; i++) {

        if (count[i] < 0) printf("%d ", base + (i - BASE_IDX));

    }

    printf("\n");



    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    return 0;

}

