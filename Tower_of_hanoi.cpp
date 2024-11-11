#include <iostream>
using namespace std;

void Hanoi(int disk, char source, char target, char auxiliary)
{
	if (disk == 1)
	{
		cout << "円盤 1 を " << source << " から " << target << " に移動" << endl;
		return;
	}

	Hanoi(disk - 1, source, auxiliary, target);

	cout << "円盤 " << disk << " を " << source << " から "
		<< target << " に移動" << endl;

	Hanoi(disk - 1, source, auxiliary, target);
}

int main()
{
	int disk;

	cout << "円盤の枚数を入力してください: ";
	cin >> disk;

	cout << "ハノイの塔の解法手順は以下の通りです:" << endl;

	Hanoi(disk, 'A', 'C', 'B');
}