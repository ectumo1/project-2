
/*
//��5�� ʾ������5.1
#include <stdio.h>
#define ADJUST 7.31
int main(void)
{
    const double SCALE = 0.333; //const ����
    double shoe, foot;
    shoe = 9.0;
    foot = SCALE * shoe + ADJUST;
    printf("Shoe Size (men's)    foot length\n");
    printf("%10.1f %15.2f inches \n", shoe, foot);

    return 0;
}
*/

/*
//��5�� ʾ������5.2
#include <stdio.h>
#define ADJUST 7.31
int main (void)
{
    const double SCALE = 0.333;
    double shoe, foot;
    printf("Shoe size (men's)    foot length\n");
    shoe = 3.0;
    while (shoe < 18.5)
    {
        foot = SCALE * shoe + ADJUST;
        printf("%10.1f %15.2f inches \n", shoe, foot);
        shoe = shoe + 1.0;
    }
    printf("If the shoe fits, wear it.\n");

    return 0;
}
*/

/*
//��5�� ʾ������5.3
#include <stdio.h>
int main (void)
{
    int jane, tarzan, cheeta;
    cheeta = tarzan = jane = 68;
    printf("                    cheeta   tarzan  jane\n");
    printf("First round score %4d %8d %8d\n",
           cheeta, tarzan, jane);

    return 0;
}
*/

/*
//��5�� ʾ������5.4
#include <stdio.h>
int main (void)
{
    int num = 1;
    while (num < 21)
    {
        printf("%4d %6d\n", num, num * num);
        num = num + 1;
    }

    return 0;
}
*/

/*
//��5�� ʾ������5.5
#include <stdio.h>
#define SQUARES 64  //�����еķ�����
int main (void)
{
    const double CROP = 2E16;  //����С�����������
    double current, total;
    int count = 1;
    printf("square   grains       total        ");
    printf("fraction of \n");
    printf("         added        grains       ");
    printf("world total\n");
    total = current = 1.0;  //��1�Ź�����ʼ
    printf("%4d %13.2e %12.2e %12.2e\n", count, current,
            total, total / CROP );
    while (count < SQUARES)
    {
        count = count + 1;
        current = 2.0 * current;
        total = total + current;
        printf("%4d %13.2e %12.2e %12.2e\n", count, current,
                total, total / CROP );
    }
    printf("That's all\n");
    return 0;
}
*/

/*
//��5�� ʾ������5.6
#include <stdio.h>
int main (void)
{
    printf("integer divison 5/4   is %d\n", 5 / 4);
    printf("integer divison 6/3   is %d\n", 6 / 3);
    printf("integer divison 7/4   is %d\n", 7 / 4);
    printf("float divison   7./4. is %1.2f\n", 7. / 4.);
    printf("mixed divison   7./4  is %1.2f\n", 7. / 4);

    return 0;
}
*/

/*
//��5�� ʾ������5.7
#include <stdio.h>
int main (void)
{
    int top, score;

    top = score = -(2 + 5) * 6 + (4 + 3 * (2 + 3));
    printf("top = %d, score = %d\n", top, score);

    return 0;
}
*/

/*
//��5�� ʾ������5.8
#include <stdio.h>
int main (void)
{
    int n = 0;
    size_t intsize;

    intsize = sizeof (int);
    printf("n = %d, n has %zd bytes; all ints have %zd  bytess.\n",
           n, sizeof n, intsize);

    return 0;
}
*/

/*
//��5�� ʾ������5.9
#include <stdio.h>
#define SEC_PER_MIN 60  //1����60��
int main (void)
{
    int sec, min, left;
    printf("Convert seconds to minutes and seconds!\n");
    printf("Enter the number of seconds (<=0 to quit):\n");
    scanf("%d", &sec);
    while (sec > 0)
    {
        min = sec / SEC_PER_MIN;
        left = sec % SEC_PER_MIN;
        printf("%d seconds is %d minutes, %d seconds.\n",
               sec, min, left);
        printf("Enter next value (<=0 to quit):\n");
        scanf("%d", &sec);
    }
    printf("Done!\n");

    return 0;
}
*/

/*
//��5�� ʾ������5.10
#include <stdio.h>
int main (void)
{
    int ultra = 0, super = 0;

    while (super < 5)
    {
        super++;
        ++ultra;
        printf("super = %d, ultra = %d \n", super, ultra);
    }

    return 0;
}
*/

/*
//��5�� ʾ������5.11
#include <stdio.h>
int main (void)
{
    int a = 1, b = 1;
    int a_post, pre_b;
    a_post = a++;
    pre_b = ++b;
    printf("a  a_post   b   pre_b \n");
    printf("%1d %5d %5d %5d\n", a, a_post, b, pre_b);

    return 0;
}
*/

