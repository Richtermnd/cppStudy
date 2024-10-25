#include <cctype>
#include <cstdio>
#include <string>
#include <iostream>

int main() {
    std::string s;
    std::cin >> s;
    int cnt_S = 0, cnt_s = 0, cnt_digits = 0, cnt_upper = 0;
    const char *ptr = s.c_str();
    char *transoformed = new char[s.size()]{};
    char *transoformed_ptr = transoformed;
    do {
        cnt_S += *ptr == 'S';
        cnt_s += *ptr == 's';
        cnt_digits += isalnum(*ptr) != 0;
        cnt_upper += isupper(*ptr) != 0;
        if (islower(*ptr))
            *transoformed_ptr++ = toupper(*ptr);
        else if (isalnum(*ptr))
            *transoformed_ptr++ = '5';
        else
            *transoformed_ptr++ = *ptr;
    } while(*ptr++);
    
    *transoformed_ptr = '\0';
    printf("Исходная строка: %s\n"
            "Количество S: %d\n" 
            "Количество s: %d\n"
            "Количество S и s: %d\n"
            "Количество цифр: %d\n"
            "Количество заглавных букв: %d\n"
            "Новая строка: %s\n", 
            s.c_str(), cnt_S, cnt_s, cnt_s + cnt_S, cnt_digits, cnt_upper, transoformed);
    return 0;
}
