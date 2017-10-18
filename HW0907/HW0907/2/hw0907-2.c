/*   Devin Fowler
   * E01151306
   * 09/09/2017
   * http://people.emich.edu/dfowle13/courses/Cosc341/HW0907.rar
*/

#include <stdio.h>

int main() {

    int i;
    int x;
    int array[] = {1, 3, 2, 4, 5, 6, 2, 15, 7, 22, 19, 100};
    int size = 12;
    int sum = 0;


    printf("Input: ");
    for (x = 0; x < size; x++){
        printf("%d", array[x]);
        printf(" ");
    }
    printf("\n");

    printf("Array values at even index: ");
    for (i = 0; i < size; i++) {
        if (i % 2 == 0) {
            printf(" ");
            printf("%d", array[i]);
            sum = (sum + array[i]);


        }

    }
    printf("\n");
    printf("Answer: ");
    printf("%d", sum);

}