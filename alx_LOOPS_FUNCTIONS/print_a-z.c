#include <stdio.h>

//to print the alphabet a-z using the for loop

int main() 
{

char alphabet;
    for (alphabet = 'a'; alphabet <= 'z'; alphabet++)

    printf("%c\n", alphabet);


    return 0;
}



#include <stdio.h>

//to print 1-20 using the while loop

int main() 
{

int x = 1;

while (x <= 20)
    {
        printf("%i\n", x);
        x++;
    }

    return 0;
}