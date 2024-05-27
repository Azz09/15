#ifndef STUDENT_H
#define STUDENT_H

#include <stdio.h>

struct Student {
    char *surname;
    char *name;
    char *sex;
    int age;
    int group;
    int mathGrade;
    int physicsGrade;
    int chemistryGrade;
    void* (*infoOutput)(void*);
    void* (*saveToBinary)(void*);
};

struct Node {
    struct Student data;
    struct Node* next;
};

void* studentInit(void *surname, void *name, void *sex, int age, int group, int mathGrade, int physicsGrade, int chemistryGrade);
void save_students_to_file(struct Node *head, const char *filename);
void load_students_from_file(struct Node **head_ref, const char *filename);

#endif // STUDENT_H
