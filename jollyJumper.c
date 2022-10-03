#include "jollyjumper.h"
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

int isJollyJumper(const int seq[], int size) {
    bool diffs_found[size];
    for (int i = 0; i < size-1; i++) {
        // printf("\n%d", seq[i]);
        int d = seq[i]-seq[i+1];
        printf("\n%d", d);
        if (diffs_found[d] == true) {
            return false;
        }
        diffs_found[d] = true;
    }
    return true;
}