#include<stdio.h>
#define N 5
main(){
	int stack[N],i,item,top=-1,ch=0;
	while(ch!=4){
		printf("1> insert\n");
		printf("2> delete\n");
		printf("3> travers\n");
		printf("4> Exit\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				if(top==-1){
					printf("stck is overflow");
				}else{
					printf("push the value in stack");
					scanf("%d",&item);
					top++;
					stack[top]=item;
					printf("%d pushed into stack");
				}
				break;
				case 2:
					if(top==-1){
						printf("stack is underflow");
					}
					else {
						printf("%d poped from stack",stack[top]);
						top--;
					}
					break;
					case 3:
					if(top == -1)
                {
                    printf("Stack is empty\n");
                }
                else
                {
                    printf("Stack elements:\n");

                    for(i = top; i >= 0; i--);
                    {
                        printf("%d\n", stack[i]);
                    }
                }
                break;
                case 4:
                	printf("Exit......");
                	break;
		}
	}
}
