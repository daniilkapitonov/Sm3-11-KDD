#include <stdio.h>

struct Mage {
    char name[20];
    int hp;
    int mp;
    int spell_power;
};

int main() {
    struct Mage mage1 = {"Гэндальф", 100, 50, 25};
    struct Mage mage2 = {"Саруман", 90, 60, 20};
    
    printf("МАГИЧЕСКАЯ ДУЭЛЬ!\n\n");
    
    int round = 1;
    while (mage1.hp > 0 && mage2.hp > 0) {
        printf("Раунд %d: ", round++);
        
        // Атака первого мага
        if (mage1.mp >= 10) {
            mage2.hp -= mage1.spell_power;
            mage1.mp -= 10;
            printf("%s атакует! ", mage1.name);
        } else {
            printf("%s восстанавливает ману! ", mage1.name);
            mage1.mp += 5;
        }
        
        // Атака второго мага  
        if (mage2.hp > 0 && mage2.mp >= 10) {
            mage1.hp -= mage2.spell_power;
            mage2.mp -= 10;
            printf("%s контратакует!\n", mage2.name);
        } else if (mage2.hp > 0) {
            printf("%s восстанавливает ману!\n", mage2.name);
            mage2.mp += 5;
        } else {
            printf("\n");
        }
        
        printf("%s: %d HP, %d MP | %s: %d HP, %d MP\n\n",
               mage1.name, mage1.hp, mage1.mp,
               mage2.name, mage2.hp, mage2.mp);
    }
    
    printf("ПОБЕДИЛ: %s!\n", mage1.hp > 0 ? mage1.name : mage2.name);
    return 0;
}