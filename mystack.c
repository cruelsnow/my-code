// Copyright[2023]<Yu Ruixi> //
#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>
#define maxsize 1000
typedef struct {
  char *base;
  char *top;
  int stacksize;
  /* data */
} OPTR;  // 寄存操作符的栈
typedef struct {
  int *base;
  int *top;
  int stacksize;
  /* data */
} OPND;  // 寄存操作数的栈
void initstack(OPTR *s) {
  s->base = (char *)malloc(maxsize * sizeof(char));
  if (!s->base) {
    exit(-1);
  }  // 栈底指针为空，存储分配失败，异常退出
  s->top = s->base;
  s->stacksize = maxsize;
}  // 初始化操作符栈
void initstack(OPND *s) {
  s->base = (int *)malloc(maxsize * sizeof(int));
  if (!s->base) {
    exit(-1);
  }  // 栈底指针为空，存储分配失败，异常退出
  s->top = s->base;
  s->stacksize = maxsize;
}  // 初始化操作数栈
void pushnumber(OPND *s, int e) {
  if (s->top - s->base == s->stacksize) {
    exit(0);  // 栈满，即退出
  }
  *(s->top++) = e;  // 将元素e压入栈顶，栈顶指针加1
}
void popnumber(OPND *s, int e) {
  if (s->top == s->base) {
    exit(0);
  }                 // 栈空，即退出
  *(s->top--) = e;  // 栈顶指针减1，栈顶元素赋给e
}
void pushchar(OPTR *s, char e) {
  if (s->top - s->base == s->stacksize) {
    exit(0);  // 栈满，即退出
  }
  *(s->top++) = e;  // 将元素e压入栈顶，栈顶指针加1
}
void popchar(OPTR *s, char e) {
  if (s->top == s->base) {
    exit(0);
  }                 // 栈空，即退出
  *(s->top--) = e;  // 栈顶指针减1，栈顶元素赋给e
}
char gettop(OPTR *s) { return *(s->top - 1); }
int in(char e) {
  if ((e - '0') < 0) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  OPTR s1;
  OPND s2;
  initstack(&s1);
  initstack(&s2);
  int a;
  char b;
  char ch[1222] = {0};
  scanf("%s", ch);
  int n = 0;
  while (gettop(s1) != '\0' || ch[n] != '\0') {
    if (in(ch[n]))
  // 读取输入字符
