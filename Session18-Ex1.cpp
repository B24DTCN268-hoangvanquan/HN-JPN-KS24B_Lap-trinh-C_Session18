#include<stdio.h> 
#include<string.h>
int main () {
	struct student {
	char Name [100];
	int age ;
	char phonenumber [20] ; 
	}; 
    struct student user01={"Hoang van Quan",18,"0363161863"};
	printf ("Thông tin sinh vien la:\n") ;
	printf ("Ho va ten :%s ",user01.Name) ;
	printf ("\nTuoi :%d ",user01.age) ;
	printf ("\nSo dien thoai :%s ", user01.phonenumber) ;
	
	
	return 0; 
}
