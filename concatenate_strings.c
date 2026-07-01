#include <stdio.h>

// Function Prototypes
void input(char *str);
void concatenate_strings(char *str1, char *str2);
void display(char *str);

int main() {
    char str1[100],str2[100];
    printf("Enter the first string:\n"); 
    input(str1);
    printf("Enter the second string:\n");
    input(str2);
    concatenate_strings(str1,str2);
    display(str1);
    
    
    return 0;
}

void input(char *str) {
    scanf("%s",str);
 
}

void concatenate_strings(char *str1, char *str2) {
    int i=0,j=0;
    while(str1[i]!='\0'&&str1[i]!='\n'){
        i++;
    }
    while(str2[j]!='\0'&&str2[j]!='\n'){
        str1[i]=str2[j];
        i++;
        j++;
    }
    str1[i]!='\0';
}

void display(char *str) {
    printf("Concatenated Result:%s\n",str);
    // Write code to display the string
}