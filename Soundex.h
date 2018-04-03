#ifndef Soundex_h
#define Soundex_h

#include <stdint.h>

static constexpr uint8_t MAX_CODE_LENGTH{4};

class Soundex{
public:
	std::string encode(const std::string& word) const{
		return zeroPad(head(word) + encodedDigits(word));
	}
private:
	std::string zeroPad(const std::string& word) const{
		auto zerosNeed = MAX_CODE_LENGTH - word.length();
		return word + std::string(zerosNeed, '0');
	}

	std::string encodedDigits(const std::string& word) const{
		if (word.length() > 1) return "1";
		else return "";
	}

	std::string head(const std::string& word) const{
		return word.substr(0,1);
	}
};

#endif /* Soundex_h */
