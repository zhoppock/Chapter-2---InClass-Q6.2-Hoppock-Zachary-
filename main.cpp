//Hoppock, Zachary
//address.cpp
//9/13/2020
//Outputs details of a street address
//Version #2
#include <iostream>
using namespace std;

int main()
{
  string number; 
  string street_name;
  string street_type;

  string city;
  string state;
  string zip;

  cout << "Type in your address number, street name, and street type: "; //If the street name has multiple words, use an underscore "_" between each word
  cin >> number >> street_name >> street_type; // 123 First Street
  string address_part_1 = number + " " + street_name + " " + street_type;
  
  cout << "Type in your city, state, and zip code: "; //If the city has multiple words, use an underscore "_" between each word
  cin >> city >> state >> zip; // Alta Loma, CA 99999
  string address_part_2 = city + ", " + state + " " + zip;
  
  cout << "\033[2J\033[0;0H";

  cout << "What is your street address?" << endl;
  cout << address_part_1 << endl;
  cout << "What is your city, state, and Zip?"<< endl;
  cout << address_part_2;

  return 0;
}