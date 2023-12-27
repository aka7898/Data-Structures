/*
                                         ARRAYS
    
It is a data structure that is used to store homogenous 
data in contigous memory locations

                                         ADT OF ARRAYS

MINIMAL REQUIREMENTS   
get(i)
set(i,num)

OPERATIONS/METHODS
insert
delete
add
resize

                                         RESIZING OF ARRAYS
    
To resize a previously generated array size,(We can't increase
the size of array on our own as might be possible that compiler
allocate the next memory location to another variable, array, etc.)

1. IN STACK -   We can copy each elements of the array to the new one.
2. IN HEAP  -   (int*)malloc(10*sixeof(int))    If we have a pointer a 
and we have pointed it to the memory allocation.
To expand the size of array, we will create a new pointer b     (int*)malloc(20*szeof(int))
and then    a=b and we have pointed array to b.

We can't increase size of array using malloc

                                         FINDING THE ADDRESS OF ELEMENT

we can find the address of any element in the array as
GIVEN:- starting index address, size of address, and the index of which address to find
                   starting index address   +   size of address *   (i)
                   e.g. 10*4(i) here, 10 is the addres of first element of array, 4 is no. of bytes,
i is the index of which address to find

                                         DEFINING ADT OF ARRAY

    myArray     -       total size              max()
                        used_size          +    get()                  
                        base_address            set(i,num)
        

         struct myArray{
    int total_size;     //memory to be reserved
    int used_size;      //memory to be used
 }


 */

//IMPLEMENTING ARRAY AS AN ADT
#include <stdio.h>
#include <stdlib.h>
 struct myArray{        //here, myArray is a variable
    int total_size;     //memory to be reserved
    int used_size;      //memory to be used
    int *ptr;           //points the first element of the array 
 }
void createArray ( struct myArray * a){     //function i.e., take a structure like myArray.     This is ADT
    //(*a).total_size =   tSize;        //dereference the pointer
    //(*a).used_size  =   uSize;
    //(*a).ptr = (int*)malloc(sizeof(int))     //memory allocation

        //BOTH THE WAYS TO CREATEARRAY ARE IDENTICAL

    a->total_size =   tSize;        //dereference the pointer
    a->used_size  =   uSize;
    a->ptr = (int*)malloc(sizeof(int))     //memory allocation
}   

void show(struct myArray *a){
    for(int i =0; i=a->used_size; i++){
        printf("%d\n",(a->ptr));
    }
}

void set(struct myArray *a){
    for(int i =0; i=a->used_size; i++){
        printf("Enter element %d",i);
        scantf("%d");
        (a->ptr)[i] = n;
    }
}
    
int main(){
    struct myArray marks;
    createArray(&marks,100,20);
    set(&marks);
    show(&marks);
    
    return 0;
 }


/*
                                     OPERATIONS ON ARRAY

1. Traversal    visiting the array    for(int=0; i<n,i++){ printf("%d",a[i])}
2. Insertion    inserting in array
3. Deletion
4. Searching
    Linear Search       traversing and checking each element of the array
    Binary Seach        arranging into ascending, then the first element will be low and last will be high, if the element we are searching
for is neither high nor low then we will find the mid element i.e. (high+low)/2 and then checking the mid value whether it is the element
we are seaching for, if not then compare the element we are searching for with the mid value and then the element we are seaching for is 
smaller then the mid value then will be making mid value to high,   and if the element we are searching for is greater then the mid value then
we will be taking the mid valye as the low, and traversing to find the element.... and so on..... 

*/

//OPERATIONS IN AN ARRAY
#include<stdio.h>
#include<stdlib.h>

//FUNCTION FOR TRAVERSING IN AN ARRAY
void display(int arr, int n){
    for(int i=0; i<n; i++){
        printf("%d\n", arr[i]);
    }
}

//FUNCTION FOR INSERTION IN AN ARRAY
void insert(int arr, int n){
    d
}
int main(){
    int arr[100] = {1,2,3,4,6,8};
    display(arr,6);         //traversing array
    insert(arr,size, element, capacity)
    return 0;
}
