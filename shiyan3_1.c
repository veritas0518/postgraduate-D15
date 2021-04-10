//#include<stdio.h>
//#define MAXLEN 100
//typedef struct stack {
//	char data[MAXLEN];
//	int top;        //top指针用int 类型
//}Stack;
//
//int main() {
//	Stack s;    //结构体栈类型定义一个栈 s
//	s.top = -1;   //基本操作，top赋值为-1
//	char str[MAXLEN];
//	int i = 0;
//	scanf("%s", str);
//	if (str[0] == '-') {   //这里是先说明如果是负数，就输出成0A,0B这样的形式
//		printf("0,");
//	}
//
//	while (str[i] != '#') {   //当输入的字符不是 # 的时候，这是一个大的while循环，因为输入了 # 就代表结束了
//		if (str[i] == '(') {  //当输入（ 时
//			s.top++;          //下面两行是top指针上移，元素入栈的基本操作
//			s.data[s.top] = str[i];
//			i++;             //计数器 i 继续寻找下一个元素
//			while (str[i] != ')') {   //在（ 已经出现的前提下，当输入的不为 ）时
//				if ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
//				{
//					printf("%c,", str[i]);  //当输入的是数字或字母时，直接打印
//				}
//				else {
//					s.top++;            //如果不是数字或字母，如+ - * / 那就入栈
//					s.data[s.top] = str[i];
//}
//				i++;  //计数器继续往下找，这个很重要
//			}
//			while (s.data[s.top] != '(') {   //当指针所指的那个栈内元素不是（ 时，以下统称指针元素
//				printf("%c,", s.data[s.top--]);
//			}
//			s.top--;
//			i++;
//			continue;
//		}
//		if ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
//			printf("%c,", str[i]);
//			i++;
//			continue;
//		}
//		else if (s.top == -1) {
//			s.top++;
//			s.data[s.top] = str[i];
//			i++;
//			continue;
//		}
//		if (str[i] == '*' && (s.data[s.top] == '+' || s.data[s.top] == '-')) {
//			s.top++;
//			s.data[s.top] = str[i];
//			i++;
//			continue;
//		}
//		if (str[i] == '/' && (s.data[s.top] == '+' || s.data[s.top] == '-')) {
//			s.top++;
//			s.data[s.top] = str[i];
//			i++;
//			continue;
//		}
//		if ((str[i] == '+' || str[i] == '-') && s.top != -1) {
//			while (s.top != -1) {
//				printf("%c,", s.data[s.top--]);
//			}
//			s.top++;
//			s.data[s.top] = str[i];
//			}
//		if (str[i] == '^' && s.data[s.top] != '^') {
//			s.top++;
//			s.data[s.top] = str[i];
//		}
//		else if (str[i] == '^' && s.data[s.top] == '^') {
//			printf("%c,", s.data[s.top--]);
//			s.top++;
//			s.data[s.top] = str[i];
//		}
//		if ((str[i] == '*' && (s.data[s.top] == '*' || s.data[s.top] == '/' || s.data[s.top] == '^')))
//		{
//			while (s.data[s.top] != '+' && s.data[s.top] != '-') {
//				if (s.top != -1) {
//					printf("%c,", s.data[s.top--]);
//				}
//				else
//					break;
//
//			}
//			s.top++;
//			s.data[s.top] = str[i];
//		}
//
//		if ((str[i] == '/' && (s.data[s.top] == '*' || s.data[s.top] == '/' || s.data[s.top] == '^')))
//		{
//			while (s.data[s.top] != '+' && s.data[s.top] != '-') {
//				if (s.top != -1) {
//					printf("%c,", s.data[s.top--]);
//				}
//				else
//					break;
//}
//			s.top++;
//			s.data[s.top] = str[i];
//		}
//		i++;
//	}
//
//	while (s.top > 0) {
//		printf("%c,", s.data[s.top--]);
//	}
//
//	printf("%c", s.data[s.top--]);  //这里是末尾
//	return 0;
//}