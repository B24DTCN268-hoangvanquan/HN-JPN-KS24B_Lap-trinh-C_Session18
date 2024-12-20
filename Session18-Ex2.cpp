#include<stdio.h> 
#include<string.h>
int main () {
	struct student {
	char Name [100];
	int age ;
	char phonenumber [20] ; 
	}; 
    struct student sv01;
    printf("Nhap ho va ten sinh vien: ") ;
	fgets (sv01.Name,sizeof(sv01.Name),stdin) ;
	printf("Nhap tuoi sinh vien: ") 
	scanf("%d", &sv01.age) ;
	getchar(); 
	printf ("Nhap vao sdt sinh vien: ") ;
	fgets (sv01.phonenumber,sizeof(sv01.phonenumber),stdin) ;
	
	return 0; 
}
