#include <iostream>
#include <list>

using namespace std;

int main(void)
{
	

	list<char> str;
	char temp;
	string s;
	cin >> s;
	for (size_t i = 0; i < s.length(); ++i)
		str.push_back(s[i]);

	int command;
	cin >> command;
	list<char>::iterator cursor = str.end();

	while (command > 0) {
		--command;
		cin >> temp;
		switch (temp)
		{
		case 'L':
			if (cursor != str.begin())
				--cursor;
			break;
		case 'D':
			if (cursor != str.end())
				++cursor;
			break;
		case 'B':
			if (cursor != str.begin()) {
				auto temp_cursor = --cursor;
				cursor++;
				str.erase(temp_cursor);
			}
			break;
		case 'P':
			cin >> temp;
			//--cursor;
			str.insert(cursor, temp);
		default:
			break;
		}
	}
	for (auto i = str.begin(); i != str.end(); ++i)
		cout << *i;


	return 0;
}