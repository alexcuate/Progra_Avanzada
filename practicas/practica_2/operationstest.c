#include <stdio.h>
#include "operations.h"

void printTestMessage(int, char *, char *);
int testAddition(void);
int testSubstraction(void);
int main()
{
    //Test add
    printTestMessage(testAddition(),
                     "Add test passed",
                     "Add test failed");

    //Test substraction
    printTestMessage(testSubstraction(),
                     "Substraction test passed",
                     "Substraction test failed");
    return 0;
}

void printTestMessage(int condition, char *messagePassed, char *messageFailed)
{
    if (condition)
    {
        printf("%s\n", messagePassed);
    }
    else
    {
        printf("%s\n", messageFailed);
    }
}

int testAddition(void)
{
    int a = 3;
    int b = 4;

    int result = add(a, b);
    int expected = a + b;
    return result == expected;
}

int testSubstraction(void)
{
    int c = 3;
    int d = 4;

    int result_subs = substraction(c, d);
    int expected_subs = c - d;
    return result_subs == expected_subs;
}
