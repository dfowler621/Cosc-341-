/*   Devin Fowler
 * E01151306
 * 09/09/2017
 * http://people.emich.edu/dfowle13/courses/Cosc341/HW0907.rar
 */



#include <stdio.h>

#define SIZE 15

int main(int argc, char **argv) {

    int i;
    int arr[SIZE];
    int size = 0;
    int sum = 0;
    int count = 0;


    size = argc - 1;
    for (i = 1; i < argc; i++) {
        sscanf(argv[i], "%d", &arr[i - 1]);
    }


    printf("Input is: ");
    for (i = 0; i < size; i++) printf(" %d ", arr[i]);
    printf("\n\n");


    for (int x = 0; x < size; x++) {
        if (arr[x] % 2 == 0) {
            ++count;
        }
    }

    printf("Number of even numbers: %d\n", count);
}