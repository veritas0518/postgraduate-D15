//#include<stdio.h>
//#define MAXLEN 100
//typedef struct stack {
//	char data[MAXLEN];
//	int top;        //topָ����int ����
//}Stack;
//
//int main() {
//	Stack s;    //�ṹ��ջ���Ͷ���һ��ջ s
//	s.top = -1;   //����������top��ֵΪ-1
//	char str[MAXLEN];
//	int i = 0;
//	scanf("%s", str);
//	if (str[0] == '-') {   //��������˵������Ǹ������������0A,0B��������ʽ
//		printf("0,");
//	}
//
//	while (str[i] != '#') {   //��������ַ����� # ��ʱ������һ�����whileѭ������Ϊ������ # �ʹ��������
//		if (str[i] == '(') {  //�����루 ʱ
//			s.top++;          //����������topָ�����ƣ�Ԫ����ջ�Ļ�������
//			s.data[s.top] = str[i];
//			i++;             //������ i ����Ѱ����һ��Ԫ��
//			while (str[i] != ')') {   //�ڣ� �Ѿ����ֵ�ǰ���£�������Ĳ�Ϊ ��ʱ
//				if ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
//				{
//					printf("%c,", str[i]);  //������������ֻ���ĸʱ��ֱ�Ӵ�ӡ
//				}
//				else {
//					s.top++;            //����������ֻ���ĸ����+ - * / �Ǿ���ջ
//					s.data[s.top] = str[i];
//}
//				i++;  //���������������ң��������Ҫ
//			}
//			while (s.data[s.top] != '(') {   //��ָ����ָ���Ǹ�ջ��Ԫ�ز��ǣ� ʱ������ͳ��ָ��Ԫ��
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
//	printf("%c", s.data[s.top--]);  //������ĩβ
//	return 0;
//}