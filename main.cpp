#include <iostream>

//global variable
static void *start_head = nullptr;
static size_t size_alloc = 0;


// Эта функция будет вызвана перед тем как вызывать myalloc и myfree
// используйте ее чтобы инициализировать ваш аллокатор перед началом
// работы.
//
// buf - указатель на участок логической памяти, который ваш аллокатор
//       должен распределять, все возвращаемые указатели должны быть
//       либо равны NULL, либо быть из этого участка памяти
// size - размер участка памяти, на который указывает buf
void mysetup(void *buf, std::size_t size) {
    start_head = buf;
    size_alloc = size;
}

// Функция аллокации
void *myalloc(std::size_t size) {

}

// Функция освобождения
void myfree(void *p) {

}


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
