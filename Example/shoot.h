/**
*	Project	: Shoot
*	Author	: Ire @ github.com/ire7715
*	Date	: 22, Sep, 2014
**/

#ifndef __SHOOT_H__
#define __SHOOT_H__

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

namespace shoot{
	class UnknownTitleException{
	public:
		UnknownTitleException(string *);
	private:
		string msg;
	};
	class TreeNode{
	public:
		TreeNode();
		~TreeNode();
		virtual TreeNode *sibling() = 0;
		virtual TreeNode *child() = 0;
		virtual bool hasSibling() = 0;
		virtual bool hasChild() = 0;
		virtual string getData() = 0;
		void generate(const string &);
	private:
		void headerGenerate(ofstream &, const string &);
		void printNode(ofstream &);
	};
}

#endif