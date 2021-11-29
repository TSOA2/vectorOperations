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

    // add v if vector test, s if scalar test
    printf("addv\n");
    printVector(vectorAdd(a, b));
    printf("subv\n");
    printVector(vectorSub(a, b));
    printf("mulv\n");
    printVector(vectorMul(a, b));
    printf("divv\n");
    printVector(vectorDiv(a, b));
    printf("powv\n");
    printVector(vectorPow(a, b));
    printf("distv\n");
    printf("%fv\n", distance(a, b));
    printf("dotv\n");
    printf("%fv\n", dotProduct(a, b));

    printf("\nadds\n");
    printVector(addScalar(a, 5));
    printf("subs\n");
    printVector(subScalar(a, 5));
    printf("muls\n");
    printVector(mulScalar(a, 5));
    printf("divs\n");
    printVector(divScalar(a, 5));
    printf("pows\n");
    printVector(powScalar(a, 5));

    printf("\ndone\n");
    return 0;
}