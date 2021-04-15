#ifndef Option_h
#define Option_h

#include <string>
using namespace std;

class Option {
public:
	Option();
	~Option();
	void setText(string text);
	void setFunction(void (*f));
private:
	string myText;
	static int count	;

};



#endif