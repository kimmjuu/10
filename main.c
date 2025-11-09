#include <stdio.h>

int main(void) {
    FILE *fp = NULL;
    char c;
    char str[100];

    fp = fopen("sample.txt", "r");
    if (fp == NULL) {
        printf("File open error!\n");
        return 1;
    }

    printf("---- Read character by character ----\n");
    while ((c = fgetc(fp)) != EOF) {
        putchar(c);
    }

    rewind(fp);

    printf("\n---- Read line by line ----\n");
    while (fgets(str, sizeof(str), fp) != NULL) {
        printf("%s", str);
    }

    fclose(fp);
    return 0;
}
