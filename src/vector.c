#include "vector.h"

// Add two vectors (a+b)
Vector3D vectorAdd(Vector3D a, Vector3D b) {
    Vector3D ret;
    ret.x = a.x + b.x;
    ret.y = a.y + b.y;
    ret.z = a.z + b.z;
    return ret;
}

// Subtract two vectors (a-b)
Vector3D vectorSub(Vector3D a, Vector3D b) {
    Vector3D ret;
    ret.x = a.x - b.x;
    ret.y = a.y - b.y;
    ret.z = a.z - b.z;
    return ret;
}

// Multiply two vectors (a*b)
Vector3D vectorMul(Vector3D a, Vector3D b) {
    Vector3D ret;
    ret.x = a.x * b.x;
    ret.y = a.y * b.y;
    ret.z = a.z * b.z;
    return ret;
}

// Divide two vectors (a/b)
Vector3D vectorDiv(Vector3D a, Vector3D b) {
    Vector3D ret;
    ret.x = a.x / b.x;
    ret.y = a.y / b.y;
    ret.z = a.z / b.z;
    return ret;
}

// One vector to the power of another (a ** b)
Vector3D vectorPow(Vector3D a, Vector3D b) {
    Vector3D ret;
    ret.x = (float) pow((float) a.x, (float) b.x);
    ret.y = (float) pow((float) a.y, (float) b.y);
    ret.z = (float) pow((float) a.z, (float) b.z);
    return ret;
}

// Dot product of two vectors
float dotProduct(Vector3D a, Vector3D b) {
    float ret;
    ret += a.x * b.x;
    ret += a.y * b.y;
    ret += a.z * b.z;
    return ret;
}

// Print a vector (stdout)
void printVector(Vector3D p) {
    printf("x: %f\ty: %f\tz: %f\n", p.x, p.y, p.z);
}