#include<stdio.h>
int main() {
    char str1[30],str2[30];
    int i,j;
    printf("Enter String 1 : ");
    gets(str1);
    printf("Enter String 2 : ");
    gets(str2);
    for(i = 0; str1[i]!='\0'; i++){

    };
    // Len = i;
    for(j = i; str2[j-i]!= '\0'; j++){
        str1[j] = str2[j-i];
    }
    str1[j] = '\0';
    printf("Concatenated String is = %s\n",str1);
    return 0;
}
