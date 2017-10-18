/*   Devin Fowler
   * E01151306
   * 09/09/2017
   * http://people.emich.edu/dfowle13/courses/Cosc341/HW0907.rar
*/

#include <stdio.h>

int main() {

    int num1, num2, num3;
    int median;
    int array[3];

    printf("Enter the first value: ");
    scanf("%d", &num1);
    array[0] = num1;

    printf("Enter the second value: ");
    scanf("%d", &num2);
    array[1] = num2;

    printf("Enter the third value: ");
    scanf("%d", &num3);
    array[2] = num3;


    if ((num1 - num2) * (num3 - num1) >= 0) {
        median = num1;
    } else if ((num2 - num1) * (num3 - num2) >= 0) {
        median = num2;
    } else {
        median = num3;
    }

    printf("Median: ");
    printf("%d", median);

}
