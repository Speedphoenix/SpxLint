#include "spxlint.h"

using namespace std;

void FileCheck::check1()
{
	for (int i = 0; i < fullFile.size(); i++)
	{
		if (fullFile.length > Config::globalConfig.maxLineLength)
			errors.push_back(Error(i, 1));
	}
}
