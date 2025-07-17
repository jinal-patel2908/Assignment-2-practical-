#include <stdio.h>
#include <string.h>

int main() 
{
    char string1[100], string2[100]; 
    printf("Enter string 1 and string 2: ");
    scanf("%s %s", string1, string2); 
strcat(string1, string2);  
printf("Concatenated string: %s\n",string1);
printf("Length: %lu\n", strlen(string1));      return 0;
}


