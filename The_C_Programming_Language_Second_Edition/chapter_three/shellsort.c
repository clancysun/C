/* File Name: shellsort.c
 * Author: One Zero
 * Mail: zeroonegit@gmail.com
 * Created Time: 2016-01-31 18:19:24
 */

#include <stdio.h>

int main(void) {

    return 0;
}

/* shellsort: sort v[0]...v[n-1] into increasing order */
void shellsort (int v[], int n) {
    int gap, i, j, temp;

    for (gap = n/2; gap > 0; gap /= 2)
        for (i = gap; i < n; i++)
            for (j=i-gap; j>=0 && v[j]>v[j+gap]; j-=gap) {
                temp = v[j];
                v[j] = v[j+gap];
                v[j+gap] = temp;
            }
}
