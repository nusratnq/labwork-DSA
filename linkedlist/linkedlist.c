#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;


typedef struct {
    Node *head;
    Node *tail;
    int size;
} llist;


Node* create(int data) {
    Node *node = (Node *)malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    return node;
}


llist* createll() {
    llist *list = (llist *)malloc(sizeof(llist));
    list->head = NULL;
    list->tail = NULL;
    list->size = 0;
    return list;
}


void insert(int val, int pos, llist *list) {
    if (pos < 0 || pos > list->size) {
        printf("Invalid Position\n");
        return;
    }

    Node *node = create(val);

    
    if (pos == 0) {
        node->next = list->head;
        list->head = node;

        if (list->size == 0)
            list->tail = node;
    }

    else if (pos == list->size) {
        list->tail->next = node;
        list->tail = node;
    }
    else {
        Node *curr = list->head;

        for (int i = 0; i < pos - 1; i++)
            curr = curr->next;

        node->next = curr->next;
        curr->next = node;
    }

    list->size++;
}

void display(llist *list) {
    Node *curr = list->head;

    printf("Linked List: ");

    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }

    printf("NULL\n");
}

int main() {
    llist *list = createll();

    insert(10, 0, list);
    insert(20, 1, list);
    insert(30, 2, list);
    insert(15, 1, list);

    display(list);

    return 0;
}