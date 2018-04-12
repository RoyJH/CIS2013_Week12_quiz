#include <iostream>
#include <cstring>
using namespace std;
string action;
bool looped=true;
class newHouse{
	public:
		string color;
		int doors;
		int windows;
		int car_ports;
		int year;
		int value;
		int size;
		void print(){
			cout <<color<< "house built in "<< year<< " with " <<windows<<" windows, "<<doors<<" doors, "<<car_ports<<" car ports"<<" sized at "<<size<<"sq ft."<<endl;
		}
		string get_color(){
			cout<< "What color should the house be?"<<endl;
			cin >> color;
			return color;
		}
		int get_doors(){
			cout << "How many doors should the house have?"<<endl;
			cin>> doors;
			return doors;
		}
		int get_windows(){
			cout << "How many windows should the house have?"<<endl;
			cin>> windows;
			return windows;
		}
		int get_ports(){
				cout << "How many car ports will the house have?"<<endl;
			cin>> car_ports;
			return car_ports;
		}
		int get_year(){
			cout << "In what year was the house built?"<<endl;
			cin>> year;
			return year;
		}
		int get_size(){
			cout << "How large is would you like the house to be?\n";
			cout << "Enter size in square feet.";
			cin>> size;
			
			return size;
		}
		int get_value(){
			value=windows*350+value;
			value=doors*500+value;
			value=year*750+value;
			value=car_ports*2000+value;
			value=size*2500+value;
			cout<<value;
			return value;
		}
};

newHouse house;

void list();

int main (){
	
	
	
	cout<< "So, you're interested in having a new house built?"<<endl;
	cout<< "Well why don't you provide some basic information to get started?"<<endl;
	cout<< "What would you like to set first? Input option from list above."<<endl;
	list();
	cin>>action;

	while (looped==true){
		if (action=="blank"){
			cout<< "What would you like to set first? Input option from list above."<<endl;
			cin>>action;
		}
		else if (action=="color"){house.get_color();}
		else if (action=="doors"){house.get_doors();}
		else if (action=="windows"){house.get_windows();}
		else if (action=="carports"){house.get_ports();}
		else if (action=="year"){house.get_year();}
		else if (action=="size"){house.get_size();}
		else if (action=="value"){house.get_value();}
		else if (action=="exit"){exit;}
		else cout<<"Unsupported action, enter another command or enter list to display options";
		action = "blank";
	}
	
}

bool exit(){
	looped=false;
	return looped;
}

void list(){
	cout<<"color"<<endl;
	cout<<"doors"<<endl;
	cout<<"windows:"<<endl;
	cout<<"carports"<<endl;
	cout<<"year"<<endl;
	cout<<"size"<<endl;
	cout<<"value"<<endl;
	cout<<"exit"<<endl;
	action = "blank";
}