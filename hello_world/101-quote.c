#include<stdio.h>
/**
 * main- entery point
 *
 * Return: always 1 (Success)
 */
int main(void) {
    const char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    write(2, message, sizeof(message) - 1);
    return 1;
}

