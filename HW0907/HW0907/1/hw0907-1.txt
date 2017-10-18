/*   Devin Fowler
   * E01151306
   * 09/09/2017
   * http://people.emich.edu/dfowle13/courses/Cosc341/HW0907.rar
*/

#include <stdio.h>

int main() {

    int i;
    int x;
    int array[] = {1, 2, 3, 4, 5, 6, 2, 10, 1, 15, 100, 172, 101};
    int size = 13;

    printf("Input: ");
    for (x = 0; x < size; x++){
        printf("%d", array[x]);
        printf(" ");
    }
    printf("\n");
    printf("Output: ");
    for (i = 0; i < size; i++) {
        if (array[i] % 2 == 0) {

            printf("%d", array[i]);
            printf(" ");
        }
    }


}