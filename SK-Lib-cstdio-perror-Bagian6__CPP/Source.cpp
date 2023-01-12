#pragma warning(disable:4996)

#include <cstdio>
#include <cmath>
#include <cerrno>
#include <conio.h>

/*
    Source by AlphaCodingSkills (https://www.alphacodingskills.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    double hasil = log(0.0);
    printf("%f\n", hasil);

    if (errno == ERANGE) {
        printf("Value of errno: %d", errno);
        perror("log(0.0) failed");
    }

    _getch();
    return 0;
}