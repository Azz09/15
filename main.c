// main.c
#include <stdio.h>
#include <stdlib.h>
#include "student.h"
#include "node.h"

int main() {
    struct Node *head = NULL;

    load_students_from_file(&head, "data.bin");

    struct Student *student1 = (struct Student *)studentInit("Pushkin", "Alex", "M", 20,  1, 4, 3, 5);
    struct Node *new_node1 = (struct Node *)malloc(sizeof(struct Node));
    new_node1->data = *student1;
    new_node1->next = head;
    head = new_node1;


		struct Student *student2 = (struct Student *)studentInit("Mushkina", "Olga", "F", 19, 2, 5, 5, 3);
    struct Node *new_node2 = (struct Node *)malloc(sizeof(struct Node));
    new_node2->data = *student2;
    new_node2->next = head;
    head = new_node2;

    save_students_to_file(head, "data.bin");

    
    while (head != NULL) {
        struct Node *temp = head;
        head->data.infoOutput(&(head->data));
        head = head->next;
        free(temp);
    }

    free(student1);
    free(student2);

    return 0;

}
