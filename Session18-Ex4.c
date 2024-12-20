#include<stdio.h> 
#include<string.h>
int main () {
	struct student {
	int id ; 
	char Name [100];
	int age ;
	char phonenumber [20] ; 
	}; 
    struct student sv01[50];
    for(int i=0; i<5 ; i++) {
    	sv01[i].id = i + 1;
        printf("Moi nhap thong tin sinh vien:%d\n",i+1) ;
        printf("Nhap ho va ten sinh vien: ") ;
	    fgets (sv01[i].Name,sizeof(sv01[i].Name),stdin) ;
	    printf("Nhap tuoi sinh vien: ") ;
	    scanf("%d", &sv01[i].age) ;
	    fflush (stdin) ;
	    printf ("Nhap vao sdt sinh vien: ") ;
	    fgets (sv01[i].phonenumber,sizeof(sv01[i].phonenumber),stdin) ;	
	} 
    printf("\nDanh sach thong tin sinh vien:\n");
    for (int i = 0; i < 5; i++) {
    	
        printf("\nSinh vien %d:\n", i + 1);
        printf("id :%d\n",sv01[i].id) ;
        printf("Ten: %s\n", sv01[i].Name); 
        printf("Tuoi: %d\n", sv01[i].age);
        printf("So dien thoai: %s\n", sv01[i].phonenumber);
    }
	
	return 0; 
}
