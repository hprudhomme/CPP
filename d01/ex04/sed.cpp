#include "sed.hpp"

Sed::Sed()
{
}

Sed::~Sed()
{
}

std::string Sed::strReplace(std::string &line, std::string const &search, std::string const &replace)
{
	size_t pos = -1;
	int	replace_len = replace.length();
	int x = 1;

	while ((pos = line.find(search, pos + x)) <= line.length())
	{
		line.erase(pos, search.length());
		line.insert(pos, replace);
		x = replace_len;
	}
	return line;
}

void Sed::replace(std::string const &filename, std::string const &search, std::string const &replace)
{
	std::ifstream file;
	std::ofstream output;
	std::string line;

	if (filename.length() == 0)
		throw "Filename is empty.";
	else if (search.length() == 0)
		throw "Search string is empty.";
	else if (replace.length() == 0)
		throw "Replace string is empty.";
	file.open(filename);
	if (!file.is_open())
		throw "Input File couldn't be opened.";
	output.open(filename + ".replace", std::ios::trunc);
	if (!output.is_open())
		throw "Output File couldn't be opened.";
	while (std::getline(file, line))
	{
		output << Sed::strReplace(line, search, replace);
		if (!file.eof())
			output << '\n';
    }
	file.close();
	output.close();
}
