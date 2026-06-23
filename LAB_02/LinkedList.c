#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *link;
};
struct Node *head = NULL;

void insertNode() {
    
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter Val : ");
    scanf("%d", &newNode->data);

    newNode->link = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        struct Node *temp = head;
        while (temp->link != NULL) {
            temp = temp->link;
        }
        temp->link = newNode;
    }
    printf("Node Insert Done.");
}

void deleteNode() {

    int val;
    if (head == NULL) {
        printf("List is Empty.");
        return;
    }
    printf("Enter Value to Delete :");
    scanf("%d", &val);

    struct Node *temp = head;
    struct Node *prev = NULL;
    
    while (temp != NULL && temp->data != val) {
        prev = temp;
        temp = temp->link;
    }

    if (temp == NULL) {
        printf("Value Not Found.");
        return;
    }
    if (prev == NULL) {
        head = head->link;
    } else {
        prev->link = temp->link;
    }
    
    free(temp);
    printf("Node Delete Done.");
}

void displayList() {
    if (head == NULL) {
        printf("List is Empty.");
        return;
    }

    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->link;
    }
    printf("NULL");
}


int main() {
    int OP;
    while (1) {
        printf("\nSingly Linked List => \n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &OP);

        switch (OP)
        {
        case 1:
            insertNode();
            break;
        case 2:
            deleteNode();
            break;
        case 3:
            displayList();
            break;
        case 4:
            printf("Exing Program.");
            return 0;
        default:
            printf("Please, Enter Valid Choise !");
            break;
        }
    }
    return 0;
}
