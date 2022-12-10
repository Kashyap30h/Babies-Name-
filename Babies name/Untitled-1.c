#include<stdio.h>
#define n 10
int top=-1,s[n];
void push(int x)
{
    if(top==n-1)
    {
        printf("your stack is overfolw");
    }
    top++;
    s[top]=x;
}
int pop()
{
    int y;
    if(top==-1)
    {
        printf("your stack is underflow");
    }
    top--;
    y=s[top+1];
    return y;
}
int peek(int i,int x)
{
    int y;
 if((top-(i+1))<n-1)
 {
  printf("your choice is invalide");   
 top++;
 y=s[top-(i+1)];
}
int search(int i)
{
    int y;
    if((top-(i+1))<n)
    {
        printf("your choic is invalide")
    }
    top++;
    y=s[top-(i+1)];
    return y;
}
void main()
{
    int ch,x,i;
    printf("enter the value of ch ");
    scanf("%d",&ch);
    while(1)
    {
        switch(ch)
        {
            case 1:
                printf("entert the value of x");
                scanf("%d",&x);
                push(x);
                break;
                
                case 2:
                    printf("your deleted value of ");
                    pop();
                    break;
                    
                case 3:
                    printf("your choice is peek");
                    printf("enter the value of x");
                    scanf("%d",&x);
                    printf("entet thr value of i");
                    scanf("%d",&i);
                    peek(i,x);
                    break;
                    
                    case 4:
                    printf("your choice is peek");
                    printf("enter the value of x");
                    scanf("%d",&x);
                    printf("entet thr value of i");
                    scanf("%d",&i);
                    x=search(i,x);
                    printf("%d",x);
                    break;
        }
    }
}