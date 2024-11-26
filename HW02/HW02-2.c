#include <stdio.h>

int main(){
    char st;
    printf("เข้าเว็ปจ้างงานทำเว็ป \n") ;
    printf("หางานที่เราสามารถทำงานได้ (y/n) :") ;
    scanf("%c",&st);
        if (st=='y')
            {
                printf ("ติดต่อคุยงานกับลูกค้า \n") ;
            }
        else if (st=='n')
            {
                printf ("หางานต่อไป \n") ;
                return;
            }
        else
            {
                printf("กรุณากรอก y หรือ n เท่านั้น\n");
                return;
            }
    getchar();   
    printf("ลูกค้ามีความน่าเชื่อถือหรือไม่ (y/n) :") ;
    scanf("%c",&st);
        if (st=='y')
            {
                printf ("ลูกค้ามีความน่าเชื่อถือ \n") ;
            }
        else if (st=='n')
            {
                printf ("ลูกค้าไม่น่าเชื่อถือ กลับไปหางานต่อไป \n") ;
                return;
            }
        else
            {
                printf("กรุณากรอก y หรือ n เท่านั้น\n") ;
                return;
            }
    getchar();
    printf("ถามความต้องการของลูกค้า \n") ;
    printf("วิเคราะงานว่าเราสามารถทำงานได้จริง (y/n) :") ;
    scanf("%c",&st);
        if (st=='y')
            {
                printf ("สามารถทำได้ตามความต้องการของลูกค้า \n") ;
            }
        else if (st=='n')
            {
                printf ("เกินความสามารถกลับไปหางานใหม่ \n") ;
                return;
            }
        else
            {
                printf("กรุณากรอก y หรือ n เท่านั้น\n") ;
                return;
            }
    getchar();
    printf("คุยเรื่องระยะเวลา เงินค่าจ้าง ค่ามัดจำ \n") ;
    printf("ยอมรับได้ไหม (y/n) :") ;
    scanf("%c",&st);
        if (st=='y')
            {
                printf ("สนใจ,รับข้อเสนอ \n") ;
            }
        else
            {
                getchar();
                printf("ต่อรองงานได้ไหม(y/n) :") ;
                scanf("%c",&st);
                if (st=='y')
                {
                   printf ("ต่อรองสำเร็จ \n") ;
                }
                else
                {
                    getchar();
                    printf ("ต่อรองไม่สำสำเร็จจะทำงานนี้อยู่ไหม (y/n) :") ;
                    scanf("%c",&st);
                    if (st=='y')
                    {
                       printf ("จะรับทำงานนี้ต่อ \n") ;
                    }
                    else if (st=='n')
                    {
                        printf ("เปลี่ยนงานใหม่ \n") ;
                        return;
                    }   
                }
            }
            printf ("เซ็นสัญญารับงาน \n") ;
            printf ("รับเงินมัดจำล่วงหน้าและเริ่มทำงาน \n") ;  
}