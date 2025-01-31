#include <iostream>
using namespace std;

// 사용자 정의 자료형

// 구조체와 클래스의 차이는
// 구조체는 접근 제한 지정자의 디폴트는 public:
// 클래스는 접근 제한 지정자의 디폴트는 private:

struct People
{
// public: // default
	int age;
	int height;
	char name[256];
};

class cPeople
{
// private: // default
public:
	void addAge(/*People* const this*/)
	{
		/*(*this).*/age += 1;
	}

	int age;
	int height;
	char name[256];
};

void addAge(People* p1)
{
	(*p1).age += 1;
}

void addHeight(People* p1)
{
	(*p1).height += 1;
}

int main()
{
	// 자료구조

	// 구조체, 클래스
	People k;
	k.age = 10;
	k.height = 120;
	strcpy_s(k.name, "KMS");

	addAge(&k);
	addHeight(&k);

	cPeople man;
	man.age = 10;
	man.height = 120;
	strcpy_s(man.name, "김철수");
	man.addAge();

	return 0;
}