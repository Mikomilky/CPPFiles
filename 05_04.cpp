#include <iostream>
#include <string>
using namespace std;

class Student{
public:
	Student(string nam, int bj, int n, int s){
		name = nam;
		banji = bj;
		num = n;
		score = s;
		count++;
	}
	void display(){
		if (score >= 90)
					grd = "A";
				else if (score >= 80)
					grd = "B";
				else if (score >= 70)
					grd = "C";
				else if (score >= 60)
					grd = "D";
		cout << "����:" << name << endl << "�༶��" << banji << endl << "ѧ��:" << num << endl << "������" << score << endl << "�ɼ���" << grd << endl;
	}
	void showcount() {
		cout << "ѧ��������" << count << endl;
	}

private:
	string name,grd;
	int banji;
	int num;
	int score;
	static int count;
};

int Student::count = 0;

int main()
{
	//���ѧ����Ϣ
	Student s1("����", 1, 1, 95);
	s1.display();
	Student s2("����", 3, 21, 73);
	s2.display();
	Student s3("����", 7, 5, 80);
	s3.display();
	//ͳ�ƶ�������
	s3.showcount();
	return 0;
}