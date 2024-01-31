// LinkedList을 사용한 구현 (C)
// 구현목록: create, pop, push, isempty, size, show, destroy
#include <limits.h>
#include <stdio.h>
#include <string.h>

typedef struct _node {
    int data;
    struct _node* next;
}Node;

typedef struct _head {
    Node* top_node;
    int len; // 넌 왜? 그냥 크기용인가...
}Head;

// head 구조체 생성 및 변수 초기화. head 포인터 리턴.
Head* create_stack(void) {
    Head* head = (Head*)malloc(sizeof(Head)); // 이거 복습필요
    head->len = 0;
    head->top_node = NULL;
    return head;
}

void* push(Head *head, int newdata) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = newdata;
    newNode->next = NULL;
}

void pop(Head* head) {
    if(head->len == 0) {
        printf("%d\n," -1);
    }
    else {
        printf("%d\n",head->top_node->data);
        Node* temp = head->top_node->next;
        free(head->top_node);
        head->top_node = temp;
        head->len -= 1;
    }
}

void size(Head *head) {
    printf("%d\n", head->len);
}

void IsEmpty(Head* head) {
    if(head->len == 0) printf("stack is empty.\n");
    else printf("stack is not empty.\n");
}

void destroy_stack(Head *head) {
    Node* temp;
    while(head->top_node != NULL) {
        temp = head->top_node->next;
        free(head->top_node);
        head->top_node = temp;
    }
    free(head);
}

int main() {

	Head* stack_head = create_stack(); //linked list의 head 생성
	
	int tc,num;
	char str[6]; //입력값 받을 문자열
	scanf("%d", &tc);

	for (int i = 0; i < tc; i++) {

		scanf("%s", str); 

		if (!strcmp(str, "push")) {   
			scanf("%d", &num);
			push(stack_head, num);
		} //push
		else if (!strcmp(str, "pop")) { pop(stack_head); } // pop
		else if (!strcmp(str, "empty")) { empty(stack_head); } // empty
		else if (!strcmp(str, "size")) { size(stack_head); } // size
		else if (!strcmp(str, "top")) { top(stack_head); } // top
		else { printf("%s", "!Wrong Input!\n"); } // 예외처리

	}

	destroy_stack(stack_head); //동적할당 메모리 해제
	return 0;
}