#include <iostream>
#include "bigint.h"
#include <iostream>


using std::cout;
using std::cin;
using std::endl;
using std::cerr;


int main(){
	
	long a = 54321234567876543234567876543212345676543213456787654321234567876543212345678765432345612312312312412412412312323432512345654321345676543234567865432345676543212345676543212345678765432123456765432123456787654323456787654321234567654321345678765432123456787654321234567876543234565432123456787654323456787654321234567654321345678765432123456787654321234567876543234561231231231241241241231232343251234565432134567654323456786543234567654321234567654321234567876543212345676543212345678765432345678765432123456765432134567876543212345678765432123456787654323456;
	bigint A(a);
	A.print();
	
	unsigned long b = 1002;
	bigint B(b);
	B.print();
	
	bigint C("-700");
	C.print();
	
	bigint rest;
	
	cout <<  "\n---ADD---\n" << endl;
	
	bigint::add(A, B).print();
	bigint::add(B, C).print();
	bigint::add(A, C).print();
	cout << "\n";
	
	bigint::add(B, A).print();
	bigint::add(C, B).print();
	bigint::add(C, A).print();
	
	cout <<  "\n---SUB---\n" << endl;
	
	bigint::sub(A, B).print();
	bigint::sub(B, C).print();
	bigint::sub(A, C).print();
	cout << "\n";
	
	bigint::sub(B, A).print();
	bigint::sub(C, B).print();
	bigint::sub(C, A).print();
	
	cout <<  "\n---MUL---\n" << endl;
	
	bigint::mul(A, B).print();
	bigint::mul(B, C).print();
	bigint::mul(C, A).print();
	cout << "\n";
	
	bigint::mul(B, A).print();
	bigint::mul(C, B).print();
	bigint::mul(A, C).print();
	
	cout <<  "\n---DIV---\n" << endl;
	
	bigint::div(A, B).print();
	bigint::div(B, C).print();
	bigint::div(C, A).print();
	cout << "\n";
	
	bigint::div(B, A).print();
	bigint::div(C, B).print();
	bigint::div(A, C).print();
	
	cout <<  "\n---DIV_R---\n" << endl;
	
	bigint::div(A, B, rest);
	rest.print();
	bigint::div(B, C, rest);
	rest.print();
	bigint::div(C, A, rest);
	rest.print();
	cout << "\n";

	bigint::div(B, A, rest);
	rest.print();
	bigint::div(C, B, rest);
	rest.print();
	bigint::div(A, C, rest);
	rest.print();
}