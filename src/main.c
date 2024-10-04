#include <stdio.h>
int main() {
    int age;
    int Income;
    printf("age: ");
    scanf("%d", &age);
    printf("income : ");
    scanf("%d", &Income);
    if (age >= 21 && Income >= 21000) {
        printf("Congratulations you qualify for a loan.\n");
    } else {
        printf("Unfortunately we are unable to offer you a loan at this time.\n");
    }
    return 0;


}