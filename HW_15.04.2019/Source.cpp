#include "flat.h"

int main() {

	flat f1(45.5, 15000);
	flat f2(f1);
	flat f3(60.7, 20000);

	f1.print();
	f2.print();
	f3.print();

	if (f1 == f2) cout << "areas are equal" << endl;
	else cout << "areas are not equal" << endl;
	if (f1 == f3) cout << "areas equal" << endl;
	else cout << "areas are not equal" << endl;

	if (f2 < f3) cout << "price of f2 is less" << endl;
	if (f3 > f1) cout << "price of f3 is greater" << endl;

	f2 = f3;
	cout << "new f2" << endl;
	f2.print();

	system("pause");
}