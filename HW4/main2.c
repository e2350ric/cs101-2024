#include <stdio.h>

void printMultiplicationTable(int row, int column) {
    if (row > 9) {
        return;
    }
    if (column > 9) {
        printf("\n");
        printMultiplicationTable(row + 1, 1);
        return;
    }
    printf("%d*%d = %d ", row, column, row * column);
    printMultiplicationTable(row, column + 1);
}

int main() {
    printMultiplicationTable(1, 1);
    return 0;
}
