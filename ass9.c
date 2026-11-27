#include <stdio.h>

int main()
{
    FILE *src, *dest;
    char ch;

    src = fopen("source.txt", "r");
    dest = fopen("destination.txt", "w");

    if(src == NULL || dest == NULL)
    {
        printf("File opening error");
        return 1;
    }

    while((ch = fgetc(src)) != EOF)
    {
        fputc(ch, dest);
    }

    printf("File copied successfully");

    fclose(src);
    fclose(dest);

    return 0;
}
