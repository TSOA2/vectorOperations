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

// Add scalar to vector
Vector3D addScalar(Vector3D a, float b) {
    Vector3D ret;
    ret.x = a.x + b;
    ret.y = a.y + b;
    ret.z = a.z + b;
    return ret;
}

// Subtract scalar from vector
Vector3D subScalar(Vector3D a, float b) {
    Vector3D ret;
    ret.x = a.x - b;
    ret.y = a.y - b;
    ret.z = a.z - b;
    return ret;
}

// Multiply scalar and vector
Vector3D mulScalar(Vector3D a, float b) {
    Vector3D ret;
    ret.x = a.x * b;
    ret.y = a.y * b;
    ret.z = a.z * b;
    return ret;
}

// Divide scalar from vector
Vector3D divScalar(Vector3D a, float b) {
    Vector3D ret;
    ret.x = a.x / b;
    ret.y = a.y / b;
    ret.z = a.z / b;
    return ret;
}

// Raise vector to b power
Vector3D powScalar(Vector3D a, float b) {
    Vector3D ret;
    ret.x = (float) pow((float)a.x, b);
    ret.y = (float) pow((float)a.y, b);
    ret.z = (float) pow((float)a.z, b);
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