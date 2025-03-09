#include <stdio.h>

struct Car 
{
    char * name;
    float price;
    int speed;
};

void accelerate(struct Car * current)
{
    current->speed++;
}

int main()
{
    struct Car mine;
    mine.name = "Peugeot";
    mine.price = 4500.0;
    mine.speed = 101;

    printf("my car is going %d mph.\n", mine.speed);
    accelerate(&mine);
    printf("my car is going %d mph.\n", mine.speed);
    return 0;
}
