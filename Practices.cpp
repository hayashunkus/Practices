#include <iostream>
using namespace std;
/*
int main() {
	long long N;
	long long Answer = 1;
	cin >> N;
	for (int i = 2; i <= N; i++) Answer *= i;
	cout << Answer << endl;
	return 0;
}*/


//2.5.2
/*
int main() {
	// 入力
	long long N;
	cin >> N;

	// 素因数分解（空白区切りで出力）
	bool flag = false;
	for (long long i = 2; i * i <= N; i++) {
		while (N % i == 0) {
			if (flag == true) cout << " ";
			flag = true;
			N /= i;
			cout << i;
		}
	}
	if (N >= 2) {
		if (flag == true) cout << " ";
		flag = true;
		cout << N;
	}
	cout << endl;
	return 0;
}*/
//3.1.2

/*int main() {
	long long N;
	cin >> N;

	for (long long i = 1; i * i <= N; i++) {
		if (N % i != 0)continue;
		cout << i << endl;
		if (i != N / i) {
			cout << N / i << endl;
		}
	
	}
	return 0;
}*/
//3.1.3

int main() {
	// 入力
	long long N;
	cin >> N;

	// 素因数分解（空白区切りで出力）
	bool flag = false;
	for (long long i = 2; i * i <= N; i++) {
		while (N % i == 0) {
			if (flag == true) cout << " ";
			flag = true;
			N /= i;
			cout << i;
		}
	}
	if (N >= 2) {
		if (flag == true) cout << " ";
		flag = true;
		cout << N;
	}
	cout << endl;
	return 0;
}//s3.1.2


