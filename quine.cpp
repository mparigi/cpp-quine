#include <iostream>
#include <string>
#include <vector>
int main() {
	std::vector<std::string> s = {R"#include <iostream>", R"#include <string>", R"#include <vector>", R"int main() {", R"",
												R"s[4] = "std::vector<std::string> s = {";", R"for (auto i = 0; i < s.size(); ++i) {", 
												R"s[4] += R"R"" + s[i] + R"",";",
												R"}", R"s[4] += '};';"
												R"for (auto i = 0; i < s.size(); ++i) {", R"std::cout << s[i] << std::endl;", R"}", R"}"};
	s[4] = "std::vector<std::string> s = {";
	for (auto i = 0; i < s.size(); ++i) {
		s[4] += R"R"" + s[i] + R"",";
	}
	s[4] += '};';
	for (auto i = 0; i < s.size(); ++i) {
		std::cout << s[i] << std::endl;
	}
}