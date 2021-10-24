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
