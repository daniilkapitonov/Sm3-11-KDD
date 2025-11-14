#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[101];
    int spaces = 0, digits = 0, dots = 0;
    int is_number = 1;
    
    printf("Введите строку: ");
    fgets(str, sizeof(str), stdin);
    
    // Удаляем символ \n
    str[strcspn(str, "\n")] = '\0';
    
    // Анализ строки
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ' ') spaces++;
        if (isdigit(str[i])) digits++;
        if (str[i] == '.') dots++;
        if (!isdigit(str[i])) is_number = 0;
    }
    
    printf("\nРезультаты анализа:\n");
    printf("Длина строки: %zu\n", strlen(str));
    printf("Пробелов: %d\n", spaces);
    printf("Цифр: %d\n", digits);
    printf("Точек: %d\n", dots);
    printf("Строка %s числом\n", is_number ? "является" : "не является");
    
    return 0;
}