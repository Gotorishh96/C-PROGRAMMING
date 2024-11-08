#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>
#define max 50
char stack[max];
char infix[max],postfix[max];
int top=-1;
void push(char);
char pop();
int Isempty();
void intopost();
int space(char);
void print();
int precedence(char);
void main()
{
printf("Enter the infix expression : ");
gets(infix);
intopost();
print();
}
void intopost()
{
int i,j;
j=0;
char symbol,next;
for(i=0;i<strlen(infix);i++)
{
symbol=infix[i];
if(!space(symbol))
{
switch(symbol)
{
case '(':
push(symbol);
break;
case ')':
while((next=pop())!='(')
postfix[j++]=next;
break;
case '+':
case '-':
case '*':
case '/':
case '^':
while(!Isempty()&&precedence(stack[top])>=precedence(symbol))
postfix[j++]=pop();
push(symbol);
break;
default:
postfix[j++]=symbol;
}
}
}
while (!Isempty())
postfix[j++]=pop();
postfix[j]='\0';
}
int space(char c)
{
if(c==' '|| c=='\t')
return 1;
else 
return 0;
}
int precedence(char symbol)
{
switch(symbol)
{
case '+':
case '-':
return 1;
case '*':
case '/':
return 2;
case '^':
return 3;
default :
return 0;
}
}
void print()
{
int c=0,i=0; 
printf("The equivalent postfix expression is :\n");
while(postfix[i])
{
printf("%c",postfix[i++]);
}
}
void push(char c)
{
if(top==max-1)
{
printf("Stack is overflow");
}
top++;
stack[top]=c;
}
char pop()
{
char c;
if(top==-1)
{
printf("Stack is underflow \n");
exit(1);
}
c=stack[top];
top=top-1;
return c;
}
int Isempty()
{
if(top==-1) 
return 1;
else
return 0;
}