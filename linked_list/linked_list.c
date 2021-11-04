#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct node{
    char* value;
    struct node* next;
};

int main(){    
    char *token;
    char str [100];
    FILE * file;
    file = fopen("text.txt","r");
    if(file != NULL){
        fgets(str, 100, file);
        token = strtok(str, " ");
        struct node head;
        struct node* nde = malloc (sizeof(struct node));
        struct node* temp;
        head.value = token;
        nde->value = strtok(NULL, " ");
        head.next = nde;
        while(token != NULL){
            token = strtok(NULL, " ");
            if(token == NULL){
                break;
            }
            temp = malloc (sizeof(struct node));
            temp->value = token;
            nde->next = temp;
            nde = temp;
        }
        struct node* tmp = &head;
        while(tmp != NULL){
            printf("%s ", tmp->value);
            tmp = tmp->next;
        }
        printf("\n");
    }    
}
