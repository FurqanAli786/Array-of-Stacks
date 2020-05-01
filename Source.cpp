#include<iostream>
#include<conio.h>

using namespace std;

struct arraystack
{
int top;
int capacity;
int *array;
};

arraystack *stack(int cap,int size=10)
{
arraystack *stack;
stack=new arraystack;
stack->capacity=cap;
stack->top=-1;
stack->array=new int[size];
return(stack);
};

int isfull(arraystack *stack)
{
	if(stack->top==stack->capacity-1)
return(1);
	else
		return(0); 
};

int isempty(arraystack *stack)
{
if(stack->top==-1)
	return(1);
else 
	return(0);
}

void push(arraystack *stack, int item)
{
if(!isfull(stack))
{
stack->top++;
stack->array[stack->top]=item;
}
};

int pop(arraystack *stack)
{
	int item;
if(!isempty(stack))
{
	item=stack->array[stack->top];
	stack--;
	return(item);
}
else 
	return (-1);
};

void display()
{
	cout<<"\n Top-->";						//Error
	for (int i=top;i>=0;i--)
		cout<<stack->top[i];

};


int main()
{
	int ch,item;
while(1)
{
cout<<"\n 1.For Push \n 2.For Pop \n 3.Exit \n Enter Choice";
cin>>ch;

switch(ch)
{
case 1:
	cout<<"\n Enter A Number ";
	cin>>item;
	push( );					//Error
	break;

case 2:
	item=pop(*stack);
	if(item==-1)
		cout<<"\n Empty";
	else 
		cout<<"\n Popped Value Is"<<item;

case 3:
	exit(0);
}
}
getch();
}