/*
this is show the segmatation fault error
*/

#include <stdio.h>

int main() {
    int* ptr = NULL;
    *ptr = 10;  // Dereferencing a null pointer, causing a segmentation fault
    return 0;
}
