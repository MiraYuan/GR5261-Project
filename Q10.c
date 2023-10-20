#include <stdbool.h>
#include <stdio.h>

//Q1
bool checkforx(char *pa, int s) {
    for (int i = 0; i < s; i++) {
        if (pa[i] == 'x') {
            return true;
        }
    }
    return false;
}

//Q2
int main() {
    char a1[] = {'o', 'a', 'x', 'o'};
    char a2[] = {'o', 'a', 'x', 'o'};
    a2[2] = 'k';  
    int s1 = sizeof(a1);
    int s2 = sizeof(a2);
    
    bool yes = checkforx(a1, s1);
    if (yes)
    {
        printf("arr1 contains 'x'\n");
    } 
    else 
    {
        printf("arr1 does not contain 'x'\n");
    }

    bool no = checkforx(a2, s2);
    if (no) 
    {
        printf("arr2 contains 'x'\n");
    } 
    else 
    {
        printf("arr2 does not contain 'x'\n");
    }

    return 0;
}