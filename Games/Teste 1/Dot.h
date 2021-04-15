#ifndef Dot_h
#define Dot_h

#define INITIAL_POSITION 0

class Dot {
public:
	Dot() : position {INITIAL_POSITION};
	Dot(int position);
	int getPosition();
	void changePosition(int newPosition);
private:
	int position;
}



#endif