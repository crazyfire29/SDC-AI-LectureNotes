#include <stdio.h>


#include "random_generator.h"
#include "dice.h"
#include "player.h"
#include "battle.h"
int main(void)
{

	char player1[] = "ö��";
	char player2[] = "¯��";

	set_player1_name(player1);
	set_player2_name(player2);
	print_player1_name();
	print_player2_name();

	battle(player1, player2);

	dice_roll();
	print_dice_number();





}