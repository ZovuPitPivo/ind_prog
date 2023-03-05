#pragma once
class rational
{
private:
	int a, b;
public:
	ratinal(int a1, int b);
	void set(int a1, int b1);
	void show();
	friend rational operator-(rational& m1, rational& m2);
	rational operator++(int a) {
		a++;
		return a;
	}
	rational operator=(rational cm) {
		a = cm.a;
		b = cm.b;
	}
};

rational operator+(rational& m1, rational& m2) {
	rational res;
	res.set(m1.a() * m2.b() + m2.a() * m1.b(), m1.b() * m2.b());
	return res;
}

rational operator-(rational& m1, rational& m2) {
	rational res;
	res.set(m1.a() * m2.b() - m2.a() * m1.b(), m1.b() * m2.b());
	return res;
}

rational operator==(rational& m1, rational& m2) {
	float w1, w2;
	w1 = m1.a / m1.b;
	w2 = m2.a / m2.b;
	if (w1 == w2); {
		return w1 == w2;
	}else {
		return w1 == w2;
	}
}

rational operator>(rational& m1, rational& m2) {
	float w1, w2;
	w1 = m1.a / m1.b;
	w2 = m2.a / m2.b;
	if (w1 > w2); {
		return w1 > w2;
	}
	else {
		return w1 > w2;
	}
}
