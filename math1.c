#include "math1.h"
#include <stdio.h>

// Function to multiply two 32-bit integers
int32_t imul(int32_t a, int32_t b) {
    return a * b;
}

// Function to divide two 32-bit integers
int32_t idiv(int32_t a, int32_t b) {
    if (b == 0) {
        fprintf(stderr, "Error: Division by zero\n");
        return 0; // Return 0 as a fallback
    }
    return a / b;
}
