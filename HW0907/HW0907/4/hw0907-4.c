/*Devin Fowler
* E01151306
* 09/09/2017
* http://people.emich.edu/dfowle13/courses/Cosc341/HW0907.rar
*/

#include <stdio.h>

int main(int argc, char **argv) {

    int i;
    int num1, num2, num3;
    int median;
    int arr[3];


    sscanf(argv[1], "%d", &num1);
    sscanf(argv[2], "%d", &num2);
    sscanf(argv[3], "%d", &num3);

    for (i = 0; i < argc; i++) {
        printf("argv[%d]: %s\n", i, argv[i]);
    }


    if ((num1 - num2) * (num3 - num1) >= 0) {
        median = num1;
    } else if ((num2 - num1) * (num3 - num2) >= 0) {
        median = num2;
    } else {
        median = num3;
    }

    printf("Median value: ");
    printf("%d\n", median);
}