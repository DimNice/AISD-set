#include "Set.h"
node node::operator=(const node& another)
{
	this->data = another.data;
	this->left = another.left;
	this->right = another.right;
	return *this;
}
void node::print(node* root) const
{
}

void node::clear(node*& root)
{
	if (root->left) clear(root->left);
	if (root->right) clear(root->right);
	root = NULL;
}

Set::Set()
{
	root = NULL;
}

bool Set::find(int key) const
{
	return true;
}

bool Set::insert(int key)
{
	node* tmp_root = root;
	while (tmp_root)
	{
		if (tmp_root->data > key)
		{
			if (tmp_root->left == NULL)
			{
				tmp_root->left = new node;
				tmp_root = tmp_root->left;
				break;
			}
			else tmp_root = tmp_root->left;
		}
		else if (tmp_root->data < key)
		{
			if (tmp_root->right == NULL)
			{
				tmp_root->right = new node;
				tmp_root = tmp_root->right;
				break;
			}
			else tmp_root = tmp_root->right;
		}
		else if (tmp_root->data == key) return false;
	}
	tmp_root->data = key;
	tmp_root->right = NULL;
	tmp_root->left = NULL;
	return true;
}

std::ostream& operator<<(std::ostream& out, Set& s)
{
	if (s.root)
	{
		cout << "{";
		s.root->print(s.root);
		cout << "\b\b}";
	}
	return out;
}

bool Set::erase(int key)
{
	return true;
}

void Set::clear()
{
	root->clear(root);
}

Set :: ~Set()
{
	clear();
}