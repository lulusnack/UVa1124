#include <iostream>
#include <string>
using namespace std; // 使用std的命名空間。
int main()
{
	string input;
	while (getline(cin, input)) // 輸入並輸出一模一樣的字串。
	{
		cout << input << endl;
	}
	return 0;
} // 結束。