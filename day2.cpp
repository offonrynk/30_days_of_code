#include <bits/stdc++.h>
#include <cmath>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void solve(double meal_cost, int tip_percent, int tax_percent)
{
  double tip_cost = meal_cost * tip_percent / 100;
  double tax_cost = meal_cost * tax_percent / 100;

  double total_cost = meal_cost + tip_cost + tax_cost;

  cout << round(total_cost) << endl;
}

int main()
{
  double meal_cost;
  cin >> meal_cost;
  cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  int tip_percent;
  cin >> tip_percent;
  cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  int tax_percent;
  cin >> tax_percent;
  cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  solve(meal_cost, tip_percent, tax_percent);

  return 0;
}
