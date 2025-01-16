#include <stdio.h>
void main() {
    int lw, bw, lf, bf, ls, bs;
    // Corrected the variable names in scanf
    scanf("%d %d %d %d %d %d", &lw, &bw, &lf, &bf, &ls, &bs);
    
    // Check if both paintings fit within the wall area
    if ((lw * bw) >= (lf * bf) + (ls * bs)) {
        printf("Raj can fix both paintings\n");  // Added missing semicolon and corrected the message
    } else {
        printf("Raj cannot fix both paintings\n");  // Added missing semicolon and corrected the message
    }
}