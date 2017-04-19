// This is just a check to see if I remembered any C at all.
// Please see license file in github.com/cbasoft/Testing to
// get the licensing info for this file.
/////////////////////////////////////////////////////////////

#include <stdio.h>
int main() {
	// Variables.
	// Change a "1" to a "2" to force it through the error block.
	int $check1 = 1;
	int $check2 = 1;

	// Main block goes from here.
	if ($check1 == $check2) {
		printf("Random check.\n\"Assuming\" all goes to plan. That is and if it works.\n");
		getchar();
		return(0);
	}
	// Our error block.
	else {
		printf("Just pushing for an error code.\n");
		getchar();
		return(1);
	}
}
