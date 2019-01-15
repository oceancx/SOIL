#include <iostream>
extern "C" {
#include <SOIL.h>
}
int main()
{
	SOIL_save_screenshot("",0,0,0,0,0);
	return 0;
}