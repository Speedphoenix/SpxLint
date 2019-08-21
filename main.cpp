#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#include "spxlint.h"

using namespace std;

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

void readfile(istream& what, vector<string>& toFill)
{
	string inter;
	while (getline(what, inter))
	{
		toFill.push_back(inter);
	}
}

int dofile(istream& what)
{
	vector<string> fullFile;
	readfile(what, fullFile);
}

int main(int argc, char **argv)
{
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
