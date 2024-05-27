#include "node.h"
#include <stdio.h>
#include <stdlib.h>

void append(struct Node **head_ref, struct Student new_data) {
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    if (!new_node) {
        printf("Ошибка выделения памяти\n");
        return;
    }
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
