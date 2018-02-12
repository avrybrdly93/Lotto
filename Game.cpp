#include "Game.h"



void structDeclare();
void structDeclare()
{
	City winterfell;
	winterfell.location = 0;
	winterfell.population = 1000;

	Zone winterlands;
	winterlands.location = 1;
	winterlands.creatures = "morbid snow foxes";
	winterlands.terrain = "snowy";

	Character anne;
	anne.age = 30;
	anne.profession = "General Store Manager";
	anne.gender = 1;
	anne.greeting = "Hello! I am Anne, the General Store manager, how are you?";

	Building generalStore;
	generalStore.location = 0;
}
void intro();

int main()
{
	structDeclare();
	intro();
}

void intro() {
	std::cout << "Hey, it's nice to see you're awake, the barbarians hurt you pretty bad." << std::endl;
	sleep(2);
	std::cout << "What was your name again?" << std::endl;
	getline(std::cin,player.name);
	std::cout << "That sounds a bit more audible than when we asked you earlier.  " << std::endl;
	sleep(2);
	std::cout << "Anyways " << player.name <<  ", we're glad you're alive." << std::endl;
	sleep(2);
	std::cout << "By the way, the barbarians stripped you of armor and left you to die." << std::endl;
	sleep(2);
	std::cout << "Here, take this leather armor set. (gearscore + 20)" << std::endl;
	player.gearscore =+ 20;
	sleep(2);
	std::cout << "*You step outside and notice winter has fallen all around you.*" << std::endl;
	sleep(2);
	std::cout << "*Looks like you need to find some warmth." << std::endl;
} 