// GoldenNumber.cpp: 定义控制台应用程序的入口点。
//


#include<iostream>
#include<cstdio>
#include<math.h>
#include<algorithm>

#define MAXN 1000010
using namespace std;

int round_num;
int line_size;
int bot_num;

double gold[MAXN];
double bot_A[MAXN], bot_B[MAXN];

int main()
{
	cin >> round_num >> line_size;
	bot_num = line_size / 2;
	for (int i = 1; i <= round_num; i++) {
		scanf("%lf", &gold[i]);
		for (int j = 1; j <= bot_num; j++) {
			scanf("%lf%lf", &bot_A[j], &bot_B[j]);
		}
	}
	cout << 2.333 << "\t" << 3.44 << endl;
    return 0;
}


/*

2 5
18.07 30 30 17 40
24.87 18.08 18.08 99.9 25

*/