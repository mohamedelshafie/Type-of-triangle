//Type of triangle
#include <iostream>
using namespace std;
int main(){
	int a, b, c;
	int a2, b2, c2;
	int s1, s2, s3;
	cout << "enter length of sides of your triangle" << endl;
	cin >> s1 >> s2 >> s3;
	if (s1 > s2 && s1 > s3){
		a = s1;
		b = s2;
		c = s3;
	}
	else if (s2 > s1 && s2 > s3){
		a = s2;
		b = s1;
		c = s3;
	}
	else {
		a = s3;
		b = s2;
		c = s1;
	}
	a2 = pow(a, 2);
	b2 = pow(b, 2);
	c2 = pow(c, 2);
	if (a2 == b2 + c2)
		cout << "right angled triangle" << endl;
	else if (a2 > b2 + c2)
		cout << "obtuse angled triangle" << endl;
	else 
		cout << "acute angled triangle" << endl;
}