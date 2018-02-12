#include <string>
#include <iostream>
#include <thread>
#include <chrono>

struct City
{
	int location;
	int population;
	void travelTo();
};

struct Zone
{
	int location;
	std::string creatures;
	std::string terrain;
	void travelTo();
};

struct Building
{
		int location;
		bool isIn;
		void enter();
		Building();
};

struct Character
{
		bool gender; //0 is male, 1 is female
		int age;
		std::string profession;
		std::string greeting;
};

struct Player
{
	int location;
	int gearscore;
	int health;
	int level;
	int experience;
	std::string name;
	Player();
} player;

Player::Player()
{
	location = 0;
	gearscore = 0;
	health = 100;
	level = 1;
	experience = 0;
}

Building::Building()
{
	isIn=false;
}

void City::travelTo()
{
	player.location = location;
}

void Zone::travelTo()
{
	player.location = location;
}


void Building::enter()
{
	isIn=true;
}

void sleep(int sec);

void sleep(int sec)
{
	std::this_thread::sleep_for(std::chrono::seconds(sec));
} 