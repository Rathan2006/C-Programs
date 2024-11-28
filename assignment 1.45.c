#include <stdio.h>//program of guessing game
#include <stdlib.h>
#include <time.h>

int main() {

    int num;
    printf("ENTER A NUMBER ");
    scanf("%d",&num);
    srand(time(NULL));

    int random_number = rand();

    printf("Random number: %d\n", random_number);


    if(num==random_number)
    {
        printf("YOU WON");
    }
    else
    {
        printf("YOU LOST");
    }
return 0;

}
