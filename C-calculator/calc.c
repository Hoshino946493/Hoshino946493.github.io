#include <stdio.h>
#include <stdlib.h>

int main() {
	double a, b, result;
	char op;
	system("clear");
	printf("输入算式(Enter mathematical expression):");
	scanf("%lf %c %lf", &a, &op, &b);
	switch(op) {
		case '+': result = a + b; break;
		case '-': result = a - b; break;
		case '*': result = a * b; break;
		case '/': if (b == 0) { printf("错误：除数不能为0(Error: Divisor cannot be zero.)\n"); return 1; } result = a / b; break;
		default: printf("不支持的运算符(Unsupported operator.)");
			 return 1;
	}
	printf("结果(Result):%.2f\n", result);
	return 0;
}
