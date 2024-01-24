#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _stack {
    int capacity;
    int top;
    int* stack;
} Stack;


// 스택 생성(초기화)
// 그럼 스택의 top, capacity를 초기화하고 생성해야한다.
void create_stack(Stack* stack) {
    stack->top = -1;
    stack->capacity = 1;
    stack->st = (int*)malloc(sizeof(int)*1);
}