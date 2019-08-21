#ifndef SPXLINT_H
# define SPXLINT_H

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

typedef int (*checkfn)(std::vector<std::string>>&);



#endif // SPXLINT_H
