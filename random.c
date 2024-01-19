#include <stdlib.h>
#include <time.h>

char randchar() {
    return 'A' + (rand() % 26); // Generate a random character between 'A' and 'Z'
}