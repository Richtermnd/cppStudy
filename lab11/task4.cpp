#include <string>
#include <cstdio>

int fromRomanDigit(char c) {
    switch (c) {
        case 'I':
        case 'i':
            return 1;
        case 'V':
        case 'v':
            return 5;
        case 'X':
        case 'x':
            return 10;
        case 'L':
        case 'l':
            return 50;
        case 'C':
        case 'c':
            return 100;
        case 'D':
        case 'd':
            return 500;
        case 'M':
        case 'm':
            return 1000;
    }
    return 0;
}

void toArabic(std::string roman) {
    int stack[50] = {};
    int *stack_ptr = stack;
    int d;
    int res = 0;
    const char *ptr = roman.c_str();
    do {
        d = fromRomanDigit(*ptr);
        if (d > *stack_ptr)
            *stack_ptr = d - *stack_ptr;
        else
            *++stack_ptr = d;
    } while(*ptr++);
    for (int i = 0; i < 50 && stack[i] != 0; ++i)
        res += stack[i];
    printf("%d\n", res);
}

int main() {
    std::string s = "XIXVII"; // 26
    toArabic(s);
    return 0;
}
