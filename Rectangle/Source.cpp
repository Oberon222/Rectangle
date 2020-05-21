#include <iostream>
using namespace std;

class Rectangl
{
private:
	int length;
	int width;
	char symbol;

	struct Coord
	{
		int x;
		int y;
	};

	bool Correct_Length(int length) const
	{
		return length > 0;
	}

	bool Correct_Width(int width) const
	{
		return width > 0;
	}

	
public:
	Rectangl() // конструктор за замовчуванням
	{
		length = 0;
		width = 0;
		symbol = ' ';
	}
	
	Rectangl(int size)
	{
		length = size;
		width = size;
	}

	Rectangl(int _length, int _width)
	{
		if (Correct_Length(_length)) {

			length = _length;
		}

		if (Correct_Width(_width)) {

			width = _width;
		}
	}

	void Set_Symbol(char _symbol)
	{
		if (_symbol != ' ')
		{
			symbol = _symbol;
		}
	}

	void Set_CoordX(int _x)
	{
		
	}

	void Set_CoordY(int _y)
	{

	}

	void Moving(int MoovX, int MoovY)
	{

	}

	void New_sizes() {
		int New_Length;
		int New_Width;
		cout << "Enter the new length: ";
		cin >> New_Length;
		cout << "Enter the new width: ";
		cin >> New_Width;
	}

	/*void Resize()
	{
		int New_Length;
		int New_Width;
		cout << "Enter the new length: ";
		cin >> New_Length;
		cout << "Enter the new width: ";
		cin >> New_Width;
		length = New_Length;
		width = New_Width;
	}*/

	void Resize2(int New_Length, int New_Width)
	{
		length = New_Length;
		width = New_Width;
	}

	void Print() const
	{
			for (int j = 0; j < width; j++) {

				for (int i = 0; i < length; i++) {
					cout << symbol;
				}
				cout << endl;
			}

			cout << "---------------" << endl;
	}

};

int main() {

	Rectangl r1(6,4);
	r1.Set_Symbol('*');
	r1.Print();
	r1.Resize2(4,3);
	r1.Print();


	system("pause");
	return 0;
}