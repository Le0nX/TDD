#ifndef Soundex_h
#define Soundex_h

class Soundex{
public:
	std::string encode(const std::string& word) const{
		return zeroPad(word);
	}
private:
	std::string zeroPad(const std::string& word) const{
		return word + "000";
	}
};

#endif /* Soundex_h */