/*
                                         STACKS

a linear data structure that offers LAST IN FIRST OUT (LIFO).

                                         APPLICATION OF STACK
1.  used in function calls
2.  infix to postfix conversion
3.  parenthesis matching 

                                         ADT OF STACK

MINIMAL REQUIREMENTS
1.  ptr at topmost element

OPERATIONS/METHODS
1.  push()      used to insert element
2.  pop()       used to delete an element
3.  peek(index) value of given position is returned
4.  isEmpty()   determines whether the stack is empty or not
5.  isFull()    determines whether the stack is full or not


                                             IMPLEMENTATION
1.      using an array
2.      using a linked list

IMPLEMENTATION OF ARRAY USING AN ARRAY
1.      fixed size array creation
2.      create a pointer (ptr)  TOP

struct stack{                   struct stack{
    int size;                   s.size = 80;
    int top;                    s.top  = -1;
    int * arr;                  s.arr= (int*)malloc(sizeof(int*))
}                               }

            WE CANNOT PUSH AN ELEMENT IN THE ARRAY IF IT IS FULL.
            WE CANNOT POP AN ELEMENT IN THE ARRAY IF IT IS EMPTY.

        OPERATION 1- PUSH
                struct stack * sp;
                sp->size = 8;
                sp->top = -1;
                sp.arr=(int*)malloc(sp->size * sizeof(int*));

                if(isFull(sp)){
                    printf("STACK OS OVERFLOW");
                    return 0;
                }
                else{
                    sp ->top++;
                    sp -> arr[sp->top]=val;
                }

        
        OPERATION 2- POP
                struct stack * sp;
                sp->size = 8;
                sp->top = -1;
                sp.arr=(int*)malloc(sp->size * sizeof(int*));

                if(isEMPTY(sp)){
                    printf("STACK OS UNDERFLOW")
                    return -1;
                }
                else{
                    int val = sp->arr[sp->top];
                    sp-> top = sp->top-1;
                    return val;
                }
        

        OPERATION 3- PEEK
                struct stack * sp;
                sp->size = 8;
                sp->top = -1;
                sp.arr=(int*)malloc(sp->size * sizeof(int*));

                int peek(struct stak *sp, int i){                   here, i is the postition not the index
                    if(sp->top-i+1<0){
                        printf ("Not a valid position")
                        return 0;
                    }
                    else{
                        return sp->arr [sp->top-i+1];
                    }
                }

        OPERATION -4 STACK TOP, STACK BOTTOM
                struct stack * sp;
                sp->size = 8;
                sp->top = -1;
                sp.arr=(int*)malloc(sp->size * sizeof(int*));

                int stackTop(struct stack*sp){
                    return sp-> arr[sp->top];
                }
                int stackBottom(struct stack*sp){
                    return sp-> arr[0];
                }
                int main(){
                    printf("Stack top is %d\n", stackTop(sp));
                    printf("Stack Bottom is %d\n", stackBottom(sp));
                }


IMPLEMENTATION OF STACKS USING LINKED LIST
1.  The first element of Linked list will be used for Push and Pop operations
2.  Head is now -> top
3.  stackEmpty condition -> [top==NULL]
4.  stackFull condition -> Heap memory is exhausted.


        OPERATION 1- isEMPTY
                struct stack * sp;
                sp->size = 8;
                sp->top = -1;
                sp.arr=(int*)malloc(sp->size * sizeof(int*));

                void isEmpty(){
                    if (top==NULL){
                        return 1;
                    }
                    else{
                        return 0;
                    }
                }


        OPERATION 2- isfULL
                struct stack * sp;
                sp=(int*)malloc(sp->size * sizeof(int*));

                void isFull(){
                    if(sp==NULL){
                        return 1;
                    }
                    else{
                        return 0;
                    }
                }


         OPERATION 3- PUSH
                struct stack * sp;
                sp=(int*)malloc(sp->size * sizeof(int*));

                void push(){
                    if(sp==NULL){
                        printf ("Stack is overflow");
                    }
                    else{
                        sp->data = x;
                        sp->next = top;
                        top = sp;
                    }
                }


         OPERATION 4- POP
                struct stack * sp;
                sp=(int*)malloc(sp->size * sizeof(int*));

                void pop(){
                    if(sp==NULL){
                        printf("Stack is Underflow");
                    }
                    else{
                        struct node * n == top;
                        top = top ->next;
                        int x = n-> data;
                        free(n);
                        return x;
                    }
                }

                                             PARENTHESIS MATCHING PROBLEM

we will see what are the parenthesis.These parentheses are used to represent the mathematical representation. 
The balanced parenthesis means that when the opening parenthesis is equal to the closing parenthesis, then it 
is a balanced parenthesis

checking for ( in an expression if yes then     push into the stack
checking for ) in an expression if yes then     pop out of the stack


CONDITION FOR A BALANCED PARENTHESIS EXPRESSION
1.      while popping stack should not underflow    if it happens       balanced expression
2.      at end of expression the stack must be empty    if not      then it is an unbalanced exprssion

                                             INFIX, PREFIX AND POSTFIX
                                        
notations to write an expression

1.  infix       operand<operator>operand- e.g., a-b, a+b, p/q, x-4      normal mathematical expressions
2.  prefix      <operator>operand1,operand2- e.g., -ab, +ab, /pq, -x4
3.  postfix     operand1,operand2<operator>- e.g., ab-, ab+, pq/, x4-

machines can't evaluate an infix expression 
*/