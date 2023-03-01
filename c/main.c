#include <stdio.h>

/*
8.23 Generic selections

Rule 23.6
The controlling expression of a generic selection shall have an essential type
that matches its standard type
*/

#define TYPE_NAME(X)                                                           \
    _Generic((X), char                                                         \
             : "Character", int                                                \
             : "Integer", double                                               \
             : "Double", default                                               \
             : "Unknown")

int main(int argc, char *argv[]) {
    printf("Type Name: %s\n",
           TYPE_NAME('4')); // Checks the type of the given input
    return 0;
}
