#include <stdio.h>
#include <stdlib.h>

int main() {
    int tab[5] = {7, 54, 23, 9089, 2};

    for (int i = 0; i < 5; i++) {
        int vmin = tab[i];
        int pos = i;
        for (int j = i + 1; j < 5; j++) {
            if (tab[j] < vmin) {
                vmin = tab[j];
                pos = j;
            }
        }
        int temp = tab[i];
        tab[i] = tab[pos];
        tab[pos] = temp;
    }

    for (int k = 0; k < 5; k++) {
        printf("%d\n", tab[k]);
    }

    return 0;
}
