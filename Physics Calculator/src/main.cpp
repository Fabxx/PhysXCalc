#include <mainlibs.h>
#include <mainlibs2.h>

int main() {
	structure struc;
	results res;
	while (struc.choice == 0) {
		menu::menu_init(struc, res);
	}
	
	return 0;
}