#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() 
{
  //variables
  string myName, myDestination;
  int numberNights;
  double airfarePrice, hotelRatePerNight, hotelCost, micellaneousCost, totalCost;
  //process
cout << "Enter your full name\n:";
 getline(cin, myName);
cout << "Enter your destination\n:";
 getline(cin,myDestination);
  cout << "Enter the price of the airfare\n:";
cin >> airfarePrice;
  cout << "Enter the hotel cost per night\n:";
  cin >> hotelRatePerNight;
  cout << "How many nights are you staying?\n:";
  cin >> numberNights;
  cout << "enter any micellaneous cost you expect to incur\n:";
  cin >> micellaneousCost;
 //math
  hotelCost = hotelRatePerNight*numberNights;
  totalCost=hotelCost+airfarePrice+micellaneousCost;
//end product
  cout<< "your name is: " << myName<<endl;
  cout<< "your destination: "<< myDestination<<endl;
  cout<< "your airfare cost is: "<< "$"<<airfarePrice<<endl;
  cout<< "Your hotel rate is: " <<"$"<< hotelRatePerNight;
  cout<< "your hotel cost is: "<<"$"<< hotelCost<<endl;
  cout<< "your micellaneous cost are: "<<"$"<< micellaneousCost<<endl;
cout<<endl;
  cout<< "your total trip cost are estimated to be:"<<"$"<< totalCost<<endl;
   
  return 0;
}