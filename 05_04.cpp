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
		cout << "姓名:" << name << endl << "班级：" << banji << endl << "学号:" << num << endl << "分数：" << score << endl << "成绩：" << grd << endl;
	}
	void showcount() {
		cout << "学生总数：" << count << endl;
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
	//添加学生信息
	Student s1("李明", 1, 1, 95);
	s1.display();
	Student s2("王红", 3, 21, 73);
	s2.display();
	Student s3("张亮", 7, 5, 80);
	s3.display();
	//统计对象总数
	s3.showcount();
	return 0;
}