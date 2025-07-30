#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void compressFile(const char *inputFile, const char *outputFile) {
    FILE *in = fopen(inputFile, "r");
    FILE *out = fopen(outputFile, "w");

    if (in == NULL || out == NULL) {
        printf("File error!\n");
        return;
    }

    char ch, prev = '\0';
    int count = 1;

    while ((ch = fgetc(in)) != EOF) {
        if (ch == prev) {
            count++;
        } else {
            if (prev != '\0') {
                fprintf(out, "%c%d", prev, count);
            }
            prev = ch;
            count = 1;
        }
    }

    // Write the last character sequence
    if (prev != '\0') {
        fprintf(out, "%c%d", prev, count);
    }

    fclose(in);
    fclose(out);
    printf("File compressed successfully to '%s'\n", outputFile);
}

void decompressFile(const char *inputFile, const char *outputFile) {
    FILE *in = fopen(inputFile, "r");
    FILE *out = fopen(outputFile, "w");

    if (in == NULL || out == NULL) {
        printf("File error!\n");
        return;
    }

    char ch;
    while ((ch = fgetc(in)) != EOF) {
        if (isalpha(ch) || isspace(ch)) {
            char countStr[10];
            int i = 0;
            char num;

            while ((num = fgetc(in)) != EOF && isdigit(num)) {
                countStr[i++] = num;
            }
            countStr[i] = '\0';
            int count = atoi(countStr);

            for (int j = 0; j < count; j++) {
                fputc(ch, out);
            }

            if (num != EOF) {
                ungetc(num, in); // Push back if next char is not digit
            }
        }
    }

    fclose(in);
    fclose(out);
    printf("File decompressed successfully to '%s'\n", outputFile);
}

int main() {
    int choice;
    char inputFile[100], outputFile[100];

    do {
        printf("\nDATA COMPRESSION TOOL (RLE)\n");
        printf("1. Compress File\n");
        printf("2. Decompress File\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // flush newline

        switch (choice) {
            case 1:
                printf("Enter input file name to compress: ");
                scanf("%s", inputFile);
                printf("Enter output file name: ");
                scanf("%s", outputFile);
                compressFile(inputFile, outputFile);
                break;

            case 2:
                printf("Enter compressed input file: ");
                scanf("%s", inputFile);
                printf("Enter output file name: ");
                scanf("%s", outputFile);
                decompressFile(inputFile, outputFile);
                break;

            case 3:
                printf("Exiting tool.\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 3);

    return 0;
}