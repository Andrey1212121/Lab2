#include <iostream>
#include <string>

class Character {
private:
    std::string name;
    int health;
    int attack;
    int defense;

public:
    // Конструктор
    Character(const std::string& n, int h, int a, int d)
        : name(n), health(h), attack(a), defense(d) {
        std::cout << "Character " << name << " created!\n";
    }

    // Деструктор
    ~Character() {
        std::cout << "Character " << name << " destroyed!\n";
    }

    void displayInfo() const {
        std::cout << "Name: " << name << ", HP: " << health
            << ", Attack: " << attack << ", Defense: " << defense << std::endl;
    }
};

class Monster {
private:
    std::string name;
    int health;
    int attack;
    int defense;

public:
    // Конструктор
    Monster(const std::string& n, int h, int a, int d)
        : name(n), health(h), attack(a), defense(d) {
        std::cout << "Monster " << name << " created!\n";
    }

    // Деструктор
    ~Monster() {
        std::cout << "Monster " << name << " destroyed!\n";
    }

    void displayInfo() const {
        std::cout << "Name: " << name << ", HP: " << health
            << ", Attack: " << attack << ", Defense: " << defense << std::endl;
    }
};

class Weapon {
    std::string name;
    int damage;
    int durability;

public:
    Weapon(const std::string name, int damage, int durability)
        : name(name), damage(damage), durability(durability) {}

    void displayInfo() {
        std::cout << "Name: " << name << "\nDamage: " << damage << "\nDurability: " << durability << std::endl;
    }

    ~Weapon() {
        std::cout << name << " is deleted" << std::endl;
    }
};

int main() {
    Weapon GoldSword("Gold sword", 100, 50);

    GoldSword.displayInfo();
}