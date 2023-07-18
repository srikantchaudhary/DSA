#include<iostream>
using namespace std;

class Person{
	public:
		int level;
		int health;
};

int main()
{
	Person p;
	p.level = 70;
	p.health=30;
	
	cout<<"Level of the Game is "<<p.level<<" Health of the Hero is "<<p.health<<"\n";
}
