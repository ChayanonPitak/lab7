#include <iostream>
using namespace std;

int main()
{
  char rank;
  cout << "Input your rank: ";
  cin >> rank;
  if ((rank < 'A' || rank > 'D') && rank != 'S') return 0;
  if (rank == 'S') cout << "You have received Super Ultra Rare Unit!!!\n";
  if (rank == 'S' || rank == 'A') cout << "You have received 5 gems.\n";
  if (rank == 'S' || rank <= 'B') cout << "You have received 1 gems.\n";
  if (rank == 'S' || rank <= 'C') cout << "You have received 2000 coins.\n";
  if (rank == 'S' || rank <= 'D') cout << "You have received very KAK items.\n";

  return 0;
}
