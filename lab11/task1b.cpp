#include <cctype>
#include <cstdio>

int main() {
    char name[50], surname[50], lastName[50];
    scanf("%s", name);
    scanf("%s", lastName);
    scanf("%s", surname);

    printf("%s %s %s\n", surname, name, lastName);
    printf("%c.%c.%c\n", toupper(surname[0]), toupper(name[0]), toupper(lastName[0]));
    printf("%s %c.%c\n", surname, toupper(name[0]), toupper(lastName[0]));
    return 0;
}
