#include<stdio.h>
#include<stdlib.h>
function3 (int i1) {
	char *local_var_f3 = "Function 3";
	return 3;
}
function2 (int i2) {
	char *local_var_f2 = "Function 2";
	function3(0x33333333);
	return 2;
}
function1 (int i1) {
	char *local_var_f1 = "Function 1";
	function2(0x22222222);
	return 1;
}
int main(int argc, char *argv[]) {
	char *local_var_main = "Main Function";
	function1(0x11111111);
	return 0;
}