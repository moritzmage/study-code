#include <stdio.h>
#include <string.h>

int main()
{
    /*
    -------------------Blackjack-----------------------
    ToDo: 
    -ace usable as 11 & 1
    -seed for random numbers


    */

    int i_deck_card_array[2][13] = { // int array with list of card values, amount of them left avaiable
        {11, 10, 10, 10, 10, 9, 8, 7, 6, 5, 4, 3, 2}, 
        {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4}
    };
    int i_shuffled_card_array[52]; // array later used fo the suffled card deck
    int i_used_card_amount = 0;
    int i_player_card_amount = 0;
    int i_player_value_sum = 0;
    char c_temp_user_input = ' ';
    int i_hold = 0;

    for(int i=0; i<52; i++) // shuffling cards
    {
        int i_temp_card_number;

        do
        {
            i_temp_card_number = rand()%13;
        } while (i_deck_card_array[1][i_temp_card_number] <= 0); // choosing other random card if all of that type used up
        
        i_shuffled_card_array[i] = i_deck_card_array[0][i_temp_card_number];
        i_deck_card_array[1][i_temp_card_number] -= 1;
    }

    printf("\n-----------------------------Welcome to Blackjack-----------------------------");

    printf("\n\nYour cards:\n[%d] [%d]", i_shuffled_card_array[i_used_card_amount],i_shuffled_card_array[i_used_card_amount+1]);
    i_used_card_amount += 2;
    i_player_card_amount += 2;

    i_player_value_sum = 0;
    for (int i=0; i<i_player_card_amount; i++)
    {
        i_player_value_sum += i_shuffled_card_array[i];
    }
    printf("\nYou have %d on your hand!\n", i_player_value_sum);

    do
    {
        printf("\nHit [a] or Hold [b]\n");

        do
        {
            scanf(" %c", &c_temp_user_input);
            if(c_temp_user_input != 'a' && c_temp_user_input != 'b')
            {
                printf("\nFalse Input!!!\nHit [a] or Hold [b]\n");
            }
        } while (c_temp_user_input != 'a' && c_temp_user_input != 'b');

        if(c_temp_user_input == 'a') // hit
        {
            printf("\n\nYour cards:\n");
            for(int i=0; i<i_player_card_amount+1; i++)
            {
                printf("[%d] ", i_shuffled_card_array[i]);
            }
            i_player_card_amount += 1;
        }
        else // hold
        {
            i_hold = 1;
        }

        i_player_value_sum = 0;
        for (int i=0; i<i_player_card_amount; i++)
        {
            i_player_value_sum += i_shuffled_card_array[i];
        }
        printf("\nYou have %d on your hand!\n", i_player_value_sum);

    } while (i_player_value_sum <= 21 && i_hold == 0);

    if(i_player_value_sum > 21)
    {
        printf("\nYou lost!!!");
    }
    else if(i_player_value_sum == 21)
    {
        printf("\nBLACKJACK!!!");
    }

    printf("\n\n\n");



    return 0;
}