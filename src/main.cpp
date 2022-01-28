/**
 * @file main.cpp
 * @author Prox_y
 * @brief Welcome to Physcal, physcal it's a program that let's you calculate
 * 		  physics values with different formulas. Soon we'll provide a GUI.
 * 		 NOTE: counters in this program are not initialized to 0, so when we enter again
 *    		   into a function, the counter will resume from the last position saved, from
 * 			   there we'll put more values.
 * 
 * 				THIS PROGRAM IS PROVIDED AS IS, IT'S NOT GUARANTEED IT WILL WORK IN ALL CASES, THE PROGRAM IS PROVIDED
 *   			UNDER GNU GENERAL PUBLIC LICENSE V3.
 * @version 0.1
 * @date 2021-10-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "stdlibs.h"
#include "menu.h"
#include "switcher.h"


int main(int argc, char **argv) {

	while (graphics::choice <= 0 || graphics::choice > 3){
	   graphics::menu_init();
	   if (graphics::choice != 0){
		   switcher::switchfunc();
	   } 
	}
	
		return 0;
	
}



//TODO moto uniforme/accelerato
//TODO rielaborare menu con categorie delle funzioni (eg VETTORI, MOTI, ecc).