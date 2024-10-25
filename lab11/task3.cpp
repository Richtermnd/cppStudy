#include <cctype>
#include <cstdio>
#include <cstring>
#include <string>

void replace(std::string& s, std::string entry, std::string newValue) {
    int i;
        i = s.find(entry);
    while (i != -1) {
        s.replace(i, entry.size(), newValue);
        i = s.find(entry);
    }
}

void taskA(std::string s) {
    replace(s, "min", "MAX");
    printf("a) %s\n", s.c_str());
}


void taskB(std::string s) {
    int start = 0;
    int finish = s.find(" ");
    std::string substr;
    while (finish - start != -1) {
        substr = s.substr(start+1, finish-start);

        if (substr.size() == 5)
            s.replace(start+1, 5, "ku-ku");
        start = finish + 1;
        finish = start + s.substr(finish+2).find(" ");
    }
    substr = s.substr(start+1);
    if (substr.size() == 5)
        s.replace(start+1, 5, "ku-ku");
    printf("%s\n", s.c_str());
}

void taskC(std::string s) {
    int i = s.find("ku-ku");
    if (i == -1) {
        printf("%s\n", s.insert(s.size() / 2, "ku-ku ku-ku ku-ku").c_str());
        return;
    }
    replace(s, "ku-ku", "ku-ka-re-ku");
    printf("%s\n", s.c_str());
}

void taskD(std::string s) {
    replace(s, "ku-ku", "");
    printf("%s\n", s.c_str());
}

void taskE(std::string s) {
    int i = s.rfind("ku-ku");
    printf("%s\n", s.substr(0, i+5).c_str());
}

void taskF(std::string s) {
    int cnt = 0;
    const char *ptr = s.c_str();
    char previous_char = ' '; // not letter or digit
    do {
        cnt += (isalnum(*ptr) || isdigit(*ptr)) && !(isalnum(previous_char) || isdigit(previous_char));
        previous_char = *ptr;
    } while(*ptr++);
    printf("%d\n", cnt);
}

void taskG(std::string s) {
    const char *ptr = s.c_str();
    int cnt = 0;
    do {
        switch (*ptr) {           
            case '(':
                cnt++;
                break;
            case ')':
                cnt--;
        }
        if (cnt < 0) {
            printf("No\n");
            return;
        }
    } while(*ptr++);
    if (cnt != 0)
        printf("No");
    else
        printf("Yes\n");
}

// Здесь не учитываются строки с несбалансированными скобками, но это можно прикрутить.
void taskH(std::string s) {
    int stack[50] = {};
    int *stack_ptr = stack;
    int i = 0;
    int pos = 0;
    while (true) {
        switch (s.at(i)) {
            case '(':
                *stack_ptr++ = i;
                break;
            case ')':
                pos = *--stack_ptr;
                s = s.substr(0, pos) + s.substr(i+1);
                i = pos - 1;
                break;
        }
        i++;
        if (i == s.length())
            break;
    }
    printf("%s\n", s.c_str());
}

int main() {
    /* taskA("minasdasminasdamin"); */
    /* taskB("a ab abc abcd abcde abcde abcd abc ab a"); */
    /* taskC("asdfasdfkajldhsa"); */
    /* taskC("1111ku-ku11ku-ku111"); */
    /* taskE("1111ku-ku11ku-ku111"); */
    /* taskF("a, ab;    abc... :abcd/ abcde"); */
    /* taskG("(a+b))"); */
    /* taskG(")abc("); */
    /* taskG("(a+b/(c*d))"); */
    taskH("1(aaa(bbb))2(cc)3(d())4");
    return 0;
}
