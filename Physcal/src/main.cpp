/**
 * @file main.cpp
 * @author Prox_y
 * @brief Welcome to Physcal, physcal it's a program that let's you calculate
 * 		  physics values with different formulas. Soon we'll provide a GUI.
 * @version 0.1
 * @date 2021-10-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <libs.h>

int main() {
	while (input::choice == 0){
		system("cls");
	   input::menu_init();
	   if (input::choice != 0){
		   switcher::switchfunc();
	   } 
	}
	 
		system("pause");
	
		return 0;
}
