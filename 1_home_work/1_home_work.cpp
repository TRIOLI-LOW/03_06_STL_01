

#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <vector>
int main()
{
	std::string str{ "Hello, world!" };
	std::cout << "[IN]: " << str << std::endl;

	std::map<char, int> arr;

	for (char c : str) {
		if (arr.find(c) == arr.end()) {
			arr[c] = 1;
		}
		else {
			++arr[c];
		}
	}
	std::vector <std::pair<char, int>> vec{arr.begin(), arr.end()};
	std::sort(vec.begin(), vec.end(), [&vec](const auto& a, const auto& b) { return a.second > b.second; });


	for (const auto& num : vec) {
		std::cout << num.first << ": " << num.second << std::endl;
	}




}

