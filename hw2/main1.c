#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate_lotto_numbers(int num_sets, FILE *outputFile) {
    srand(time(NULL));
    time_t curtime;
    time(&curtime);
    fprintf(outputFile,"%s", ctime(&curtime));
    for (int i = 0; i < num_sets; i++) {
        fprintf(outputFile, "[%d]", i + 1);
        int numbers[69] = {0};
        
        for (int j = 0; j < 6; j++) {
            int number;
            do {
                number = rand() % 69 + 1;
            } while (numbers[number - 1]);
            numbers[number - 1] = 1;
            fprintf(outputFile, "%02d ", number);
        }
        fprintf(outputFile, "\n\n");
    }
}

int main() {
    int num_sets=5;
    printf("歡迎光臨長庚樂透購買機台\n");
    printf("請問你要購買幾組樂透彩：");
    scanf("%d", &num_sets);

    FILE *outputFile = fopen("lotto.txt", "w");
    if (outputFile == NULL) {
        printf("無法打開檔案。\n");
        return 1;
    }

    generate_lotto_numbers(num_sets, outputFile);

    fclose(outputFile);

    printf("以為您購買的%d組樂透組合輸出至lotto.txt 中。\n",num_sets);

    return 0;
}