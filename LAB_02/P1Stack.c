#include <stdio.h>
#define SIZE 100

int STACK[SIZE];
int TOP = -1;

void PUSH() {
    if( TOP >= SIZE - 1) {
        printf("Stack Overflow");
    }
    else {
        int value;
        printf("Enter Value : ");
        scanf("%d", &value);
        TOP++;
        STACK[TOP] = value;
        printf("%d Pushed to Stack.\n", value);
    }
}

void POP() {
    if( TOP == -1) {
        printf("Stack Underflow");
        return;
    }
    else {
        int value = STACK[TOP--];
        printf("Popped Value: %d", value);
    }
}

void PEEP() {
    int i;
    printf("Enter Index to Peep : ");
    scanf("%d", &i);

    if( TOP - i + 1 < 0) {
        printf("Stack is empty");
        return;
    }
    else {
        printf("Top Element: %d", STACK[TOP-i+1]);
    }
}

void CHANGE() {
    int i;
    printf(" Enter Index to Change Element : ");
    scanf("%d", &i);
    if (TOP - i + 1 < 0) {
        printf("\nStack Underflow!\n");
        return;
    }

    int x;
    printf(" Enter New Value: ");
    scanf("%d", &x);
    STACK[TOP - i + 1] = x;
    printf("Element at Index %d changed to %d\n", i, x);
}

void DISPLAY() {
    if( TOP == -1) {
        printf("Stack is Empty.\n");
    }
    printf("Stack Element : ");
    for(int i = TOP; i >= 0; i--) {
        printf(" %d |", STACK[i]);
    }
    printf("\n");
}


int main() {
    int OP;
    while (1) {
        printf("\n");
        printf("1. PUSH :\n");
        printf("2. POP :\n");
        printf("3. PEEP :\n");
        printf("4. CHANGE :\n");
        printf("5. DISPLAY :\n");
        scanf("%d", &OP);
    
        switch(OP) {
            case 1:
                PUSH();
                break;
            case 2:
                POP();
                break;
            case 3:
                PEEP();
                break;
            case 4:
                CHANGE();
                break;
            case 5:
                DISPLAY();
                break;
            default:
                printf("Invalid choice");
                break;
        }
    }    
}