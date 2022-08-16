//Creator:Alexander Rayer
//Program:Dog Daycare

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	string name, email, phoneNumber, dogName, breed;
	int sizeOfDogInput;
	double small = 29.99;
	double medium = 38.99;
	double large = 47.99;
	double extralarge = 56.99;
	int weightOfDog;
	double weightSmall = 3.99;
	double weightMedium = 5.99;
	double weightLarge = 7.99;
	double weightExtraLarge = 9.99;
	int extra;
	double bathandShampoo = 15.00;
	double hairCut = 35.00;
	double nailClip = 25.00;
	double dogWalk = 5.00;
	double subtotal = 0;
	int numberOfDays;
	int age;
	int discount;


	cout << "|     Welcome to Cresent city Doggie Daycare      |" << endl;
	cout << "|                                                 |" << endl;
	cout << "|                                                 |" << endl;
	cout << "|                                                 |" << endl;

	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;


	//Size of dog input 

	cout << "What's the size of your dog: \n\nPlease enter a number 1-4:\n1: Small: $29.99 per day\n2: Medium: $38.99 per day\n3: Large: 47.99 per day\n4: Extra large: 56.99 per day\n" << endl;

	cin >> sizeOfDogInput;

	while (sizeOfDogInput < 1 || sizeOfDogInput > 4)
	{
		cout << "Please enter a number 1 through 4" << endl;
		cout << "\nPlease enter a valid number selection";
		cin >> sizeOfDogInput;
	}


	if (sizeOfDogInput == 1)
	{
		subtotal += small;
	}
	else if (sizeOfDogInput == 2)
	{
		subtotal += medium;
	}
	else if (sizeOfDogInput == 3)
	{
		subtotal += large;

	}
	else if (sizeOfDogInput == 4)
	{
		subtotal += extralarge;
	}

	cout << "" << endl;
	cout << "" << endl;
	cout << "Ok, we've added that to your total" << endl;
	cout << "" << endl;




	//Weight of dog Input 

	cout << "\nPlease enter the weight of your dog: \n\nPlease enter a number 1-4 again:\n1:0-20 pounds: $3.99 per day\n2:21-30 pounds: $5.99 per day\n3:31-40 pounds: $7.99 per day\n4:40 and above: $9.99 per day\n" << endl;
	cin >> weightOfDog;

	while (weightOfDog < 1 || weightOfDog > 4)
	{
		cout << "Please enter a number 1 through 4" << endl;
		cout << "\nPlease enter a valid number selection";
		cin >> weightOfDog;
	}

	if (weightOfDog == 1)
	{
		subtotal += weightSmall;
	}
	else if (weightOfDog == 2)
	{
		subtotal += weightMedium;
	}
	else if (weightOfDog == 3)
	{
		subtotal += weightLarge;
	}
	else if (weightOfDog == 4)
	{
		subtotal += weightExtraLarge;
	}



	cout << "Got it! Your fees are now " << subtotal << ": per day with the addition of the weight fees for your dog." << endl;



	//Extra input


	cout << "\nSelect an extra to add to your Dog's stay: \n\nSelect the number: \n1:Bath and Shampoo: $15.00 \n2:Hair Cut: $35.00 \n3:Nail Clipping: $25.00 \n4:Walk around the block: $5.00 \n" << endl;
	cin >> extra;


	while (extra < 1 || extra > 4)
	{
		cout << "Please enter a number 1 through 4" << endl;
		cout << "\nPlease enter a valid number selection";
		cin >> extra;
	}

	if (extra == 1)
	{
		subtotal += bathandShampoo;
	}
	else if (extra == 2)
	{
		subtotal += hairCut;
	}
	else if (extra == 3)
	{
		subtotal += nailClip;
	}
	else if (extra == 4)
	{
		subtotal += dogWalk;
	}


	cout << "This addition will bring your total to:" << subtotal << "." << endl;
	cout << "" << endl;
	cout << "" << endl;




	//Number of days input

	cout << "How many days is your dog going to be staying with us? ";
	cin >> numberOfDays;

	subtotal = numberOfDays * subtotal;

	cout << "" << endl;
	cout << "" << endl;

	cout << "You entered: " << numberOfDays << " so that will bring you total to: " << subtotal << endl;
	cout << " " << endl;



	//Discount Qualification 

	cout << "Enter age to see if qualify for discount:" << endl;
	cin >> age;


	if (age > 65)
	{
		discount = subtotal * .10;
		cout << "Congrats you qualify for the senior discount" << endl;
	}
	else
	{
		discount = 0;
		cout << "Sorry you dont qualify for a discount" << endl;
	}



	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "That will bring your total to:" << subtotal - discount << " for " << numberOfDays << " days." << endl;




	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;


	cout << "Now that we have given you the total, we need to get you and your dogs information" << endl;
	cout << "" << endl;





	//This saves the information entered to a Text file as a recept.

	ofstream myFile;
	myFile.open("daycare.txt");


	cout << "\nEnter your name:";
	cin >> name;
	cout << "" << endl;
	cout << "\nEnter your email: ";
	cin >> email;
	cout << "" << endl;
	cout << "\nEnter your Phone number:";
	cin >> phoneNumber;
	cout << " " << endl;
	cout << "\nEnter your Dog's name: ";
	cin >> dogName;
	cout << " " << endl;
	cout << "\nEnter the breed of your dog: ";
	cin >> breed;


	cout << "\nYour reciept: ";
	cout << "\n" << name << " ";
	cout << "\n" << email << " ";
	cout << "\n" << phoneNumber << " ";
	cout << "\n" << dogName << " ";
	cout << "\n" << breed << " ";
	cout << "You selected " << numberOfDays << " days " << "";

	cout << "\nPress any button to submit your entries: ";
	myFile << "*******Owners Info*********" << endl;
	myFile <<"Name:"<< name << endl;
	myFile << email << endl;
	myFile << phoneNumber << endl;
	myFile << " " << endl;
	myFile << " " << endl;
	myFile << " " << endl;
	myFile << "*******Dog's Info**********" << endl;
	myFile << dogName << endl;
	myFile << breed << endl;
	myFile << " " << endl;
	myFile << " " << endl;
	myFile << " " << endl;
	myFile << "*******Total***************" << endl;
	myFile << "Your total:" << endl;
	myFile << subtotal << endl;

	myFile.close();
	system("Pause");
	return 0;
}

