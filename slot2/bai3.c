#include<stdio.h>

int main() {
    // khai bao 2 bien so thuc, khai bao gia tri
    float a = 5; //giai thich: khai bao bien a la gia tri so thuc (float or double) va co gia tri la 5
	double b = 10.216; //giai thich: khai bao bien b la gia tri so thuc (float or double) va co gia tri la 10.216
    //khai bao bien kq, la ket qua cua a+b
    float kq; //giai thich: khai bao bien kq la gia tri so thuc (float or double)
    //in a
    printf("a =  %.0f\n", a); //giai thich: in ra man hinh bang lenh printf, va %f la chuoi dinh dang de gia tri dat vao dung vi tri do va la dinh dang so thuc, va \n la xuong dong
    //in b
	printf("b = %.3f\n", b); //giai thich: in ra man hinh bang lenh printf, va %f la chuoi dinh dang de gia tri dat vao dung vi tri do va la dinh dang so thuc, va \n la xuong dong
	//in kq a+b
	printf("5 + 10.216 = %.2f\n", a+b); //giai thich: in ra man hinh bang lenh printf, va %f la chuoi dinh dang de gia tri dat vao dung vi tri do va la dinh dang so thuc, va \n la xuong dong
	
	
	
}
