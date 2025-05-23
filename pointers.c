#include <stdio.h>

// PROTOTYPES
void birthday(int age);
void pointer_birthday(int *age);

int main()
{
    int age = 25;
    // int *p_age = &age;

    pointer_birthday(&age);
    printf("%d", age);

    return 0;
}

void pointer_birthday(int *age)
{
    *age++;
}

void birthday(int age)
{
    // "age" is passed by value here, so the original value is not modified.
    // Note that "pass by value" means a copy of the argument is passed
    // to the function.
    age++;
}