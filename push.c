#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 5 
int top=-1,stack [MAX];
void push ();
void push ();
void pop ();
void display ();
void main ();
{
int ch;
while (1)
{
Printf(“\n stack menu \n”);
Printf (“\n\n1.push\n2.pop\n3.display\n4.exit”);
Printf(“\n enter your choice (1-4)”);
Scanf(“%d”,&ch);
Switch(ch)
{
Case 1;
Push();
break;
Case 2;
Pop();
break;

Case 3;
display();
break;
Case 4;
exit(0);
break;
default:
printf(“\wrong choice”);
}
}
}
Void push()
{
Int val ;
If(top==MAX-1)
{
Printf(‘’\n stack is full”);
}
Else
{
Printf(‘’\n enter element to push ’’);
Scanf(“%d”,&val);
Top=top+1;
Stack[top]=val;
}
}
Void pop()
{
If(top==-1)
{
Printf(“\n stack is empty”);
}
else
{
Printf(“\n deleted element is %d”,stack[top]);
Top=top-1
}
}
Void display()
{
int i;
if(top==-1)
{
Printf(‘’ \n stack is empty’’);
}
Else
{
Printf(“\n stack is….\n”);
For(i=top;i>=0;--i)
{
Printf(“ %d\n”,stack[i]);
}
}
