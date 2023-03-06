#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class player{
	private:
		char *name, *country,  *league;
		int age, goals, asistgoal, redC, yellowC;
	public:
		player(){
			name ="";
			country="";
			league="";
			age=0;
			goals=0;
			asistgoal=0;
			redC=0;
			yellowC=0;
		}
		player(char n[], char cou[], char l[], int a, int g, int asistg, int r, int y){
			name = n;
			country = cou;
			league = l;
			age = a;
			goals = g;
			asistgoal = asistg;
			redC = r;
			yellowC = y;
		}
		player(const player &c){
			int len = strlen(c.name);
			name = new char(len +1);
			strcpy(name, c.name);
			
			len = strlen(c.country);
			country = new char(len + 1);
			strcpy(country, c.country);
			
			len = strlen(c.league);
			league =new char(len + 1);
			strcpy(league, c. league);
			
			age = c.age;
			goals= c.goals;
			asistgoal = c.asistgoal;
			redC = c.redC;
			yellowC = c.yellowC;
		}
		~player(){
			delete[] name;
			delete[] country;
			delete[] league;
		}
		
};
