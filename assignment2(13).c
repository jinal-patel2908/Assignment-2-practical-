#include <stdio.h>

int main() {
FILE *fp;  
char data[100];

fp = fopen("student.txt", "w"); 
    if (fp == NULL) {
    printf("Error opening file for writing.\n");
        return 1;
    }

    printf("Enter data to write to the file: ");
    fgets(data, sizeof(data), stdin);  
fprintf(fp, "%s", data);  
printf("Data written to file successfully.\n");

fp = fopen("student.txt", "r");  // Open file for reading
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("\nReading from the file:\n");
    while (fgets(data, sizeof(data),
fp) !=NULL) {
 printf("%s", data);  
    }

fclose(fp);  
printf("\nFile closed successfully.\n");

    return 0;
}

