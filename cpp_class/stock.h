#ifndef STOCK
#define STOCK
#include <iostream>

using namespace std;

class Stock 
{
    private:
    string name;
    int shares;
    float share_val;
    double total_val;
    void set_total() {total_val = shares * share_val;}

    public:
    void buy(int, float);
	void sell(int, float);
	void update(float);
	void show();
	Stock(string, int, float);
	Stock();
	~Stock();

};

#endif