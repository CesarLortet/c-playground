#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    /// ORDER

    /*  Write a program which will take two arrays
     *  as input and will display two arrays with
     *  union and intersection of them.
     */

    /// VARIABLES

    int *retUnion = NULL;
    int *retIntersec = NULL;
    int lenghtA = 5;
    int lenghtB = 5;

    /// INPUTS

    int arrA[5] = {1,3,4,5,6};
    int arrB[5] = {2,3,6,4,8};

    /// CODE HERE   ///



    /// OUTPUT

    printf("\nUnion : ");
    for (size_t i = 0; i < sizeof(retUnion) / sizeof(int) ; i ++) {
        printf("%d ", retUnion[i]);
    }
    printf("\nIntersection : ");
    for (size_t i = 0; i < sizeof(retIntersec) / sizeof(int) ; i ++) {
        printf("%d ", retIntersec[i]);
    }

    /// ENDING
    return 0;
}
