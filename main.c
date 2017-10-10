#include "stdio.h"  
char *get_string_1()  
{  
	char p[] = "hello world!";  
	return p;  
}  
char *get_string_2()  
{  
	char *p = "hello world!";  
	return p;  
}  
int main()  
{  
	char *p;  
	p = get_string_1();  
	printf("get_string_1:%s\n",p);  
	p = get_string_2();  
	printf("get_string_2:%s\n",p);  
	
	p = "abc";
	char q[] = "abc";

	printf("addr p: 0x%x, q 0x%x\n", &p, &q);
	return 0;  
}  
