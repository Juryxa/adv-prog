class rational
{
private:
	int a, b;
public:
	rational()
	{
		a = 0; b = 0;
	}
	rational(int a1, int b1) {
		if ((a1 == 0) && (b1 != 0)) {
			a = a1; b = b1;
		}

		else if (b1 != 0) {
			a = a1; b = b1;
			if (a >= b) {
				if (a % b == 0) {
					a = a / b;
					b = 0;
				}
				else {
					a = a - int((a / b)) * b;
				}
			}

			else if ((b % a == 0) && (a != 1)) {
				b /= a;
				a = 1;
			}
		}

		else {
			a = 0;
			b = 0;
		}

	}
	void set(int a1, int b1);
	void show();
	void get(int& a1, int& b1);

	friend rational operator - (rational d1, rational d2);
	rational& operator++();
};

rational operator + (rational d1, rational d2);
bool operator == (rational d1, rational d2);
bool operator > (rational d1, rational d2);
