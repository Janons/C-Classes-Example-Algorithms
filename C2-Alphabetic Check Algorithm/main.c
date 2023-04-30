#include <stdio.h>
#include<string.h>
#include<ctype.h>


int main() {

    FILE *fin;
    const int max_str = 50;
    char file_name[] = "..//input.txt";
    char str1[max_str + 1], str2[max_str + 1];

    fin = fopen(file_name, "r");
    if (fin == NULL) {
        perror("Error in opening the file");
        return (1);
    }

    fgets(str1, max_str, fin);
    while (fgets(str2, max_str, fin) != NULL) {
        if (strcmp(str1, str2) < 0) {
            strcpy(str1, str2);
        }
        if (strcmp(str1, str2) > 0) {
            printf("Problem Occured");
            return 0; // eary exit
        }

    }

    printf("No problem Occured");
    return 0;
}