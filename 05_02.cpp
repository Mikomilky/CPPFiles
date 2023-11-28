#include <iostream>
using namespace std;

class Triangle {
	public:
		Triangle(int newA, int newB, int newC);
		void judge(int newA, int newB, int newC);
	private:
		int A, B, C;
};

Triangle::Triangle(int newA, int newB, int newC) :A(newA), B(newB), C(newC){}

void Triangle::judge(int newA, int newB, int newC) {
	if (((newA == newB) && (newB != newC)) || ((newA == newC) && (newB != newC)) || ((newB == newC) && (newA != newC)))
		cout << "�ǵ���������" << endl;
	if (newA == newB && newB == newC)
		cout << "�ǵȱ�������" << endl;
	if (newA != newB && newB != newC && newA != newC)
		cout << "�ǲ��ȱ�������" << endl;

}

int main() {
	Triangle newTriangle(3, 4, 5);
	newTriangle.judge(3, 4, 5);//��������
	return 0;
}