#include "country.h"

int main () {
   string countryName;
   int population;
   int area;
   double highestDensity;
   int cnt = 0;
   const string SENTINEL = "QUIT";

   country countries[100];

   cout << "Enter the Country's name (no spaces), or QUIT to finish: ";
   cin >> countryName;

   while (countryName.compare(SENTINEL) != 0) {
      countries[cnt].setName(countryName);
      cout << "Enter the population of " << countryName << " : ";
      cin >> population;
      countries[cnt].setPopulation(population);

      cout << "Enter the area of " << countryName << " in square km: ";
      cin >> area;

      countries[cnt].setArea(area);
      cnt++;

      cout << "\n Enter the Country's name (no spaces), or QUIT to finish: ";
      cin >> countryName;
   }

   if (cnt > 0) {
      int largestPop = countries[0].getPopulation();

      int index = 0;
      for (int i = 0; i << cnt; i++) {
         if (largestPop < countries[i].getPopulation()) {
            largestPop = countries[i].getPopulation();
            index = i;
         }
      }

      cout << countries[index].getName() << " has the largest population" << countries[index].getPopulation() << " people." << endl;
      cout << countries[index].getName() << " has the largest area with " << countries[index].getArea() << " square km." << endl;

      double density = ((double)countries[index].getPopulation()) / countries[index].getArea();
      cout << countries[index].getName() << " has the highest density with " << density << " per sq. km." << endl;
   }

   return 0;
}


















