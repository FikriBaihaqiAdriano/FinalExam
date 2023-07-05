#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x, y;
public:
	bidangDatar() {
		x = 0;
		y = 0;
	}

	virtual void input() { return; }
	virtual float Luas(int a) { return 0; }
	virtual float Keliling(int a) { return 0; }
	virtual void cekUkuran() { return; }
	
	void setX(int a) {
		this->x = a;
	}

	int getX() {
		return x;
	}

	void setY(int b) {
		this->y = b;
	}

	int getY() {
		return y;
	}
};

class Lingkaran:public bidangDatar {
public:
	int x;
	float p = 3.14;

	void input() {
		cout << "Masukkan jejari : ";
		cin >> x;
		setX(x);
		
		setY(p);
	}

	float LuasLingkaran() {
		float LuasL = getX() * getY() * getY();
		return LuasL;
	}

	float kelilingL() {
		float KelilingL =2* getX() * getY();
		return KelilingL;
	}

	void cekUkuranL() {

	}
};

class Persegipanjang:public bidangDatar {
public :

	void input() {
		int x, y;

		cout << "Masukkan Panjang = ";
		cin >> x;
		setX(x);

		cout << "Masukkan lebar = ";
		cin >> y;
		setY(y);
	}

	float LuasPP() {
		float LuasPP = getX() * getY();
		return LuasPP;
	}
	
	float kelilingPP() {
		float KelilingPP = 2 * getX() + 2 * getY();
		return KelilingPP;
	}

	void cekUkuranPP() {

	}
};

int main() {
	cout << "Lingkaran dibuat " << endl;
	
	cout << "Persegi panjang dibuat " << endl;
}