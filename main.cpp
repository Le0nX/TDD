#include "gmock/gmock.h"
#include <stdio.h>

int main(int argc, char** argv) {

	testing::InitGoogleMock(&argc, argv);
	return RUN_ALL_TESTS();
	return 0;
}