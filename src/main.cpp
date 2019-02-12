#include <iostream>
#include <string>
#include "rdna.hpp"

using namespace std;

int main()
{
    int seed = -1, n = -1;
    string bases = "";


    cout<<"\n Welcome to the DNA generator\n\n\t Please enter a seed, the letter bases to be used (e.g. TGAC) \n\t and the length of the DNA sequence to be generated\n\n\t>>> ";   

    cin>>seed>>bases>>n;//read the three inputs

    cout <<"\n\n Output: \n\t"<<randDNA(seed,bases,n)<<endl; //print output  
}

