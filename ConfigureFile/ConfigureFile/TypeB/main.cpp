#include "Runner.h"
#include "Flash.h"

#include "version.h"

#include <iostream>

int main()
{
	std::cout << VersionNumber << std::endl;
	InitialiseRunner();
	InitialiseFlash();
}
