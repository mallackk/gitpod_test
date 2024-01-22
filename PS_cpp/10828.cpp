#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 이게 문제였다고?
#define SIZE 10000

int stack[10001];
int high = -1;

void push(int data) {
    stack[++high] = data;  
}

int pop() {
    if(high == -1) {
        return -1;
    }
    return stack[high--];
}

int size() {
    return (high + 1);
}

int empty() {
    if(high == -1) {
        return 1;
    }
    else
        return 0;
}

int top() {
    if(high == -1) {
        return -1;
    }
    else 
        return stack[high];
}

int main(void) {
    int num = 0;
    int newdata = 0;
    char command[5] = {0, };
    scanf("%d", &num);

    for(int i=0; i<num; i++) {
        scanf("%s",command);

        if(!strcmp(command, "push")) {
            scanf("%d", &newdata);
            push(newdata);
        }
        else if(!strcmp(command, "pop")) {
            printf("%d\n", pop());
        }
        else if(!strcmp(command, "empty")) {
            printf("%d\n", empty());
        }
        else if(!strcmp(command, "size")) {
            printf("%d\n", size());
        }
        else if(!strcmp(command, "top")) {
            printf("%d\n", top());
        }
    }
    return 0;
}