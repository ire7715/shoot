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
	abstract class TreeNode{
	public:
		virtual TreeNode *sibling();
		virtual TreeNode *child();
		virtual bool hasSibling();
		virtual bool hasChild();
		virtual string getData();
		void generate(const string &) const throw(shoot:UnknownTitleException);
	private:
		void headerGenerate(const ofstream &, const string &) const throw(shoot::UnknownTitleException);
		void printNode(const ofstream &);
	};
}

#endif