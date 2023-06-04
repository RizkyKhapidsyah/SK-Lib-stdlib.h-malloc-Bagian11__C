#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>
#include <conio.h>

/*
    Source by Microsoft (https://docs.microsoft.com/en-us/cpp)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    char* string;

    // Alokasikan ruang untuk nama jalur
    string = malloc(_MAX_PATH);

    // Dalam file C++, secara eksplisit berikan pengembalian malloc. Misalnya,
    // string = (char *)malloc( _MAX_PATH );

    if (string == NULL) {
        printf("Insufficient memory available\n");
    } else {
        printf("Memory space allocated for path name\n");
        free(string);
        printf("Memory freed\n");
    }

    _getch();
    return 0;
}