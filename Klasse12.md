# Basis von C 
## leer aber g￿ültig
```
int main(){
    return 0;
}
```
- main Funktion ... "entry point" des Programms
- {} ... Die definition der Funktion wird zwischen diesen geschweiften klammern geschrieben.


### helloworld
```
#include <stdio.h>
int main() {
    printf("Hello, World!\n");
    return 0;
}
```
- \#include <stdio.h>  ... bedeutet "include standard io", n￿ötig f￿ür printf()
- printf() ... zeigt eine Zeichenkette(string) auf der Konsole.

### Mathematik
```
#include <stdio.h>
int main() {
    printf("3 + 4 = %d\n", 3 + 4);
    return 0;
}
```
- %d ... Platzhalter f￿ür int
- \n ... Neue Zeile

### Variabel
```
#include <stdio.h>
int main() {
    int x = 3;
    int y = 4;
    printf("x + y = %d\n", x + y);
    return 0;
}
```
- int ... integer
- float ... floating point
- char ... character
- double ... double precision float

### Kondition
```
#include <stdio.h>
int main() {
    int numberOfChildren = 2;
    if(numberOfChildren <= 2){
        printf("Kindergeld: %d euro\n", numberOfChildren * 204);
    }
    else if(numberOfChildren == 3){
        printf("Kindergeld: %d euro\n", numberOfChildren * 210);
    }
    else{
        printf("Kindergeld: %d euro\n", numberOfChildren * 235);
    }
    return 0;
}
```
### For Schleife
```
#include <stdio.h>
int main(){
    for(int i = 0; i < 20; i++){
        printf("count: %d\n", i);
    }
    return 0;
}
```
### Array
```
#include <stdio.h>
int main(){
    int myArray[5] = {20, 31, 45, 66, 72};
    for(int i = 0; i < 5; i++){
        printf("count: %d\n", myArray[i]);
    }
    return 0;
}
```
### Funktion
```
#include <stdio.h>
float circleArea(float radius){
    return radius * radius * 3.141592f;
}

int main(){
    float radius = 3.0f;
    printf("Circle Area: %f where radius = %f\n", circleArea(radius), radius);
    return 0;
}
```

### Pointer
#### memory address
```
#include <stdio.h>
int main(){
    int val = 450;
    printf("val = %d address = %p\n", val, &val);
    return 0;
}
```
#### pointer
```
#include <stdio.h>
int main(){
    int val = 450;
    int* valPtr = &val;
    printf("val = %d address = %p\n", val, valPtr);
    return 0;
}
```
#### dereference
```
#include <stdio.h>
int main(){
    int val = 450;
    int* valPtr = &val;
    printf("val = %d address = %p\n", val, valPtr);
    return 0;
}
```
#### Pointer als Parameter
##### pass by value
```
#include <stdio.h>
 void adder(int val){
     val = val + 5;
 }
 
 int main(){
     int val = 10;
     adder(val);
     printf("val = %d\n", val);
 }
```
##### pass by pointer
```
#include <stdio.h>
void adder(int* valPtr){
    *valPtr = *valPtr + 5;
}

int main(){
    int val = 10;
    adder(&val);
    printf("val = %d\n", val);
}
```
##### der Grund

```
#include <stdio.h>
void valFunc(int val){
    printf("in valFunc %p\n", &val);
}
 
void ptrFunc(int* val){
    printf("in ptrFunc %p\n", val);
}

int main(){
    int val = 10;
    printf("in main %p\n",&val);
    valFunc(val);
    ptrFunc(&val);
}
```

##### Array und Ptr
```
#include <stdio.h>
void attenuate(float* samplePtr){
    for(int i = 0; i < 5; i++){
        samplePtr[i] = samplePtr[i] * 0.5f;
    }
}

int main(){
    float samples[5] = {0.4f, 0.5f, 0.2f, 0.3f, 0.1f};
    attenuate(&samples[0]);
    for(int i = 0; i < 5; i++){
        printf("%f\n", samples[i]);
    }
    return 0;
}
```

#### Dynamische Zuweisung
##### EXE_BAD_ACCESS
```
#include <stdio.h>
#include <stdlib.h>
int main(){
    int* intptr = nullptr; // points nothing
    printf("%d", intptr[3]); // nothing is pointed. the program will crash
    return 0;
}
```

##### malloc
```
#include <stdio.h>
#include <stdlib.h>
int main(){
    int* intptr = NULL; // points nothing
    intptr =  malloc(sizeof(int) * 4); // allocate memory for four integers
    intptr[3] = 42; // a value can be stored
    printf("%d\n", intptr[3]);  // and read
    return 0;
}
```

##### memory leak
```
#include <stdio.h>
#include <stdlib.h>
int main(){
    int* intptr = NULL; // points nothing
    intptr =  malloc(sizeof(int) * 4); // allocate memory for four integers
    intptr[3] = 42; // a value can be stored
    printf("%d\n", intptr[3]);  // and read
    free(intptr); // dellocate by yourself after the use
    return 0;
}
```
### struct
#### Declaration
```
#include <stdio.h>

struct Vector{
    int x;
    int y;
};

int main(){
    struct Vector vec;
    vec.x = 100;
    vec.y = 110;
    printf("x=%d y=%d\n", vec.x, vec.y);
    return 0;
}
```
### Pointer und struct 
```
#include <stdio.h>

struct Vector{
    int x;
    int y;
};

void scaleHalf(struct Vector* vec){
    vec->x *= 0.5;
    vec->y *= 0.5;
}

int main(){
    struct Vector vec;
    vec.x = 100;
    vec.y = 110;
    scaleHalf(&vec);
    printf("x=%d y=%d\n", vec.x, vec.y);
    return 0;
}
```
### Pointer und Funktion
#### Adresse von Funktionen
```
#include <stdio.h>

void GreetFromChikashi(){
    printf("Hello, I'm chikashi\n");
}   

void GreetFromSimon(){
    printf("Hallo, Ich bin Simon\n");
}   

int main(){
    printf("%p %p\n", GreetFromChikashi, GreetFromSimon);
    return 0;
}
```
#### Pointer f￿ür Funktionen
```
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
```
