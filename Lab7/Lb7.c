#include <stdio.h>
#include <locale.h>
#include <new.h>
#include <malloc.h>
#include <time.h>

int menui() {
    printf_s("\n����:\n1. ��������\n2. �������\n3. �����\n4. �������� ������\n5. �����\n");
    printf_s("��� �����:");
}
int paste_arh(int mas[], int razmer,int h) {
    if (h>0)
    {
        printf_s("�����: ");
        for (int i = 0; i < razmer; i++)
        {

           
                printf_s(" %d ", mas[i]);
           

        }
    }
    else 
    {
        printf_s("�����:  ");
        for (int i = 0; i < razmer; i++)
        {

            mas[i] = 0;

            
            printf_s(" %d ", mas[i]);

        }
        h++;
        
    }
    h++;
    
}
int paste(int mas[], int razmer) {
    int vb;
    printf_s("\n�������� ��� ����������:\n1. �� ������\n2. �� ��������\n3. ��������\n��� ����� : ");
    scanf_s("%d", &vb);
    if (vb == 1)
    {
        int y;
        printf_s("������� ������: ");
        scanf_s("%d", &y);
        int ui1;
        printf_s("������� ����� ��� ������: ");
        scanf_s("%d", &ui1);
        mas[y] = ui1;
        return mas;
    }
    else if (vb == 2)
    {
        int x;
        int ui;
        printf_s("������� �������e: ");
        scanf_s("%d", &x);
        for (int i = 0; i < razmer; i++)
        {

            if (mas[i] == x)
            {
                printf_s("������� ����� ��� ������: ");
                scanf_s("%d", &ui);
                mas[i] = ui;
            }
        }

    }
    else if (vb == 3)
    {
        for (int i = 0; i < razmer; i++)
        {
            mas[i] = rand() % 100;
        }

    }
    else
    {
        printf_s("����� ���-�� �� �� ");
        
    }
}
int delet(int mas[], int razmer) {
    int vb;
    printf_s("\n�������� ��� ��������:\n1. �� ������\n2. �� ��������\n��� ����� : ");
    scanf_s("%d", &vb);
    if (vb == 1)
    {

        int y;
        printf_s("������� ������: ");
        scanf_s("%d", &y);
        int ui1=0;
        mas[y] = ui1;
        return mas;
    }
    else if (vb == 2)
    {
        int x;
        int ui;
        printf_s("������� �������e: ");
        scanf_s("%d", &x);
        for (int i = 0; i < razmer; i++)
        {

            if (mas[i] == x)
            {
                ui = 0;
                mas[i] = ui;
            }
        }

    }
    else
    {
        printf_s("����� ���-�� �� �� ");

    }
}
int search(int mas[], int razmer) {
    int vb;
    printf_s("\n�������� ��� ������:\n1. �� ������\n2. �� ��������\n��� ����� : ");
    scanf_s("%d", &vb);
    if (vb == 1)
    {
        int y;
        printf_s("������� ������: ");
        scanf_s("%d", &y);
        printf_s("\n����� ������� �� ������: %d", mas);
        return mas;
    }
    else if (vb == 2)
    {
        int x;
        int ui;
        printf_s("������� �������e: ");
        scanf_s("%d", &x);
        for (int i = 0; i < razmer; i++)
        {

            if (mas[i] == x)
            {
                printf_s("\n����� ������� �� ������: %d", mas);
            }
        }

    }
    else
    {
        printf_s("����� ���-�� �� �� ");

    }
}
int clear(int mas[], int razmer) {
    for (int i = 0; i < razmer; i++)
    {

        mas[i] = 0;
        

    }
}
int main() {

    setlocale(LC_ALL, "ru");
    int d, h=0;
    int t;
    srand(time(NULL));
    printf_s("������� ������ ������: ");
    scanf_s("%d", &t); 
    int* Mas;
    Mas = (int*)malloc(t * sizeof(int));
    paste_arh(Mas, t,h);
    menui();
    scanf_s("%d", &d);
    do {
        switch (d)
        {
        case 1:
            system("cls");
            paste_arh(Mas, t, h);
            paste(Mas, t);
            h++;
            system("cls");
            paste_arh(Mas, t, h);
            menui();
            scanf_s("%d", &d);
            system("cls");
            break;
        case 2:
            system("cls");
            paste_arh(Mas, t, h);
            delet(Mas, t);
            h++;
            system("cls");
            paste_arh(Mas, t, h);
            menui();
            scanf_s("%d", &d);
            system("cls");
            break;
        case 3:
            system("cls");
            paste_arh(Mas, t, h);
            search(Mas, t);
            h++;
            system("cls");
            paste_arh(Mas, t, h);
            menui();
            scanf_s("%d", &d);
            system("cls");
            
            break;
        case 4:
            system("cls");
            clear(Mas, t);
            paste_arh(Mas, t, h);
            menui();
            scanf_s("%d", &d);
            system("cls");
            break;
        case 5:
            d = 6;
            break;
        default:
           
            break;
        }
    } while (d != 6);
    return 0;
}