#include <iostream>
#include<string>
#include <cstdlib> //need to use fun like rand() and srand()...
#include <ctime> //allow us to used the current time...
using namespace std;

int main() {
	//store pass length...
	int length;
	//disply pass length...
	cout<<"enter the password length"<<endl;
	//take pass length...
	cin>>length;
	//program will make pass from this list....
	string characters="abcdefghijeklmnop123456789@%$&";
	//random pass will be generated using current time
	srand(time(0));
	//loop runs according to user length...
	for(int i=0;i<length;i++){
		//...generat rand position from chr list
		int index = rand()% characters.length();
		//print chractr at random position........
		cout<<characters[index];
	}
	
	return 0;

}

