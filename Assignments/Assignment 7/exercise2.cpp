#include <iostream>
#include <cstdio>


using namespace std;


/* A number of salespeople in the company */
static const int SALESPERSON_COUNT = 25;


int main()
{
/* An array of salespeople earned salaries */
int salaries[SALESPERSON_COUNT] = { 204, 733, 806, 967, 262,
1075, 1060, 1072, 255, 462,
995, 564, 886, 924, 201,
884, 938, 1033, 264, 1026,
215, 238, 348, 644, 563};
/* An array of counters showing how many salesperson salaries
* are in each of the nine ranges */
int counters[9] = {0};
int index;

for (int k = 0; k < SALESPERSON_COUNT; k++)
{
index = (salaries[k] - 200) / 100;//get counter index for a salary range
counters[index]++;
}

/* Output salary list */
cout << "Salespeople earned salaries:" << endl;
for (int k = 0; k < SALESPERSON_COUNT; k++)
cout << " " << salaries[k];
cout << endl << endl;

/* Display the array of counters */
char buf[64];
for (int z = 0; z < 8; z++)
{
sprintf(buf, " %c) $%d-%d: ", 'a' + z, 200 + z * 100, 299 + z * 100);
cout << buf << counters[z] << endl;
}
cout << " i) $1000 < " << counters[8];
return 0;
}