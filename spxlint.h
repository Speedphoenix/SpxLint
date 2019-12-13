#ifndef SPXLINT_H
# define SPXLINT_H

# include <iostream>
# include <utility>
# include <string>
# include <vector>
# include <map>

const char multilineBlocks[][2] = {
	{'{', '}'}
}

const char blocks[][2] = {
	{'{', '}'},
	{'(', ')'},
	{'[', ']'}
}

const char statementEnd[] = {
	';', '{'
}

typedef void (FileCheck::*Checkfn)();

const Checkfn[] = {
	FileCheck::check1
}


class Config
{
	public:
		static Config *globalConfig;

		int maxLineLength = 80;

		Config(int argc, char **argv);
};


struct Error
{
	int line;
	int column;
	int code;

	Error(int _line, int _code, int _column = 0)
		:line(_line), column(_column), code(_code)
	{ }
};


class FileCheck
{
	private:
		std::vector<Error> errors;
		std::vector<std::string> fullFile;

		void check1();

	public:
		FileCheck(char *filename);
		FileCheck(std::istream& what);

		void readFile(std::istream& what);
};


#endif // SPXLINT_H
