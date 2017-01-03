#ifndef WORD_MANIP_H_
#define WORD_MANIP_H_

#include <vector>
#include <iostream>
#include <fstream>
#include <vector>
#include <ctime>
#include <cstdlib>

namespace word_manip
{
	class Word
	{
	private:
		std::string *eng;
		std::string *trans;
	public:
		Word(std::string *, std::string *);
		~Word();

		std::string * getEng() const;
		std::string * getTrans() const;
	};

	bool checkSym(const char symb);

	void readWordsFile(std::vector<Word *> *);
	void showWords(const std::vector<Word *> *);
	void clearWordsVec(std::vector<Word *> *);
	void showRandom(const std::vector<Word *> *);

}

#endif /* WORD_MANIP_H_ */
