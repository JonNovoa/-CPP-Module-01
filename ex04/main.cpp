#include <iostream>
#include <fstream>
#include <string>

std::string replaceString(std::string content,std::string s1, std::string s2)
{
	if(s1.empty())
		return content;

	size_t pos = 0;
	while ((pos = content.find(s1, pos)) != std::string::npos)
	{
		content = content.substr(0, pos) + s2 +content.substr(pos + s1.length());
		pos += s2.length();
	}
	return content;
}

std::string readFile(const std::string& filename)
{
	std::ifstream infile(filename.c_str());
	if(!infile.is_open())
	{
		std::cerr << "Error: Cannot open file " << filename << std::endl;
		return "";
	}
	std::string content;
	std::string line;

	while (std::getline(infile, line))
	{
		content += line;
		content += "\n";
	}
	infile.close();
	return content;
}

bool writeFile(const std::string& filename, const std::string& content)
{
	std::ofstream outfile(filename.c_str());

	if (!outfile.is_open())
	{
		std::cerr << "Error: Cannot open file '" << filename << "'" << std::endl;
		return false;
	}
	outfile << content;
	outfile.close();
	return true;
}

int main(int argc, char **argv)
{
	if(argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
		return 1;
	}

	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	if (s1.empty())
	{
		std::cerr << "Error: s1 cannot be empty" << std::endl;
		return 1;
	}

	std::string content = readFile(filename);

	if (content.empty() && filename != "")
	{
		std::ifstream testFile(filename.c_str());
		if (!testFile.is_open())
			return 1;
		testFile.close();		
	}

	std::string newContent = replaceString(content, s1, s2);
	std::string outputFilename = filename + ".replace";
	if (!writeFile(outputFilename, newContent))
		return 1;
	std::cout << "File '" << outputFilename << "' created successfully" << std::endl;
	return 0;	
	
}