#pragma once
#include <iostream>
#include <stdlib.h>
using namespace std;

struct node {
	int data;
	node* left;
	node* right;
public:
	node operator=(const node& another);
	void print(node* root) const;
	void clear(node*& root);
};

class Set
{
private:
	node* root;
public:
	Set();
	bool find(int key) const;
	bool insert(int key);
	friend std::ostream& operator<<(std::ostream& out, Set& s);
	bool erase(int key);
	void clear();
	~Set();
};