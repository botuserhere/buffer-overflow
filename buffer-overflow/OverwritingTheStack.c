#include<stdio.h>
#include<stdlib.h>
function1(int i1) {
	char *local_var1_f1 = "Function 1";
	int local_var2_f1 = 0x55667788;
	char buffer[10];
	gets(buffer);
	printf(buffer);
	return 1;
}
int main(int argc, char const *argv[]) {
	char *local_var1 = "Main Function";
	int local_var2 = 0xaabbccdd;
	function1(0x11223344);
	return 0;
}