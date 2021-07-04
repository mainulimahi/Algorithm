#include<iostream>
#include<string>
using namespace std;
int main()
{
	float Euro, UsDoller, JapaneseYen, Pound;
	int choice,input;
	string pass, password = "2020";
	cout << "enter your password" << endl;
	cin >> pass;

	if (password == pass)
	{
		cout << "Password matched" << endl;
	}
	else
	{
		cout << "wrong" << endl;
	}
	
	


		cout << endl;
		cout << "############################" << endl;
		cout << "Welcome to Bureau De Change" << endl;
		cout << "############################" << endl;
		cout << endl;


		//while (1)
		//{
		cout << endl;
		cout << endl;
		cout << "1.Convert to Euro" << endl;
		cout << "2.Convert to US Doller" << endl;
		cout << "3.Convert to Japanese Yen" << endl;
		cout << "4.Convert to Pound" << endl;
		cout << endl;
		cout << "Enter your option: ";

		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << endl;
			cout << "1.US Doller to Euro" << endl;
			cout << "2.Japanese Yen to Euro" << endl;
			cout << "3.Pound to Euro" << endl;

			cin >> input;

			switch (input)
			{
			case 1:
				cout << " Enter currency in US Doller" << endl;
				cin >> UsDoller;
				Euro = UsDoller * 0.85;
				cout << "The converted currency is " << Euro << " Euro" << " from " << UsDoller << " UsDoller";
				break;
			case 2:
				cout << " Enter currency in Japanese Yen" << endl;
				cin >> JapaneseYen;
				Euro = JapaneseYen * 0.0081;
				cout << "The converted currency is " << Euro << " Euro" << " from " << JapaneseYen << " JapaneseYen";
				break;

			case 3:
				cout << " Enter currency in Pound" << endl;
				cin >> Pound;
				Euro = Pound * 1.12;
				cout << "The converted currency is " << Euro << " Euro" << " from " << Pound << " Pound";
				break;
			}
			break;
			cout << endl;


		case 2:
			cout << endl;
			cout << "1.Euro to US Doller" << endl;
			cout << "2.Japanese Yen to US Doller" << endl;
			cout << "3.Pound to US Doller" << endl;

			cin >> input;

			switch (input)
			{
			case 1:
				cout << " Enter currency in Euro" << endl;
				cin >> Euro;
				UsDoller = Euro * 1.18;
				cout << "The converted currency is " << UsDoller << " UsDoller" << " from " << Euro << " Euro";
				break;
			case 2:
				cout << " Enter currency in Japanese Yen" << endl;
				cin >> JapaneseYen;
				UsDoller = JapaneseYen * 0.0096;
				cout << "The converted currency is " << UsDoller << " UsDoller" << " from " << JapaneseYen << " JapaneseYen";
				break;

			case 3:
				cout << " Enter currency in Pound" << endl;
				cin >> Pound;
				UsDoller = Pound * 1.13;
				cout << "The converted currency is " << UsDoller << " UsDoller" << " from " << Pound << " Pound";
				break;
			}
			break;

		case 3:
			cout << endl;
			cout << "1.Euro to US Japanese Yen" << endl;
			cout << "2.US Doller to Japanese Yen" << endl;
			cout << "3.Pound to Japanese Yen" << endl;

			cin >> input;

			switch (input)
			{
			case 1:
				cout << " Enter currency in Euro" << endl;
				cin >> Euro;
				JapaneseYen = Euro * 123.56;
				cout << "The converted currency is " << JapaneseYen << " JapaneseYen" << " from " << Euro << " Euro";
				break;
			case 2:
				cout << " Enter currency in US Doller" << endl;
				cin >> UsDoller;
				JapaneseYen = UsDoller * 104.32;
				cout << "The converted currency is " << JapaneseYen << " JapaneseYen" << " from " << UsDoller << " UsDoller";
				break;

			case 3:
				cout << " Enter currency in Pound" << endl;
				cin >> Pound;
				JapaneseYen = Pound * 138.89;
				cout << "The converted currency is " << JapaneseYen << " JapaneseYen" << " from " << Pound << " Pound";
				break;
			}


		case 4:
			cout << endl;
			cout << "1.Euro to Pound" << endl;
			cout << "2.US Doller to Pound" << endl;
			cout << "3.Japanese Yen to Pound" << endl;

			cin >> input;

			switch (input)
			{
			case 1:
				cout << " Enter currency in Euro" << endl;
				cin >> Euro;
				Pound = Euro * 0.89;
				cout << "The converted currency is " << Pound << " Pound" << " from " << Euro << " Euro";
				break;

			default:
				cout << "wrong input";
			case 2:
				cout << " Enter currency in US Doller" << endl;
				cin >> UsDoller;
				Pound = UsDoller * 0.75;
				cout << "The converted currency is " << Pound << " Pound" << " from " << UsDoller << " UsDoller";

				break;


			case 3:
				cout << " Enter currency in Japanese Yen" << endl;
				cin >> JapaneseYen;
				Pound = JapaneseYen * 0.0072;
				cout << "The converted currency is " << Pound << " Pound" << " from " << JapaneseYen << " JapaneseYen";
				break;

			}

		default:
			cout << "wrong input";
		}
		//break;
	//}
}