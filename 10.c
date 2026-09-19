#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main(){
    int i, n;
    int min = 0;
    int max = 10;
    char *x;
    
    printf("Enter a number between [0-10] : ");
    scanf("%d", &n);

    srand(time(NULL));

    int random_num = (rand() % (max - min + 1)) + min;

    if(random_num % 2 == 0){
        x = "even"; 
    }
    else{
        x = "odd";
    }

    printf("\nWheel is spinning , wait!! \n");
    for(i = 5; i >= 0 ; i--){
        Sleep(1 * 1000);
        printf("%d \n", i);

    }

    printf("\nThe ball stopped at: %d (%s) on the wheel \n", random_num,x );

    Sleep(2 * 1000);

    printf("\nWaiting for results....\n\n");

    Sleep(3 * 1000);

    if(random_num % 2 == 0 && n % 2 ==0 || random_num % 2 != 0 && n % 2 != 0){
        printf("You won!!");
    }
    else{
        printf("You lost!");
    }
    return 0;
}