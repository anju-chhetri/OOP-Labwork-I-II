#include <stdio.h>
struct complex{
    int real, img;
};
int main(){
    struct complex comp1, comp2, result;
    printf("Enter the first real and imaginary number : ");
    scanf("%d %d", &comp1.real, &comp1.img);
    printf("Enter the second real and imaginary number : ");
    scanf("%d %d", &comp2.real, &comp2.img);
    result.real = comp1.real + comp2.real;
    result.img = comp1.img + comp2.img;
    printf("Result is : %d + i %d", result.real, result.img);
    return 0;

}


