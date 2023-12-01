#include <iostream>

struct header {
    int isUse; // 4 0 не исполь зуется 1 используется
    void *next;//8
    void *prev;//8
    size_t size;//8
};// mem 36 кратно 4

///global variable
struct header *start_head;
static size_t size_alloc;


// Эта функция будет вызвана перед тем как вызывать myalloc и myfree
// используйте ее чтобы инициализировать ваш аллокатор перед началом
// работы.
//
// buf - указатель на участок логической памяти, который ваш аллокатор
//       должен распределять, все возвращаемые указатели должны быть
//       либо равны NULL, либо быть из этого участка памяти
// size - размер участка памяти, на который указывает buf(буду считать что в байтах)
void mysetup(void *buf, std::size_t size) {
    start_head->next = buf;
    start_head->prev = nullptr;
    start_head->size = size;
    start_head->isUse = 0;
    size_alloc = size;
}

// Функция аллокации
void *myalloc(std::size_t size) {

}

// Функция освобождения
void myfree(void *p) {

}


int main() {
    std::cout << sizeof(int) << std::endl;
    return 0;
}
