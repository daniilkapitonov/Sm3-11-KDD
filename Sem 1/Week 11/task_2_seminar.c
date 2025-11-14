#include <stdio.h>

struct Hero {
    char name[20];
    int health;
    int attack;
};

int main() {
    struct Hero hero1 = {"Воин", 100, 15};
    struct Hero hero2 = {"Маг", 80, 20};
    
    printf("БИТВА НАЧАЛАСЬ!\n");
    
    // Битва пока кто-то не умрет
    while (hero1.health > 0 && hero2.health > 0) {
        // Герои атакуют друг друга
        hero2.health -= hero1.attack;
        hero1.health -= hero2.attack;
        
        printf("%s: %d HP | %s: %d HP\n", 
               hero1.name, hero1.health > 0 ? hero1.health : 0,
               hero2.name, hero2.health > 0 ? hero2.health : 0);
    }
    
    // Определяем победителя
    if (hero1.health > hero2.health) {
        printf("Победил: %s!\n", hero1.name);
    } else {
        printf("Победил: %s!\n", hero2.name); 
    }
    
    return 0;
}