#pragma once

#include<iostream>
#include<vector>
using namespace std;

class Matrix {
private:
	int row;
	int col;
	vector<vector<double>> content;

public:
	double detInSize2();

	Matrix();
	Matrix(int row, int col, vector<double> _init_content);
	~Matrix();
};
