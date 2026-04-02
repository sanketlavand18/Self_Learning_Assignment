// 1. Using pointers, write your own functions for the following:
// i. String comparison
// ii. String concatenate
// iii. String copy
// iv. String length
// Note: Do not include in your program and implement Delete operator in your program.

#include <iostream>
using namespace std;

// i. String Length
int strLength(char *str) {
    int len = 0;
    while (*(str + len) != '\0')
        len++;
    return len;
}

// ii. String Copy
void strCopy(char *dest, char *src) {
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

// iii. String Concatenate
void strConcat(char *dest, char *src) {
    while (*dest != '\0')
        dest++;
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

// iv. String Compare
int strCompare(char *s1, char *s2) {
    while (*s1 && *s2) {
        if (*s1 != *s2)
            return (*s1 - *s2);
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}

int main() {
    char str1[10] = "Hello";
    char str2[10] = "World";
    char result[20];

    cout << "Length: " << strLength(str1) << endl;

    strCopy(result, str1);
    cout << "Copy: " << result << endl;

    strConcat(str1, str2);
    cout << "Concat: " << str1 << endl;

    cout << "Compare: " << strCompare(str1, str2) << endl;

    return 0;
}