#include "function.h"
#include <windows.h>

int main()
{
	char str[] = "hi";
	char** pStr = (char**)&str;
	common_factor_test();
	//fail_unit_65();
	intger_include_test();
	integer_mask_include_test();
	integer_mask_test(2, pStr);
	integer_test(2, pStr);
	integer_traits_include_test();
	integer_traits_test(2, pStr);
	static_log2_include_test();
	static_log2_test(2, pStr);
	static_min_max_include_test();
	static_min_max_test(2, pStr);
	system("pause");

}