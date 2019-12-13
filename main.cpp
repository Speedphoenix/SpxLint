#include "spxlint.h"

#include <sstream>

using namespace std;

Config Config::globalConfig = nullptr;

Config::Config(int argc, char **argv)
{

}

FileCheck::FileCheck(char *filename)
{
	ifstream fic(argv[i]);
	readFile(fic);
}

FileCheck::FileCheck(istream& what)
{
	readFile(what);
}

void FileCheck::readFile(istream& what)
{
	string inter;
	while (getline(what, inter))
	{
		fullFile.push_back(inter);
	}
}

int checkLineLength(vector<string>& fullFile)
{
	int rep = 0;
	for (int i = 0; i < fullFile.size(); i++)
	{
		if (fullFile[i].length > A_VALUE)
		{
			cerr << "stuff";
			rep++;
		}
	}
	return rep;
}

int main(int argc, char **argv)
{
	Config::globalConfig = new Config(argc, argv);
	// argv[0] is the binary name
	if (argc <= 1)
	{
		dofile(cin);
	}
	for (int i = 1; i < argc; i++)
	{
		// need to check this is a file first
		ifstream fic(argv[i]);
		dofile(fic);
	}
	return 0;
}
