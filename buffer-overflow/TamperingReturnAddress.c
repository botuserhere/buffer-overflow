#include<stdio.h>
#include<stdlib.h>
ShouldNotExecute() {
	char *message = "Should Not Execute";
	printf(message);
	return 0;
}
function1(int i1) {
	char *local_var_f1 = "Function 1";
	int local_var2_f1 = 0x55667788;
	return 1;
}
int main(int argc, char *argv[]) {
	char *local_var1 = "Main Function";
	int local_var2 = 0xaabbccdd;
	function1(0x11223344);
	return 0;
}