/*
//��5�� ʾ������5.12
#include <stdio.h>
#define MAX 100
int main (void)
{
    int count = MAX + 1;

    while (--count > 0){
        printf("%d bottles of spring water one the wall,"
                "%d bottles of spring water!\n", count, count);
        printf("Take one down and pass it around, \n");
        printf("%d bottles of spring water!\n\n", count - 1);
    }

    return 0;
}
*/

/*
//��5�� ʾ������5.13
#include <stdio.h>
int main (void)
{
    int count, sum;             //����

    count = 0;                  //��ֵ���ʽ���
    sum = 0;                    //��ֵ���ʽ���
    while (count++ < 20)        //�������
        sum = sum + count;
    printf("sum = %d\n", sum);  //�������ñ��ʽ���

    return 0;                   //��ת���
}
*/

/*
//��5�� ʾ������5.14
#include <stdio.h>
int main (void)
{
    char ch;
    int i;
    float fl;

    fl = i = ch = 'C';
    printf("ch = %c, i = %d, fl = %.2f\n", ch, i, fl);
    ch = ch + 1;
    i = fl + 2 * ch;
    fl = 2.0 * ch + i;
    printf("ch = %c, i = %d, fl = %.2f\n", ch, i, fl);
    ch = 1107;
    printf("Now ch = %c\n", ch);
    ch = 80.89;
    printf("Now ch = %c\n", ch);

    return 0;
}
*/

/*
//��5�� ʾ������5.15
#include <stdio.h>
void pound (int n); //ANSI����ԭ������
int main (void)
{
    int times = 5;
    char ch = '!';  //ASCII��ֵ��33
    float  f = 6.0f;

    pound(times);  //int ���Ͳ���
    pound(ch);     //��pound((int) ch);��ͬ
    pound(f);      //��pound((int) f);��ͬ

    return 0;
}
void pound (int n) //ANSI�����ͷ
{                  //�����ú�������һ��int���͵Ĳ���
    while (n-- > 0)
        printf("#");
    printf("\n");
}
*/

/*
//��5�� ʾ������5.16
#include <stdio.h>
const int S_PER_M = 60;         //1���ӵ�����
const int S_PER_H = 3600;       //1Сʱ������
const double M_PER_K = 0.62137; //1�����Ӣ����

int main (void)
{
    double distk, distm;        //�ܹ��ľ���(�ֱ���Ӣ��͹���Ϊ��λ)
    double rate;                //ƽ���ٶ�(��Ӣ��/СʱΪ��λ)
    int min, sec;               //�ܲ���ʱ(�Է��Ӻ���Ϊ��λ)
    int time;                   //�ܲ���ʱ(����Ϊ��λ)
    double mtime;               //��1Ӣ����Ҫ��ʱ�䣬����Ϊ��λ
    int mmin, msec;             //��1Ӣ����Ҫ��ʱ�䣬�Է��Ӻ���Ϊ��λ

    printf("This program converts your time for a metric race\n");
    printf("to a time for running a mile and to your average\n");
    printf("speed in miles per hour.\n");
    printf("Please enter, in kilometers, the distance run.\n");
    scanf("%lf", &distk);
    printf("Next enter the time in minutes and seconds.\n");
    printf("Begin by entering the minutes.\n");
    scanf("%d", &min);
    printf("Now enter the seconds.\n");
    scanf("%d", &sec);

    time = S_PER_M * min + sec;         //��ʱ��ת������
    distm = M_PER_K * distk;            //�ѹ���ת����Ӣ��
    rate = distm / time * S_PER_H;      //Ӣ��/��*��/Сʱ = Ӣ��Сʱ
    mtime = (double) time / distm;      //ʱ��/���� = ��1Ӣ������ʱ��
    mmin = (int) mtime / S_PER_M;       //���������
    msec = (int) mtime % S_PER_M;       //������µ�����

    printf("You ran %1.2f km (%1.2f miles) in % d min, %d sec.\n",
            distk, distm, min, sec);
    printf("That pace corresponds to running a mile in %d min, ",
            mmin);
    printf("%d sec.\nYour average speed was %1.2f mph.\n", msec,
            rate);

    return 0;
}
*/

/*
//��5�� ��ϰ��6
#include <stdio.h>
#define FORMAT "%s! is cool!\n"
int main (void)
{

    printf(FORMAT,FORMAT); //printf("%s! is cool!\n",FORMAT)
    return 0;
}
*/

/*
//��5�� ��ϰ��9
#include <stdio.h>
#define TEN 10
int main (void)
{
    int n = 0;
    while (n++ < TEN - 3)
        printf("%5c", n + 96);
    printf("\n");

    return 0;
}
*/

