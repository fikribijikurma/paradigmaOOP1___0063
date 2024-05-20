#include<iostream>

#ifndef MANUSIA_H
#define MANUSIA_H

class manusia {
Public:
	string name;
	jantung varjantung;

	manusia(string pName) : name(pName) {
		cout << name << " hidup\n";
	}
	~manusia() {

	}
};