#include "vector.h"
#include <stdio.h>

int main(void) {
    Vector3D a;
    a.x = 5;
    a.y = 5;
    a.z = 5;

    Vector3D b;
    b.x = 5;
    b.y = 5;
    b.z = 5;

    printf("add\n");
    printVector(vectorAdd(a, b));
    printf("sub\n");
    printVector(vectorSub(a, b));
    printf("mul\n");
    printVector(vectorMul(a, b));
    printf("div\n");
    printVector(vectorDiv(a, b));

    printf("pow\n");
    printVector(vectorPow(a, b));
    printf("dist\n");
    printf("%f\n", distance(a, b));
    printf("dot\n");
    printf("%f\n", dotProduct(a, b));
    printf("done\n");
    return 0;
}