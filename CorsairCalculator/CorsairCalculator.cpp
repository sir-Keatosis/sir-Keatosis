// CorsairCalculator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Entity {
	string Name, Species;
	int Health = 20, Health_max = 20, Mana = 0, Mana_max = 0, Strength = 0, Dexterity = 0, Intelligence = 0, Will = 0, Agility = 0, Flight = 0, Stealth = 0, Scent = 0, Hearing = 0, Speech = 0, ArmorClass = 0;
	string Inventory;
	string Spells;
public:
	void test(); // dummy, remove later
				 //set formalities
	void set_Name(string);
	void set_Species(string);
	//get formalities
	string get_Name() { return Name; }
	string get_Species() { return Species; }
	//set stats
	void set_Health(int); //1
	void set_Health_max(int);
	void set_Mana(int); //equal to intelligence
	void set_Mana_max(int);
	void set_Strength(int); //2
	void set_Dexterity(int); //3
	void set_Intelligence(int); //4
	void set_Will(int); //5
	void set_Agility(int); //6
	void set_Flight(int); //7
	void set_Stealth(int); //8
	void set_Scent(int); //9
	void set_Hearing(int); //10
	void set_Speech(int); //11
	void set_ArmorClass(int); //12
	//get stats
	int get_Health() { return Health; }
	int get_Health_max() { return Health_max; }
	int get_Mana() { return Mana; }
	int get_Mana_max() { return Mana_max; }
	int get_Strength() { return Strength; }
	int get_Dexterity() { return Dexterity; }
	int get_Intelligence() { return Intelligence; }
	int get_Will() { return Will; }
	int get_Agility() { return Agility; }
	int get_Flight() { return Flight; }
	int get_Stealth() { return Stealth; }
	int get_Scent() { return Scent; }
	int get_Hearing() { return Hearing; }
	int get_Speech() { return Speech; }
	int get_ArmorClass() { return ArmorClass; }
	//initialization
	void initialize(string);
};

void Entity::test()
{
	cout << "Yes sir this does in fact work" << endl;
}

//set formalities
void Entity::set_Name(string input_name)
{
	Name = input_name;
}
void Entity::set_Species(string input_species)
{
	Species = input_species;
}
void Entity::set_Health(int input_health)
{
	Health = input_health;
}
void Entity::set_Health_max(int input_health_max)
{
	Health_max = input_health_max;
}
void Entity::set_Mana(int input_mana)
{
	Mana = input_mana;
}
void Entity::set_Mana_max(int input_Mana_max)
{
	Mana_max = input_Mana_max;
}
void Entity::set_Strength(int input_Strength)
{
	Strength = input_Strength;
}
void Entity::set_Dexterity(int input_Dexterity)
{
	Dexterity = input_Dexterity;
}
void Entity::set_Intelligence(int input_Intelligence)
{
	Intelligence = input_Intelligence;
}
void Entity::set_Will(int input_Will)
{
	Will = input_Will;
}
void Entity::set_Agility(int input_Agility)
{
	Agility = input_Agility;
}
void Entity::set_Flight(int input_Flight)
{
	Flight = input_Flight;
}
void Entity::set_Stealth(int input_Stealth)
{
	Stealth = input_Stealth;
}
void Entity::set_Scent(int input_Scent)
{
	Scent = input_Scent;
}
void Entity::set_Hearing(int input_Hearing)
{
	Hearing = input_Hearing;
}
void Entity::set_Speech(int input_Speech)
{
	Speech = input_Speech;
}
void Entity::set_ArmorClass(int input_ArmorClass)
{
	ArmorClass = input_ArmorClass;
}

//initialization
void Entity::initialize(string source_file_name)
{
	source_file_name = source_file_name + ".txt";
	ifstream file_source;
	string line;
	int value;
	file_source.open(source_file_name);
	if (file_source.is_open())
	{
		cout << "Reading " << source_file_name << "..." <<endl;
		getline(file_source, line);
		cout << "Reading Name" << endl;
		set_Name(line);
		getline(file_source, line);
		cout << "Reading Species/Caste" << endl;
		set_Species(line);
		getline(file_source, line);
		if (line == "stats")
		{
			cout << "Reading Stats..." << endl;
			bool valid_stat = false;
			getline(file_source, line);
			while (line != "perks")
			{
				valid_stat = false;
				cout << "reading " << line << endl;
				if (line == "Health")
				{
					getline(file_source, line);
					value = stoi(line);
					Health = value;
					Health_max = value;
					valid_stat = true;
				}
				if (line == "Strength")
				{
					getline(file_source, line);
					value = stoi(line);
					Strength = value;
					valid_stat = true;
				}
				if (line == "Dexterity")
				{
					getline(file_source, line);
					value = stoi(line);
					Dexterity = value;
					valid_stat = true;
				}
				if (line == "Intelligence")
				{
					getline(file_source, line);
					value = stoi(line);
					Intelligence = value;
					valid_stat = true;
				}
				if (line == "Will")
				{
					getline(file_source, line);
					value = stoi(line);
					Will = value;
					valid_stat = true;
				}
				if (line == "Agility")
				{
					getline(file_source, line);
					value = stoi(line);
					Agility = value;
					valid_stat = true;
				}
				if (line == "Stealth")
				{
					getline(file_source, line);
					value = stoi(line);
					Stealth = value;
					valid_stat = true;
				}
				if (line == "Scent")
				{
					getline(file_source, line);
					value = stoi(line);
					Health = value;
					valid_stat = true;
				}
				if (line == "Hearing")
				{
					getline(file_source, line);
					value = stoi(line);
					Hearing = value;
					valid_stat = true;
				}
				if(line == "Speech")
				{
					getline(file_source, line);
					value = stoi(line);
					Speech = value;
					valid_stat = true;
				}
				if (line == "ArmorClass")
				{
					getline(file_source, line);
					value = stoi(line);
					ArmorClass = value;
					valid_stat = true;
				}
				if (valid_stat == false)
				{
					cout << "Invalid stat, innitialization failed " << line << " is not a recognized stat (check spelling and capitalization) SHUTTING DOWN" << endl;
					file_source.close();
					return;
				}
				getline(file_source, line);
			}
		}

		//done
		cout << Name << " Sucessfully innitialized from file " << source_file_name << endl;
		file_source.close();
	}
	else
	{
		cout << source_file_name << " Failed to load. Check to make sure that said file is spelled correctly (or is even in the folder in the first place)" << endl;
	}
}

int main()
{
	Entity test_entity;
	test_entity.initialize("test1");
	cout << test_entity.get_Name() << " is a " << test_entity.get_Species() << " and has " << test_entity.get_Health() << " Health" << endl;
	
	/*string line = "";
	string file_name = "";
	ifstream file_source;
	getline(cin, file_name);
	file_name = file_name + ".txt";
	file_source.open(file_name);
	if (file_source.is_open())
	{
		cout << "successfully opened " << file_name << endl;
		while (getline(file_source, line))
		{
			cout << line << '\n';
			cin.get();
		}
		file_source.close();
	}
	else
	{
		cout << "File " << file_name << " failed to open, shutting down" << endl;
		cin.get();
		return 0;
	}*/

	//the end
	cin.get();
	return 0;
}