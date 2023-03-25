#pragma once
#include <ostream>

class Cone {
	double x, y, z;
	double radius;
	double height;
public:
	Cone();
	Cone(double r, double h);
	Cone(double a, double b, double c, double r, double h);
	void setCoordenate(double a, double b, double c);
	void setRadius(double r);
	void setHeight(double h);
	double getRadius();
	double getHieght();
	double area();
	double volume();

	friend std::ostream& operator<<(std::ostream& stream, Cone& obj){
		stream << "(" << obj.x << "; " << obj.y << "; " << obj.z << ") ";
		stream << "r=" << obj.radius << " " << "h=" << obj.height << "\n";
		return stream;
	}
};

class truncated_cone : public Cone {
	double x, y, z;
	double radius1, radius2;
	double height;
public:
	truncated_cone();
	truncated_cone(double r1, double r2, double h);
	truncated_cone(double a, double b, double c, double r1, double r2, double h);
	void setRadiusMax(double r1);
	void setRadiusMin(double r2);
	double getRadiusMax();
	double getRadiusMin();
	double area();
	double volume();

	friend std::ostream& operator<<(std::ostream& stream, truncated_cone& obj) {
		stream << "(" << obj.x << "; " << obj.y << "; " << obj.z << ") ";
		stream << "Большой r=" << obj.radius1 << " " << "Малый r=" << obj.radius2 << " ";
		stream << "h=" << obj.height << '\n';
		return stream;
	}
};