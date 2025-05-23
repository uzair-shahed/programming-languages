// Code based on code-along tutorials by Bro Code
// Playlist: https://www.youtube.com/watch?v=2ciUcosJFBc&list=PLZPZq0r_RZOOzY_vR4zJM32SqsSInGMwe
// May be modified or re-typed by me for learning purposes

#include <stdio.h>
#include <string.h>


void print_happy_bday()
{
    printf("Happy birthday to you!\n");
}

void print_name(char name[])
{
    printf("Happy birthday dear %s!\n", name);
}

void print_age(int age)
{
    printf("You are %d years old!\n", age);
}

int main()
{
    char name[50] = "";
    int age = 0;

    printf("Please provide name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';
    
    printf("Please provide age: ");
    scanf("%d", &age);

    print_happy_bday();
    print_happy_bday();
    print_name(name);
    print_happy_bday();
    print_age(age);
}