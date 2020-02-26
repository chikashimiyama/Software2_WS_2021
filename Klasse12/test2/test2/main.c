#include <stdio.h>

void GreetFromChikashi(){
    printf("Hello, I'm chikashi\n");
}

void GreetFromSimon(){
    printf("Hallo, Ich bin Simon\n");
}

int main(){
    void (*funcPtr)(void) = GreetFromChikashi;
    (*funcPtr)(); // aufrufen
    funcPtr = GreetFromSimon;
    (*funcPtr)(); // aufrufen
    return 0;
}
