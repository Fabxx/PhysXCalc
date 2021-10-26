/**
 * @file main.cpp
 * @author Prox_y
 * @brief Welcome to Physcal, physcal it's a program that let's you calculate
 * 		  physics values with different formulas. Soon we'll provide a GUI.
 * 		 NOTE: counters in this program are not initialized to 0, so when we enter again
 *    		   into a function, the counter will resume from the last position saved, from
 * 			   there we'll put more values.
 * @version 0.1
 * @date 2021-10-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <libs.h>

int main() {
	while (input::choice <= 0 || input::choice > 7){
		system("cls");
	   input::menu_init();
	   if (input::choice != 0){
		   switcher::switchfunc();
	   } 
	}
		system("pause");
	
		return 0;
}

//TODO fix tetha angle not calculating properly.
//TODO fix scalar/vectorial product not displaying correct value.
//TODO fix clear function not working on vectors. (sometimes works sometimes not, dunno why)
//TODO fix resuming calculations only for new inserted values.