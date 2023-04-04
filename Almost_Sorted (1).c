#include <stdio.h>

#include <string.h>

#include <math.h>

#include <stdlib.h>



int main() {

    int *a, ar;

    int pos1 = -1, pos2 = -1, reverse = 0, swap = 0;

    int reverse_possible = 1;



    // get size of array and add elements to array

    scanf("%d", &ar);

    a = (int*)malloc(sizeof(int) * ar);

    for (int i = 0; i < ar; i++) {

        scanf("%d", a + i);

    }



    // work goes here

    for (int i = 0; i < ar; i++) {

        // we note that all numbers in the array are distinct

        if (i < ar - 1) {

            if (a[i] > a[i + 1]) {

                if (swap || reverse) {

                    swap = reverse = 0;

                    break;

                }



                if (pos1 == -1) {

                    pos1 = i;

                    pos2 = i;

                } else if (reverse_possible && !reverse) {

                    pos2++;

                }

            } else if (pos2 != -1 && !swap && !reverse) {

                // potentially a reverse operation

                if (pos2 - pos1 >= 2) {

                    reverse = 1;

                    continue;

                // continue finding reverse

                } else {

                    pos2 = -1;

                    reverse_possible = 0;

                }

            }

        }



        // note that a[pos1] >= a[i]

        if (pos1 != -1 && a[pos1] > a[i] &&

            ((i+1<ar && a[pos1] <= a[i+1]) || i+1>=ar) &&

            ((i-1>=0 && a[i-1] <= a[pos1]) || i-1<0) &&

            ((pos1+1<ar && a[i] <= a[pos1+1]) || pos1+1>=ar) &&

            ((pos1-1>=0 && a[pos1-1] <= a[i]) || pos1-1<0)) {

            if (swap || reverse) {

                swap = 0;

                reverse = 0;

                break;

            }



            pos2 = i;

            swap = 1;

        }

    }



    //printf("%d %d\n", swap, reverse);



    if (reverse) {

        printf("yes\n");

        printf("reverse %d %d", pos1 + 1, pos2 + 2);

    } else if (swap) {

        printf("yes\n");

        printf("swap %d %d", pos1 + 1, pos2 + 1);

    } else {

        printf("no\n");

    }



    return 0;

}

