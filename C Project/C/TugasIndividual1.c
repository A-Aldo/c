//Di suru revisi kode

//Ini kode aseli

#include <stdio.h>
int main() {
    int a, b;
    float result;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b); 
     
    result = (float) a / b ; 
    printf("The result is %f \n", result);

    return 0;
}




// int main() {
//     int a, b;
//     float result;

//     printf("Enter two integers: ");
//     scanf("%d %d", &a, &b); // Kesalahan di sini

//     result = a / b; // Potensi kesalahan lain
//     printf("The division of %d and %d is %f\n", a, b, result);

//     return 0;
// }
