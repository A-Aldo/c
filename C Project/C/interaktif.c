#include <stdio.h>
// #include <string.h>

// Versi scantf => hanya bisa menampung 1 kata, kata berikutnya akan terhapus


// int main() {
//     char nama [25];
//     char anime [25];

//     printf("\n Who are you ?");
//     scanf("%s", &nama);
    
//     printf("\n What is your favorite anime  ?");
//     scanf("%s", &anime);

//     printf("your name is %s \n ", nama);
//     printf("your favorite anime is  %s ", anime);

//     return 0;
// }


// Versi fgets => Bisa menampung lebih dari 1 kata.
int main() {
    char nama [25];
    char anime [24];

    printf("\n What's your name ?");
    fgets(nama, 25, stdin);
    // nama[strlen(nama)-1] = '\0';
    
    printf("\n What's is your favorite anime  ?");
    fgets(anime, 24, stdin);

    printf("\nyour name is %s \n ", nama);
    printf("\nyour favorite anime is  %s ", anime);

    return 0;
}



//link penting https://www.freecodecamp.org/news/format-specifiers-in-c/ 