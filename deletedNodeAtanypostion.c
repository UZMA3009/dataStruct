//
//  main.cpp
//  reverse_a_string
//
//  Created by MOHAMMAD AMMAN on 01/07/22.
//

#include <iostream>
#include <string>
using namespace std;


struct Node {
    int number;
    struct Node* next;
} Node;
 
void Push(Node** head, int A)
{
    Node* n = malloc(sizeof(Node));
    n->number = A;
    n->next = *head;
    *head = n;
}
 
void deleteN(Node** head, int position)
{
    Node* temp;
    Node* prev;
    temp = *head;
    prev = *head;
    for (int i = 0; i < position; i++) {
        if (i == 0 && position == 1) {
            *head = (*head)->next;
            free(temp);
        }
        else {
            if (i == position - 1 && temp) {
                prev->next = temp->next;
                free(temp);
            }
            else {
                prev = temp;
 
              
                if (prev == NULL)
                    break;
                temp = temp->next;
            }
        }
    }
}
 
void printList(Node* head)
{
    while (head) {
        printf("[%i] [%p]->%p\n", head->number, head,
               head->next);
        head = head->next;
    }
    printf("\n\n");
}
 

int main()
{
    Node* list = malloc(sizeof(Node));
    list->next = NULL;
    Push(&list, 1);
    Push(&list, 2);
    Push(&list, 3);
 
    printList(list);

    deleteN(&list, 1);
    printList(list);
    return 0;
}
