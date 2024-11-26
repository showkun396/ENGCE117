#include <stdio.h>
#include <string.h>

int main()
{   
    char mama, gass, hwt, full ;
    printf("ขั้นตอนการต้มบะหมี่กึ่งสำเร็จรูป \n") ;
    printf("ตอบ y = yes , n = No : \n") ;
    printf("มีบะหมี่กึ่งสำเร็จรูปหรือไม่(y/n) : ") ;
    scanf("%c", &mama) ;

    switch(mama){
        case 'y':
            printf("แกะซองบะหมี่กึ่งสำเร็จรูป\n") ;
            break;
        case 'n':
            printf("ไปซื้อบะหมี่กึ่งสำเร็จรูปตลาด\n") ;
            break ;
         default:
            printf("กรุณากรอก y หรือ n เท่านั้น\n");
            return 0;  // หยุดการทำงานหากกรอกข้อมูลไม่ถูกต้อง
    } 
    getchar();

    printf("ตั้งน้ำเตรียมต้มบะหมี่กึ่งสำเร็จรูป \n") ;
    printf("เปิดแก๊สได้ไหม(y/n) : ") ;
    scanf("%c", &gass) ;

    switch(gass){
        case 'y':
            printf("รอน้ำเดือดสักครู่\n") ;
            break;
        case 'n':
            printf("แก๊สหมดต้องเติมแก๊ส \n") ;
            break;
        default:
            printf("กรุณากรอก y หรือ n เท่านั้น\n");
            return 0;  // หยุดการทำงานหากกรอกข้อมูลไม่ถูกต้อง
    }
    getchar();

    printf("น้ำเดือดหรือยัง (y/n) :") ;
    scanf("%c", &hwt) ;
    switch(hwt){
        case 'y':
            printf("นำบะหมี่สำเร็จรูปใส่ลงไปในน้ำที่กำลังเดือด\n") ;
            break;
        case 'n':
            printf("รอจนกว่าน้ำจะเดือด น้ำเดือดถึงจะใส่\n") ;
            break;
        default:
            printf("กรุณากรอก y หรือ n เท่านั้น\n");
            return 0;  // หยุดการทำงานหากกรอกข้อมูลไม่ถูกต้อง
    }
    getchar();

    printf("บะหมี่สุกหรือยัง (y/n) :") ;
    scanf("%c", &full) ;
    switch(full){
        case 'y':
            printf("ตักออกใส่ถ้วยปรุงรสพร้อมกิน\n") ;
            break;
        case 'n':
            printf("รอจนกว่าจำสุก \n") ;
            break;
        default:
            printf("กรุณากรอก y หรือ n เท่านั้น\n");
            return 0;  // หยุดการทำงานหากกรอกข้อมูลไม่ถูกต้อง
    }

    return 0;
}//end switch