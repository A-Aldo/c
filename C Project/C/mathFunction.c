// #include <stdio.h>
// #include <math.h>

// int main(){
//     double A;
//     double B;
//     int C;
//     int D;
//     int E;
//     double F;
//     double G;
//     double H;
//     double I;
//     double J;



//     return 0; 
// }
 


 #include <stdio.h>

// int main() {
//   char name [26];
//   int age;

//   printf("\n What's your name?");
//   scanf("%s", &name);

//   printf("\n How old are u?");
//   scanf("%i", &age);

//   printf("Hi my name is %s \n", name);
//   printf("I'm %i years old \n", age);

//   return 0;
// }

int main() {
  float gaji, final;
  float pajak = 10.0 / 100.0;
  
  printf("\n masukan gaji kotor");
  scanf("%f", &gaji);
  final = gaji - (gaji * pajak) ;

  printf("\n Gaji bersih anda bulan ini adalah %.2f\n", final);

}