#include <iostream>
#include <random>
#include <string>
using namespace std;


string randDNA (int seed, string bases, int n) 
	{
		if (bases.length() < 1)			//If the legnth of the combined base is less than one letter...
		{					


			cout << "Please enter at least one (1) character" << endl;
			return "";
		}



		mt19937 eng1(seed);

		unsigned int min = 0, max = bases.length()-1;	
	  	uniform_int_distribution<unsigned int> uni(min,max);
		string DNA = "";


		for(int i = 0; i < n; i++)		//Loop repeats until 'n', which is determined by the user
		{ 
			int randIndex = uni(random);
			DNA += bases[randIndex];	//This randomly adds characters one from the user-entered base, to the string "DNA"
		}

  		return DNA;
}
