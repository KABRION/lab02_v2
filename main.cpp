#include <iostream>
#include "studentgroup.h"

int main()
{
	srand(time(0));

	StudentGroup groupA = { "Network", 1 };

	StudentDefault* anDef = new StudentDefault("Andrey", "Miklashevsky", "", 22);
	StudentDefault* arDef = new StudentDefault("Artem", "Korotkov","", 24);
	StudentDefault* naDef = new StudentDefault("Nastya", "Alekseeva","", 25);

	StudentBotanist* leBot = new StudentBotanist("Lex", "Sofronov","", 20);
	StudentBotanist* kaBot = new StudentBotanist("Katya", "Ivanova","", 18);
	StudentBotanist* efBot = new StudentBotanist("Efrem", "Bezrukov","", 18);

	StudentActivist* seAct = new StudentActivist("Sergey", "Vinogradov","", 23);
	StudentActivist* alAct = new StudentActivist("Alex", "Sidorov","", 24);
	StudentActivist* elAct = new StudentActivist("Elisei", "Parfenov","", 24);

	groupA.addStudent(anDef);
	groupA.addStudent(arDef);	
	groupA.addStudent(naDef);

	groupA.addStudent(leBot);
	groupA.addStudent(kaBot);
	groupA.addStudent(efBot);	

	groupA.addStudent(seAct);
	groupA.addStudent(alAct);
	groupA.addStudent(elAct);

	std::cout << groupA;

	StudentActivist* anAct_ = anDef->makeActivist();
	StudentDefault* alDef_ = alAct->makeDefault();
	StudentBotanist* arBot_ = arDef->makeBotanist();

	groupA.addStudent(anAct_);
	groupA.addStudent(arBot_);
	groupA.addStudent(alDef_);

	std::cout << groupA;

	groupA.startExam();
	groupA.startFinalExam();

	std::cout << groupA;

	delete anDef, arDef, naDef, leBot, kaBot, efBot, seAct, alAct, elAct, anAct_, alDef_, arBot_;
	
	

	system("Pause");
}