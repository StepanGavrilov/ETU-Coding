#include <iostream>
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	
	char Sequence;
	string Check;


	bool Attemp = true;
	
	while (Attemp == true) 
	{
		Sequence = getchar();
		Check = Sequence;
		
		if (Check.length() > 500) 
		{
			cout << "Превышенно количество символов" << endl;
		}
		else if (Check.length() < 1) 
		{
			cout <<"Недостаточное количество символов" <<endl;
		}
		
		

		if (Check == ".")
		{    
			
			cout << "Поставленна точка" << endl;
			cout << Sequence << endl;
			cout << Check << endl;
			Attemp = false;
			break;
		}
		else 
		{
			continue;

		}
	
	
	
	}
	
	
	
	
	return 0;
}