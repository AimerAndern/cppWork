#include <csignal>
#include <string>
#include <cmath>
#include <tuple>
#include <cstdio>
#include <iostream>
#include <memory>
#include <vector>
using namespace std;

#include <boost/algorithm/string.hpp>
#include <sstream>

// adapter pattern
class String {
	std::string s;
public:
	String(const string&s):s(s){}

	String to_lower_copy() const{
		return {boost::to_lower_copy(s)};
	}

	vector<String> split(const string& delimiter = " ") const {
		vector<string> parts;
		boost::split(parts, s, boost::is_any_of(delimiter), boost::token_compress_on);
		return vector<String>(parts.begin(), parts.end());
	}
	size_t get_length() const { return s.length(); }
};

int main() {
	String s{"Hello     World"};


	for (auto& w : s.to_lower_copy().split())
		cout << w.get_length() << endl;

	return 0;
}