#include <stdio.h>
#include <string.h>
char stack[100];
int top = -1;
void push(char x){
    stack[++top] = x;
}
char pop(){
    if(top == -1)
    return 0;
    return stack[top--];
}
int main(){
    char exp[100],ch;
    int i;
    printf("Enter the expression :");
    scanf("%s",exp);
    for(i=0;i<strlen(exp);i++){
        ch = exp[i];
        if(ch == '(' || ch == '[' || ch == '{'){
            push(ch);
        }
        else if(ch==')'||ch=='}'||ch==']'){
            char x = pop();
            if(ch==')' && x!='(' || ch=='}' && x!='{' || ch==']' && x!='['){
                printf("Unbalanced expression");
                return 0;
            }
    }
}
    if(top == -1)
    printf("Balanced expression");
    else
    printf("Unbalanced expression");
}