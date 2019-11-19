#include <iostream>
#include <string>

using namespace std;
int main() {
	char arr[10][51];
	int i = 0, j = 0;

	char c = getchar();

	while (c != '.') {
		if (c == '.') {
			//arr[i][j] = '\n';
			i++;
			j = 0;
			while (c == ' ') c = getchar();

		}
		arr[i][j] = c;
		c = getchar();
		j++;
		//cout << arr << endl;
		cout << c << endl;


	}
	
	return 0;
}