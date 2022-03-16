#include <string>
#include <iostream>
#include <fstream>

int put_error(std::string str)
{
	std::cout << str << std::endl;
	return (1);
}

std::string	make_newline(std::string buf, std::string find, std::string replace)
{
	std::size_t	f;
	
	f = 0;
	while ((f = buf.find(find, f)) != std::string::npos)
	{
		buf.erase(f, find.length());
		buf.insert(f, replace);
		f = f + replace.length();
	}
	return (buf);
}

int main(int argc, char **argv)
{
	std::string	filename;
	std::string	nfilename;
	std::string	find;
	std::string	replace;
	std::string buf;
	std::string temp;

	if (argc != 4)
		return (put_error("arg not 3"));
	filename = argv[1];
	find = argv[2];
	replace = argv[3];
	if (find.empty() || replace.empty())
		return (put_error("empty input"));
	if (find.compare(replace) == 0)
		return (put_error("input must be diff"));
	std::ifstream file;
	file.open(argv[1]);
	if (file.fail())
		return (put_error("input file open error"));
	nfilename = filename;
	nfilename += ".replace";
	std::ofstream nfile;
	nfile.open(nfilename);
	if (nfile.fail())
		return (put_error("output file open error"));
	while (getline(file, buf))
	{
		temp = make_newline(buf, find, replace);
		nfile << temp << std::endl;
	}
	file.close();
	nfile.close();
	return (0);
}
