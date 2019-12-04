#include <math.h>
#include <stdio.h>

void solve(double meal_cost, int tip_percent, int tax_percent)
{
  double tip_cost = meal_cost * tip_percent / 100;
  double tax_cost = meal_cost * tax_percent / 100;

  double total_cost = meal_cost + tip_cost + tax_cost;

  printf("%d\n", (int)round(total_cost));
}

int main()
{
  double meal_cost = 0.0;
  int tip_percent = 0;
  int tax_percent = 0;

  scanf("%lf%d%d", &meal_cost, &tip_percent, &tax_percent);

  solve(meal_cost, tip_percent, tax_percent);

  return 0;
}
