#include "word_manip.h"

namespace word_manip
{
	Word::Word(std::string *eng_, std::string *trans_)
	{
		this->eng = new std::string(*eng_);
		this->trans = new std::string(*trans_);
	}

	Word::~Word()
	{
		delete eng;
		delete trans;
	}

	std::string * Word::getEng() const
	{
		return eng;
	}

	std::string * Word::getTrans() const
	{
		return trans;
	}

	bool checkSym(const char symb)
	{
		std::string engLine = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

		int enLen = engLine.length()-1;

		for (int i=0; i<enLen; ++i) {
			if(symb == engLine[i])
			{
				return true;
			}
		}

		return false;

	}
}