/*
//��5�� ��ϰ��1
#include <stdio.h>
const int CHNUM = 60;       //ת����1���ӵ���60�룬1��Сʱ����60����
int main (void)
{
    int inputsec, hour, min, sec; //Сʱ�����ӣ��� �ɸ�����Ҫ��������
    printf("����������(<=0�����˳���\n");
    scanf("%d", &inputsec);
    while (inputsec > 0)
    {
        printf("\n�������ʱ��Ϊ��%d��\n", inputsec);
        hour = inputsec / (CHNUM * CHNUM);
        min = inputsec % (CHNUM * CHNUM) / CHNUM;
        sec = inputsec % CHNUM;
        printf("ת�����ʱ��Ϊ��%.2dСʱ%.2d����%.2d�롣\n", hour, min, sec);
        printf("���ٴ���������(<=0�����˳���\n");
        scanf("%d", &inputsec);
    }
    printf("�����˳���\n");

    return 0;
}
*/

/*
//��5�� ��ϰ��2
#include <stdio.h>
int main (void)
{
    int num;
    int count = 0;
    printf("������һ��������");
    scanf("%d", &num);
    while (count < 10)
        {
            printf("��%d����Ϊ%d\n", count + 1, num + count);
            count++;
        }
    printf("��ӡ������\n");

    return 0;
}
*/

/*
//��5�� ��ϰ��3
#include <stdio.h>
const int DTW = 7;  //7�����1��
int main (void)
{
    int iptdays, days, weeks; //�������������������ڣ�
    printf("������������\n");
    scanf("%d", &iptdays);
    weeks = iptdays / DTW;
    days = iptdays % DTW;
    printf("�������������%d,ת����Ϊ%.2d��%.1d�졣\n", iptdays, weeks, days);
    printf("��ӡ������\n");

    return 0;
}
*/

/*
//��5�� ��ϰ��4
#include <stdio.h>
const double CMTIN = 0.3937;     //���׵�Ӣ��
const int FTTIN = 12;            //1Ӣ�ߵ���12Ӣ��

int main (void)
{
    double cmheight, inheight, chinheight; //������ף����Ӣ��, ת��ʣ��Ӣ��
    int chftheight;                        //ת����Ӣ��

    printf("Enter a height in centimeters��");
    scanf("%lf", &cmheight);
    while (cmheight > 0)
    {

        inheight = cmheight * CMTIN;
        chftheight = inheight / 12;
        chinheight = inheight - chftheight * 12;
        cmheight = (int)cmheight; //�ض�С�����Ը��㷽ʽ��ʾ
        printf("%.1lf cm = %d feet, %.1lf inches\n", cmheight, chftheight, chinheight);
        printf("Enter a height in centimeters (<=0 to quit)��");
        scanf("%lf", &cmheight);
    }
    printf("bye\n");

    return 0;
}
*/

/*
//��5�� ��ϰ��5
#include <stdio.h>
int main (void)
{
    int days;
    int count = 0;
    int sum = 0;

    printf("������׬Ǯ��������");
    scanf("%d", &days);
    while (count++ < days)
        sum = sum + count;
    printf("���ܹ�׬��$%d\n", sum);

    return 0;
}
*/

/*
//��5�� ��ϰ��6
#include <stdio.h>
int main (void)
{
    int days;
    int count = 0;
    int sum = 0;

    printf("������׬Ǯ��������");
    scanf("%d", &days);
    while (count++ < days)
        sum = sum + count * count;
    printf("���ܹ�׬��$%d\n", sum);

    return 0;
}
*/

/*
//��5�� ��ϰ��7
#include <stdio.h>
void cube (double n);
int main (void)
{
    double num;
    printf("������һ����: ");
    scanf("%lf", &num);
    cube(num);

    return 0;
}
void cube (double n)
{
    printf("����Ϊ��%lf", n * n * n);
}
*/

/*
//��5�� ��ϰ��8
#include <stdio.h>
int main (void)
{
    const int SECOPRAND;
    int operand;

    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand: ");
    scanf("%d", &SECOPRAND);
    printf("Now enter the first operand: ");
    scanf("%d", &operand);
    while (operand > 0)
    {
        printf("%d %% %d is %d\n", operand, SECOPRAND, operand % SECOPRAND);
        printf("Enter next number for first operand: ");
        scanf("%d", &operand);
    }
    printf("Done\n");

    return 0;
}
*/

/*
//��5�� ��ϰ��9
#include <stdio.h>
void Temperatures (double Tmper);
int main (void)
{
    double ftemperature; //�����¶�
    int rnum;   //scanf()�����ķ���ֵ
    printf("������һ�������¶�ֵ��");
    rnum = scanf("%lf", &ftemperature);
    while (rnum == 1)
    {
        Temperatures(ftemperature);
        printf("������һ�������¶�ֵ��");
        rnum = scanf("%lf", &ftemperature);
    }
    printf("�����������˳���");

    return 0;
}
void Temperatures(double Tmper)
{
    const double FTC = 5.0 / 9.0 * (Tmper - 32.0);
    const double CTK = FTC + 273.16;
    printf("�����¶�Ϊ��%.3lfF\n�����¶�Ϊ��%.3lfC\n�����¶�Ϊ��%.3lfK\n",
           Tmper, FTC, CTK);

}
*/
