#include<stdio.h>
#include<string.h>
#define max 100
int top=-1;
char infix[20];
char postfix[20];
char stack[max];
int precidence(char c);
char pop();
char push(char c);
int main(){
    int n,i,p=0;
    printf("\nenter the postfix expression");
    scanf("%s",infix);
    n=strlen(infix);
    for(i=0;i<n;i++){
         switch(infix[i]){
            case '(':
               push('(');
               break;
            case ')':
                while(stack[top]!='('){
                    postfix[p]=pop();
                    p++;
                }
                pop();
                break;
            case '+':
            case '-':
            case '*':
            case '/':
            case '^':
                  while(precidence(infix[i])<=precidence(stack[top])&&stack[top]!='('){
                      postfix[p]=pop();
                      p++;
                  }
                  push(infix[i]);
                  break;
            default:
                 postfix[p]=infix[i];
                 p++;
         }

    }
    while(top!=-1){
       postfix[p]=pop();
       p++;
    }
   postfix[p]='\0';
   printf("\nthe postfix expression is: %s",postfix);
}
char pop(){ 
    int item;
    if(top==-1){
        printf("\nstack underflow");
    }
    else{
      item=stack[top];
      top--;
      return item;
    }
}
char push(char c){
    if(top==max-1){
        printf("\nstack overflow");
    }
    else{
        top++;
        stack[top]=c;
    }
}
int precidence(char c){
    if(c=='^')return 3;
    else if(c=='*'||c=='/')return 2;
    else if(c=='+'||c=='-')return 1;
    else return 0;
}
