
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void displayhowToDoTheDo(vector<string> howToDoTheDo)
{
	//cout << "How to do the do" << endl;

	for (const auto& step : howToDoTheDo)
	{
		cout << step << endl;
	}
	
	cout << endl;
}
int main()
{
	vector<string> howToDoTheDo;
	
	int choice = 0; //initialiation of choice variable
	
	while (choice != 9)
	{

		cout << "How to do the do" << endl; 
		cout << "1. Just DO IT!" << endl; 
		cout << "2. Don't EGO Lift" << endl; 
		cout << "3. Be a BRO and do the BRO lifts 6x a Week" << endl; 
		//"4. Follow the RP Hypertrophy App",
		//"5. Don't be a pussy and do the lifts",
		//"6. CREATINE",
		//"7. BROTEIN",
		//"8. MORE PROTEIN",
		//"9. When in doubt, MORE GEAR....MORE GAINZ!"

		std::cin >> choice; 

		switch (choice)
		{
		case 1: 
			howToDoTheDo.push_back("Just DO IT!");
			break;

		case 2:
			howToDoTheDo.push_back("Don't EGO Lift");
			break; 
			
		case 3: 
			howToDoTheDo.push_back("Be a BRO and do the BRO lifts 6x a Week");
			break;

		case 9: 
			cout << "Displayig the list now" << std::endl; 
			break; 

		default: 
			cout << "That is not allowed." << std::endl; 
			break;

		}


		//if (choice == 1)
		//{
		//	howToDoTheDo.push_back("Just DO IT!");
		//}

		//else if (choice == 2)
		//{
		//	howToDoTheDo.push_back("Don't EGO Lift");
		//}

	};

	displayhowToDoTheDo(howToDoTheDo);
}