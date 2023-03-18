#include<stdio.h>
int main(void) {
    char letter = 'a';   // initialize letter to the first lowercase letter
    while (letter <= 'z') {   // loop through all the lowercase letters
        putchar(letter);      // print the current letter
        letter++;             // move to the next letter
    }
    putchar('\n');   //printa newline character after all the letters are printed
    return 0;
}

