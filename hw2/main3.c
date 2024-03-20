#include <stdio.h>
#include <string.h>

int main() {
    FILE *file = fopen("main3.c", "r");

    FILE *outputFile = fopen("main3.txt", "w"); 


    char line[100]; 

    int lineNumber = 1;
    while (fgets(line, sizeof(line), file)) {
        
        if (strstr(line, "int main()")) {
            fprintf(outputFile, "%d\n", lineNumber);
            break;
        }
        lineNumber++;
    }

    fclose(file);
    fclose(outputFile); 

    
    return 0;
}