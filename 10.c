#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main(){
    int i;
    char n;
    int min = 0;
    int max = 10;
    char *x;
    int money = 1000, bet;
    while(money > 0){

        printf("Enter a number between [0-10] / Type N to quit: ");


        scanf(" %c", &n);

        if(n == 'N'){
            printf("Quitting..");
            break;
        }

        printf("Enter the amount of money u want to bet: ");
        fflush(stdin);
        scanf("%d", &bet);

        if(bet > money){
            printf("\nYou took loan from bank to pay for this!\n");
        }

        srand(time(NULL));

        int random_num = (rand() % (max - min + 1)) + min;

        if(random_num % 2 == 0){
            x = "even"; 
        }
        else{
            x = "odd";
        }

        printf("\nWheel is spinning , wait!! \n");
        for(i = 3; i >= 0 ; i--){
            Sleep(1 * 1000);
            printf("%d \n", i);
        }

    
        printf("\nThe ball stopped at: %d (%s) on the wheel \n", random_num,x );


        Sleep(2 * 1000);

    
        printf("\nWaiting for results....\n\n");


        Sleep(3 * 1000);

    if(random_num % 2 == 0 && n % 2 ==0 || random_num % 2 != 0 && n % 2 != 0){
        printf("You won!!");
        money = money + bet; 
    }

    else{
        printf("You lost!");
        money = money - bet;
    }

    printf("\nYou have $%d left\n", money);
    }

    printf("\nYour total money is: %d", money);
    return 0;
}
