# Calculate Point Distances

## Summary

Develop a simple console application that calculates the minimum and maximum distance of a set of vectors(3D points). After the process it prints the calculated distances and the related vectors to standard output.

## Application flow
 * Ask the user how many vectors he/she wants to use for the calculation.
 * Alloc memory dynamically for the vectors.
 * Generate vectors, populate the allocated memory.
 * Calculate distances between vectors. Find and store minimum and maximum distance and related vectors.
 * Print the results to standard output.
 * Free allocated memory.

## Requirements
Object oriented programming. Implement the code using C++ programming language.

### Vector class
Define this class in a separated header file.
 * **Class name**: Vector
 * **Properites**:
  * `float x;`
  * `float y;`
  * `float z;`
 * **Methods**:
  * `Constructor`: Initializes a Vector object.
  * `calcualteDistanceFromOrigin`: Calcualtes distance between this Vector object and origin.
  * `calcualteDistanceFrom`: Calcualtes distance between this Vector object and another Vector object given as parameter.

### Documentation
Add inline documentation to the code. Struct, methods. Use Java syntax for documentation.
