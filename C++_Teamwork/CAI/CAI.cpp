#include <iostream>
#include <ctime>
#include<math.h>
#include<stdlib.h>
using namespace std;

double BuildIssues(int digit, int sign); // build issues and return correct answer
int GenerateComments(int a); // output comments

void  PreexamTips(); // output tips before the exam
bool Amount(double answer, double coeeectanswer); // compare the results
int main()
{
	while (1)
	{
		int level, operate, sum = 10, correcttimes = 0;
		double answer = 0, correctanswer = 0;
		PreexamTips();
		cin >> level >> operate; // 用户输入选择的考试等级与运算符号 
		cout << endl;

		while (1) //考试部分，答题十次后结束 
		{

			correctanswer = BuildIssues(level, operate);

			while (1) // 答题部分，回答正确或答题十次后结束 
			{
				cout << "	";
				cin >> answer;
				if (Amount(answer, correctanswer))
				{
					GenerateComments(1);
					correcttimes++;
					sum--;
					break;
				}
				else
					GenerateComments(2);
				sum--;
				if (sum == 0)
					break;
			} // 答题部分结束 

			if (sum == 0)
				break;

		} // 考试部分结束 

		GenerateComments(correcttimes - 10); // 输出学生最终评语 

	}

	return 0;

}

int GenerateComments(int a)
{
	if (a < -2)
	{
		cout << "Please ask your teacher for extra help." << endl;
		return 0;
	}
	else if (a >= -2 && a <= 0)
	{
		cout << "Congratulations, you are ready to go to the next level!" << endl;
		return 0;
	}
	int x; // x用来记录产生的随机数,随机数决定输出哪个评语 
	string right[] = { "Very good!","Excellent!","Nice Work!","Keep up the good work!" };
	string orrer[] = { "No. Please try again.","Wrong. Try once more.","Don't give up!","No. Keep trying." };
	//srand((int)time(0));
	x = rand() % 4;
	if (a == 1)
		cout << "	" << right[x] << endl << endl;
	else
		cout << "	" << orrer[x] << endl << endl;
	return 0;
}
double BuildIssues(int digit, int sign) {
	char type;
	int flag;
	double d;
	srand((double)time(0));
	double a = 0, b = 0;
	double result;
	d = pow(10, digit) - 1;
	a = rand() % (int)d + 1;
	b = rand() % (int)d + 1;
	switch (sign)
	{
	case 1:type = '+'; break;
	case 2:type = '-'; break;
	case 3:type = '*'; break;
	case 4:type = '/'; break;
	case 5: {
		switch (flag = rand() % 4 + 1)
		{
		case 1:type = '+'; break;
		case 2:type = '-'; break;
		case 3:type = '*'; break;
		case 4:type = '/'; break;
		}
	}
	};
	switch (type)
	{
	case '+':result = a + b; break;
	case '-':result = a - b; break;
	case '*':result = a * b; break;
	case '/':result = a / b; break;
		break;
	}
	cout << "	" << "How much is " << a << " " << type << " " << b << endl;
	return result;

}
bool Amount(double answer, double coeeectanswer)
{
	if (answer == coeeectanswer)
		return true;
	if (fabs(answer - coeeectanswer) < 10e-9)
		return true;
	if (fabs(answer - coeeectanswer) <= 10e-4 * fabs(answer))
		return true;
	return false;
}
void  PreexamTips()
{
	system("cls");
	cout << endl << "1：问题中数字只有一位。	2：问题中数字最多两位。	3：问题中数字最多三位。" << endl;
	cout << endl << "1：只有加法。	2：只有减法。	3：只有乘法。	4：只有除法。	5：随机混合。" << endl;
	cout << endl << "请输入数字选择问题中数字的位数与问题中运算符；";
}

