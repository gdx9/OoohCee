#ifndef WORD_MANIP_H_
#define WORD_MANIP_H_

#include <vector>
#include <iostream>

namespace word_manip
{
	class Word
	{
	private:
		std::string *eng;
		std::string *trans;
	public:
		Word(std::string *eng_, std::string *trans_);
		~Word();

		std::string * getEng() const;
		std::string * getTrans() const;
	};

	bool checkSym(const char symb);

}

#endif /* WORD_MANIP_H_ */
