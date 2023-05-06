//How to return multiple values from a function in C or C++?
//New programmers are usually searching for a way to return multiple values from a function.
//In C and C++, there is no direct support for returning multiple values from a function.
//Below are some ways to achieve the task.
//By Using Pointers
//By Using Structures
//By Using Arrays
//Example: Consider an example where the task is to find the greater and smaller of two numbers.
//The main problem is that we can only return one value from a function.

//Returning multiple values using pointers: Pass the arguments with their adress and make changes in their value using pointers.So that the changes made in the function reflect in the original value.

//Modified program using pointer
#include <stdio.h>

//add is the short name for address
// Returning multiple values using pointers
void compare(int a, int b, int *greater, int *smaller)
{
    if (a > b)
    {
        *greater = a;
        *smaller = b;
    }
    else
    {
        *greater = b;
        *smaller = a;
    }
}

//driver code
int main()
{
    int a, b, greater, smaller;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    //the last two arguments are passed
    //by giving addresses

    compare(a, b, &greater, &smaller);
    printf("Greater = %d\n", greater);
    printf("Smaller = %d", smaller);
    return 0;
}

//output
//enter two numbers: 10 20
//the greater number is 20
//returning multiple values using structures: We can return multiple values from a function using structures.

//modified program using structures
// Returning multiple values using structures
struct greaterSmaller
{
    int greater;
    int smaller;
};

typedef struct greaterSmaller grSm;

grSm compareStruct(int a, int b)
{
    grSm s;
    if (a > b)
    {
        s.greater = a;
        s.smaller = b;
    }
    else
    {
        s.greater = b;
        s.smaller = a;
    }
    return s;
}

//driver code
int main()
{
    int a, b, greater, smaller;
    struct result;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    // Using pointers
    compare(a, b, &greater, &smaller);
    printf("Greater (using pointers) = %d\n", greater);
    printf("Smaller (using pointers) = %d\n", smaller);

    // Using structures
    grSm result = compareStruct(a, b);
    printf("Greater (using structures) = %d\n", result.greater);
    printf("Smaller (using structures) = %d\n", result.smaller);

    return 0;
}

//output
//enter two numbers: 10 20
//the greater number is 20

//returning multiple values using arrays: We can return multiple values from a function using arrays.

//modified program using arrays
#include <stdio.h>

//store the greater and smaller number in array
void compare(int a, int b, int res[])
{
    if (a > b)
    {
        res[0] = a;
        res[1] = b;
    }
    else
    {
        res[0] = b;
        res[1] = a;
    }
    return res;
}

//Driver code

int main()
{
    int a, b, greater, smaller;
    struct greaterSmaller result;
    int arr[2];

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    // Using pointers
    compare(a, b, &greater, &smaller);
    printf("Greater (using pointers) = %d\n", greater);
    printf("Smaller (using pointers) = %d\n", smaller);

    // Using structures
    result = compareStruct(a, b);
    printf("Greater (using structures) = %d\n", result.greater);
    printf("Smaller (using structures) = %d\n", result.smaller);

    // Using arrays
    compareArray(a, b, arr);
    printf("Greater (using arrays) = %d\n", arr[0]);
    printf("Smaller (using arrays) = %d\n", arr[1]);

    return 0;
}
//output
//enter two numbers: 10 20
//the greater number is 20
//How to return multiple values from a function in C or C++
