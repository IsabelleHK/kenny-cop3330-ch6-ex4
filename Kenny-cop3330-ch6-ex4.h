/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Isabelle Kenny
 */
 
#include "std_lib_facilities.h"	


class Name_value {
public:
	Name_value(string n, int s): name(n), score(s) { }
	string name;
	int score;
};

int main()
try
{
	vector<Name_value> pairs;
	string n;
	int v;

	while (cin>>n>>v && n!="NoName") {
		for (int i=0; i<pairs.size(); ++i)
			if (n==pairs[i].name) error("duplicate: ",n);
		pairs.push_back(Name_value(n,v));
	}
	
	printf("\n");
	for (int i=0; i<pairs.size(); ++i)
			cout << "(" << pairs[i].name << ',' << pairs[i].score << ")\n";

}
catch (runtime_error e) {
	cout << e.what() << '\n';
}

