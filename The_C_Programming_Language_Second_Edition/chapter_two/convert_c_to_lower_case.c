/* File Name: convert_c_to_lower_case.c
 * Author: One Zero
 * Mail: zeroonegit@gmail.com
 * Created Time: 2016-01-31 16:50:57
 */

#include <stdio.h>

int main(void) {

    return 0;
}

/* lower: convert c to lower case (ASCII only) */
int lower(int c) {
    return c >= 'A' && c <= 'Z' ? c + 'a' - 'A' : c;
}
