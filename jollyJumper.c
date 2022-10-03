#include "jollyjumper.h"
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

int isJollyJumper(const int seq[], int size) {

bool diffs_found[size]; 
diffs_found[0] = true; 
for (int k = 1; k < size; k++) {
    diffs_found[k] = false;
}

for (int i = 0; i < size; i++) {
    int x = 0;
    x = seq[i] - seq[i+1];
    if (abs(x) <= size)
        diffs_found[abs(x)] = true;
}    

for (int j = 0; j < size; j++) {
    if (diffs_found[j] == false)
        return 0;
}

    return 1;

}
