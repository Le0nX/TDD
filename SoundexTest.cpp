#include <string>
#include "Soundex.h"
#include "gmock/gmock.h"

using namespace ::std;

class SoundexEncoding: public testing::Test{
public:
	Soundex soundex;
};

TEST_F(SoundexEncoding, RetainsSoleLetterOfOneLetterWord){

	ASSERT_THAT(soundex.encode("A"), testing::Eq("A000"));
}

TEST_F(SoundexEncoding, RetainsZerosLetterOfOneLetterWord){

	ASSERT_THAT(soundex.encode("I"), testing::Eq("I000"));
}

