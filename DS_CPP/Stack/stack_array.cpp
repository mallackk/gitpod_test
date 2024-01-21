/*// 배열을 이용한 스택 구현 (C)
// push, pop, IsEmpty, size, index
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 1000
#define INF 99999999

///
int stack[SIZE];
int top = -1; // stack의 최상단(입구) 왜 -1이냐? 비어있을때 처음넣으면 index = 0


// 스택 삽입 함수
void push(int data) {
    if(top == SIZE - 1) {
        printf("StackOverflow is occured !!!\n");
        return;
    }
    stack[++top] = data;
}

// 데이터 추출 함수
int pop() {
    if(top == -1) {
        printf("StackUnderflow is occured !!!\n");
        return -INF;
    }
    return stack[top--];
}

// 스택 전체 원소 출력 함수(최상단 부터)
void show() {
    printf("스택의 최상단\n");
    for(int i = top; i > -1; i--) {
        printf("%d\n", stack[i]);
    }
    printf("스택의 최하단\n");
}

void IsEmpty() {
    if(top == -1) {
        printf("Stack is empty.\n");
        return;
    }
    else
        printf("Stack is not empty.\n");
}

int main(void) {
    push(7);
    push(8);
    push(4);
    pop();
    push(2);
    pop();
    show();
    IsEmpty();

    return 0;
}*/

