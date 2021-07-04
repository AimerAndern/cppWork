#include <csignal>
#include <string>
#include <cmath>
#include <tuple>
#include <cstdio>
#include <iostream>
#include <memory>
using namespace std;

#include <boost/algorithm/string.hpp>
#include <sstream>

int main() {
	string words[] = { "Hello","World" };

	ostringstream oss;
	oss << "<ul>\n";
	for (auto& w : words)
		oss << " <li>" << w << "</li>\n";
	oss << "</ul>";
	cout << oss.str() << endl;

	return 0;
}