#include <iostream>
using namespace std;

// ����� ���� �ڷ���

// ����ü�� Ŭ������ ���̴�
// ����ü�� ���� ���� �������� ����Ʈ�� public:
// Ŭ������ ���� ���� �������� ����Ʈ�� private:

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
	// �ڷᱸ��

	// ����ü, Ŭ����
	People k;
	k.age = 10;
	k.height = 120;
	strcpy_s(k.name, "KMS");

	addAge(&k);
	addHeight(&k);

	cPeople man;
	man.age = 10;
	man.height = 120;
	strcpy_s(man.name, "��ö��");
	man.addAge();

	return 0;
}