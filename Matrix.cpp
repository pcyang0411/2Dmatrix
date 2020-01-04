#include "Matrix.hpp"

Matrix::Matrix()
{
	this->row = 0;
	this->col = 0;

	this->content.resize(0);
	for (int i = 0; i < this->content.size(); i++)
		this->content[i].resize(0);
}
Matrix::Matrix(int _row, int _col, vector<double> _init_content)
{
	this->row = _row;
	this->col = _col;

	this->content.resize(_row);
	for (int i = 0; i < this->content.size(); i++)
		this->content[i].resize(_col);

	int count = _init_content.size();
	if (count < _row*_col)
	{
		cout << "init_content size is not enough.\n";
	}
	int k = 0;
	for (int i = 0; i < this->content.size(); i++)
		for (int j = 0; j < this->content[i].size(); j++)
		{
			this->content[i][j] = _init_content[k];
			k++;
		}
}
Matrix::~Matrix() {}

double Matrix::detInSize2()
{
	if (this->content.size() < 2)
	{
		cout << "Row scalar is not enough.\n";
		return -1;
	}
	if (this->content[0].size() < 2 || this->content[1].size() < 2)
	{
		cout << "Col scalar is not enough.\n";
		return -1;
	}
	return this->content[0][0] * this->content[1][1] - this->content[0][1] * this->content[1][0];
}