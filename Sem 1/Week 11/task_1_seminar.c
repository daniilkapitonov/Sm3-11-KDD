#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    char surname[50];
    int group;
    float average_grade;
};

int main() {
    struct Student students[3];
    struct Student *best_student = &students[0];
    
    // Ввод данных
    printf("Введите данные 3 студентов:\n");
    for (int i = 0; i < 3; i++) {
        printf("\nСтудент %d:\n", i + 1);
        printf("Имя: ");
        scanf("%49s", students[i].name);
        printf("Фамилия: ");
        scanf("%49s", students[i].surname);
        printf("Группа: ");
        scanf("%d", &students[i].group);
        printf("Средний балл: ");
        scanf("%f", &students[i].average_grade);
        
        // Поиск лучшего студента
        if (students[i].average_grade > best_student->average_grade) {
            best_student = &students[i];
        }
    }
    
    // Вывод всех студентов
    printf("\n--- Все студенты ---\n");
    for (int i = 0; i < 3; i++) {
        printf("%s %s, группа %d, балл: %.1f\n",
               students[i].name, students[i].surname,
               students[i].group, students[i].average_grade);
    }
    
    // Вывод лучшего студента
    printf("\n--- Лучший студент ---\n");
    printf("%s %s, группа %d, балл: %.1f\n",
           best_student->name, best_student->surname,
           best_student->group, best_student->average_grade);
    
    return 0;
}