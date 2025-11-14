#include <stdio.h>
#include <string.h>

int main() {
    char username[50];
    int has_errors = 0;
    
    printf("Введите имя пользователя: ");
    scanf("%49s", username);
    
    // Проверка длины с помощью strlen
    size_t len = strlen(username);
    if (len < 4 || len > 15) {
        printf("Ошибка: длина должна быть от 4 до 15 символов\n");
        has_errors = 1;
    }
    
    // Проверка первого символа с помощью strchr
    char digits[] = "0123456789";
    if (strchr(digits, username[0]) != NULL) {
        printf("Ошибка: имя не может начинаться с цифры\n");
        has_errors = 1;
    }
    
    // Проверка допустимых символов с помощью strchr
    char valid_chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_";
    for (int i = 0; i < len; i++) {
        if (strchr(valid_chars, username[i]) == NULL) {
            printf("Ошибка: недопустимые символы\n");
            has_errors = 1;
            break;
        }
    }
    
    // Если ошибок нет - выводим в нижнем регистре
    if (!has_errors) {
        printf("Корректное имя: ");
        for (int i = 0; i < len; i++) {
            // Преобразование в нижний регистр "вручную"
            if (username[i] >= 'A' && username[i] <= 'Z') {
                putchar(username[i] + 32); // 'A' -> 'a'
            } else {
                putchar(username[i]);
            }
        }
        printf("\n");
    }
    
    return 0;
}