#include <stdio.h>

int main() {
    FILE *in = fopen("main2.c", "r");
    

    FILE *out = fopen("main2.txt", "w");


    int c;
    while ((c = fgetc(in)) != EOF) {
        fputc(c, out);
    }

    fclose(in);
    fclose(out); 

    
    return 0;
}