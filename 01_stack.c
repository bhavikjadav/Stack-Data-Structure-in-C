#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define CAPACITY 5

void push(int);
int isfull();
int pop();
int isempty();
int peek();
void traverse();

int stack[CAPACITY];
int top = -1;

void traverse() {
    if(isempty()) {
        printf("\nStack is empty.");
    }
    else {
        int i;
        printf("\nData of stack are : ");
        for (i = 0; i <= top; i++) {
            printf("\n%d", stack[i]);
        }       
    }
}

int peek() {
    if (isempty()) {
        printf("\nStack is empty.");
    }
    else {
        printf("\nValue at top : %d", stack[top]);
    }  
}

int pop() {
    int ele;
    if(isempty()) {
        printf("\nStack is empty.");
    }
    else {
        ele = stack[top];
        top--;
        printf("\nElement sucessfully popped out.");
    }
    return top;
}

int isempty() {
    if(top == -1) {
        return 1;
    }
    else {
        return 0;
    }
}

void push(int ele) {
    if (isfull()) {
        printf("\nStack is full.");
    }
    else {
        top++;
        stack[top] = ele;
        printf("\n %d added into the stack.", ele);
    }
}

int isfull() {
    if(top == CAPACITY - 1) {
        return 1;
    }
    else {
        return 0;
    }
}

void main() {

    int i, choice;
    int data;

    do
    {
        printf("\n\n1.Push.");
        printf("\n2.Pop.");
        printf("\n3.Peek.");
        printf("\n4.Traverse.");
        printf("\n5.Exit.");

        printf("\n\nWhat operation you want to perforn ? : ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("\nEnter element for push into the stack : ");
            scanf("%d", &data);
            push(data);
            break;

        case 2:
            pop();
            break;
        
        case 3:
            peek();
            break;

        case 4:
            traverse();
            break;
    
        default:
            exit(0);
            break;
        }
    } while (choice != 5);
    getch();
}