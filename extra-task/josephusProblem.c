/*************************************************************
 * Josephus Problem
 *
 * gcc josephusProblem.c -o josephusProblem.o
 * ./josephusProblem.o
 *
 *      JosePhus Problem
 *Enter the name 
 *zhutingdian
 *Enter end to stop entering data otherwise enter the name
 *tangguike 
 *Enter end to stop entering data otherwise enter the name
 *wanghuiwu
 *Enter end to stop entering data otherwise enter the name
 *liuguangbin 
 *Enter end to stop entering data otherwise enter the name
 *chendengyu
 *Enter end to stop entering data otherwise enter the name
 *end
 *Enter the count after which deletion is to happen and Enter the name of starting soldier
 *4
 *tangguike
 *The soldier who eliminated in pass number 1 is chendengyu
 *The soldier who eliminated in pass number 2 is liuguangbin
 *The soldier who eliminated in pass number 3 is zhutingdian
 *The soldier who eliminated in pass number 4 is wanghuiwu
 *The soldier who escapes is tangguike
 *
 *************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    char name[10];
    struct node *next;
} *start;

typedef struct node *Nodeptr;

/**
 * add a node.
 */
void add(char name[])
{
    Nodeptr temp = (struct node *)malloc(sizeof(struct node)); //newly declared node.
    Nodeptr move;
    move = start; //point to the start

    if(temp == NULL) {
        printf("overflow!\n");
        return; //can not allocate space so return.
    }

    while((move->next) != NULL) {
        move = move->next;
    }
    strcpy(temp->name, name);
    temp->next = NULL;
    move->next = temp;
}

int main() 
{
    char choice[20];
    start = (Nodeptr)malloc(sizeof(struct node));

    printf("\t\tJosePhus Problem\n");
    printf("Enter the name \n"); //Enter the beginning name.
    scanf("%s", start->name);
    start->next = NULL;
    printf("Enter end to stop entering data otherwise enter the name\n");
    scanf("%s", choice);

    while(strcmp(choice, "end") != 0) {
        add(choice);
        printf("Enter end to stop entering data otherwise enter the name\n");
        scanf("%s", choice);
    }

    Nodeptr move = start;
    while((move->next) != NULL) {
        move = move->next;
    }
    move->next = start; //make the list circular by making the end point to start
    move = start;

    int count; //takes the count after which the soldier 
    char begin[20]; //store name of soldier to begin with.
    printf("Enter the count after which deletion is to happen and Enter the name of starting soldier\n");
    scanf("%d%s", &count, begin);

    int ctr = 0;
    while(strcmp(move->name, begin) != 0) {
        move = move->next;
    }
    int pass = 1;
    while(move->next != move) {
        ctr++;
        if(ctr == count - 1) {
            Nodeptr temp = move->next;
            move->next = temp->next;
            printf("The soldier who eliminated in pass number %d is %s\n", pass, temp->name);
            free(temp); //free space
            ctr = 0;
            pass++;
        }
        move = move->next;
    }

    printf("The soldier who escapes is %s\n", move->name);
}
