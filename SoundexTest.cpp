#include <string>
#include "Soundex.h"
#include "gmock/gmock.h"


class SoundexEncoding: public testing::Test{
public:
	Soundex soundex;
};

TEST_F(SoundexEncoding, ReplacesConsonantsWithAppropriateDigits){
	ASSERT_THAT(soundex.encode("Ax"), testing::Eq("A200"));
}

TEST_F(SoundexEncoding, IgnoresNonAlphabetics) {
	ASSERT_THAT(soundex.encode("A#"), testing::Eq("A000"));
}
