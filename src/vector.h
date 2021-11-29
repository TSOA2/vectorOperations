#ifndef VECTOR_H
#define VECTOR_H

#include <stdio.h>
#include <math.h>

typedef struct {
    float x, y, z;
} Vector3D;

// Find distance (pythagorean) between two points
#define distance(a, b) \
    (float) sqrt(pow((float)a.x-(float)b.x, 2) + pow((float)a.y-(float)b.y, 2) + pow((float)a.z-(float)b.z, 2))

// Add two vectors (a+b)
Vector3D vectorAdd(Vector3D a, Vector3D b);

// Subtract two vectors (a-b)
Vector3D vectorSub(Vector3D a, Vector3D b);

// Multiply two vectors (a*b)
Vector3D vectorMul(Vector3D a, Vector3D b);

// Divide two vectors (a/b)
Vector3D vectorDiv(Vector3D a, Vector3D b);

// One vector to the power of another (a ** b)
Vector3D vectorPow(Vector3D a, Vector3D b);

// Add scalar to vector
Vector3D addScalar(Vector3D a, float b);

// Subtract scalar from vector
Vector3D subScalar(Vector3D a, float b);

// Multiply scalar and vector
Vector3D mulScalar(Vector3D a, float b);

// Divide scalar from vector
Vector3D divScalar(Vector3D a, float b);

// Raise vector to b power
Vector3D powScalar(Vector3D a, float b);

// Dot product of two vectors
float dotProduct(Vector3D a, Vector3D b);

// Print a vector (stdout)
void printVector(Vector3D p);
#endif