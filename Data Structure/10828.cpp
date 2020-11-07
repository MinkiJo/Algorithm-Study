#include <stdio.h>
#include <string.h>

#define STACK_SIZE 10000

void push(int input);
int top(void);
int size(void);
int empty(void);
int pop(void);

int stack[STACK_SIZE];
int top_id = -1;

int main() {
    int num, i, input_number;
    char input[6];

    scanf("%d", &num);

    for (i = 0; i < num; i++) {
        scanf("%s", &input);

        if (strcmp(input, "push") == 0) {
            scanf("%d", &input_number);
            push(input_number);

        }
        else if (strcmp(input, "top") == 0) {
            printf("%d\n", top());

        }
        else if (strcmp(input, "size") == 0) {
            printf("%d\n", size());
        }
        else if (strcmp(input, "empty") == 0) {
            printf("%d\n", empty());
        }
        else if (strcmp(input, "pop") == 0) {
            printf("%d\n", pop());
        }
    }
}

void push(int input) {

    stack[++top_id] = input;

}

int top(void) {
    if (top_id == -1) {
        return -1;
    }
    else {
        return stack[top_id];
    }
}

int size(void) {
    int i, count = 0;

    for (i = 0; i <= top_id; i++) {
        count++;
    }

    return count;
}

int empty(void) {

    if (top_id == -1) {
        return 1;
    }
    else {
        return 0;
    }

}

int pop(void) {

    if (top_id == -1) {
        return -1;
    }
    else {
        return stack[top_id--];
    }
}
#include <iostream>
#include <stack>
#include <string>
using namespace std;
struct Stack {
 int data[10000];
 int size;
 Stack() {
 size = 0;
 }
 void push(int num) {
 data[size] = num;
 size += 1;
 }
 bool empty() {
 if (size == 0) {
 return true;
 } else {
 return false;
 }
 }
 int pop() {
 if (empty()) {
 return -1;
 } else {
 size -= 1;
 return data[size];
 }
 }
 int top() {
 if (empty()) {
 return -1;
 } else {
 return data[size-1];
 }
 }
};
int main() {
 int n;
 cin >> n;
 Stack s;
 while (n--) {
 string cmd;
 cin >> cmd;
 if (cmd == "push") {
 int num;
 cin >> num;
 s.push(num);
 } else if (cmd == "top") {
 cout << (s.empty() ? -1 : s.top()) << '\n';
 } else if (cmd == "size") {
 cout << s.size << '\n';
 } else if (cmd == "empty") {
 cout << s.empty() << '\n';
 } else if (cmd == "pop") {
 cout << (s.empty() ? -1 : s.top()) << '\n';
 if (!s.empty()) {
 s.pop();
 }
 }
 }
 return 0;
}