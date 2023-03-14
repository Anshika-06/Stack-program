#include<stdio.h>

int main()
{
	int array[10],top,choice;
	top=-1;
	printf("select 1=push 2=pop 3=display");
	scanf("%d", &choice);
	if(choice==1)
	{
		push();
	}
	elseif(choice==2)
	{
		pop();
	}
	elseif(choice==3)
	{
		display();
	}
	
}
void push()
{
	if(top==9)
	{
		printf("overflow");
	}
	else
	{
		printf("Enter data");
		scanf("%d", &data);
		top=top++;
		array[top] = data;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("underflow");
	}
	else
	{
		top=top--;
	}
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("Stack is empty");
	}
	else
	{
		for(i=0;i<=9;i++)
		{
		printf("%d",array[i];
    }
	}
}

