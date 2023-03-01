#include <stdnoreturn.h>
#include <stdalign.h>

int addnum(int a, int b) {
    int result = a + b;
    if (result == 0) {
        result = -1;
    }
    return result;
}

_Noreturn void f(int a, int b) {
    while (1) {
        if (addnum(a, b) == 0) {
            break;
        }
    }
}
