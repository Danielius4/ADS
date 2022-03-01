#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "stack.h"
#include "stack.c"

int main()
{
    Stack stack;
    int a;

    init(&stack);

    createStack(&stack);
    printf("Is stack empty? %d\n", isStackEmpty(stack));
    push(&stack, 123);
    push(&stack, 789);
    push(&stack, 999);
    printf("Is stack full?: %d\n", isStackFull(stack));
    printf("countStackElements: %d\n", countStackElements(stack));
    printf("pop = %d\n", a = pop(&stack));
    printf("peak element: %d\n", findData(stack, 1));
    printf("countStackElements: %d\n", countStackElements(stack));

    deleteStack(&stack);
    return 0;
}
