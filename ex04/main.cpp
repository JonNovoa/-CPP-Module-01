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