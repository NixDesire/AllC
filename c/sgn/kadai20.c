#include <stdio.h>

int birthday(int *month, int *day, int *days, char **m_name)
{
  printf("Enter your birthday [mm/dd] : ");
  scanf("%d/%d", month, day);
  
  if(1 <= *month && *month <= 12){    //���1������12��Β�֒����Ò�����
    if(*(days+(*month-1)) >= *day && *day >= 1){   //�����Ւ��1��ʒ�咤���Ē����Β�Β�������ʒ�������Ò�����
      printf("Your birthday is %s %d.\n", *(m_name + (*month-1)), *day);
      return 0;
    }
  }
  return -1;
}

int constellation(int month, int day, int *days, int term[][4], char **c_name)
{
  int i;
  
  if(1 <= month && month <= 12){    //���1������12��Β�֒����Ò�����
    if(*(days+(month-1)) >= day && day > 0){    //�����Ւ��1��ʒ�咤���Ē����Β�Β�������ʒ�������Ò�����
      for(i = 0; i < 12; i++){    //���12�����뒤Β��12���뒡����
        if(term[i][0] == month){    //���������Β����ϒ�ȒƱ��������Ò�����
          if(term[i][1] <= day && day <= days[month-1]){    //������Β����ϒ����ʒ�咤���Ē����Β�Β�������ʒ�������Ò�����
            printf("Therefore, your constellation is the %s.\n", *(c_name + i));    
            return 0;
          }
        }else if(term[i][2] == month){    //���������Β���λ��ȒƱ��������Ò�����
          if(1 <= day && day <= term[i][3]){    //1��ʒ�咤���Ē�����Β���λ�����ʒ�������Ò�����
            printf("Therefore, your constellation is the %s.\n", *(c_name + i));
            return 0;
          }
        }
      }
    }
  }
  return -1;
}
  
int main()
{
  char *c_name[12] = {"ARIES", "TAURUS", "GEMINI", "CANCER",
                      "LEO", "VIRGO", "LIBRA", "SCORPIO",
                      "SAGITTARIUS", "CAPRICORN", "AQUARIUS", "PISCES"};
  int term[12][4] = {{3, 21, 4, 19}, {4, 20, 5, 20}, {5, 21, 6, 21},
                     {6, 22, 7, 22}, {7, 23, 8, 22}, {8, 23, 9, 22},
                     {9, 23, 10, 23}, {10, 24, 11, 21}, {11, 22, 12, 21},
                     {12, 22, 1, 19}, {1, 20, 2, 18}, {2, 19, 3, 20}};
/* ��ƒ�Β����� ��ʒ����뒤��ǯ��ΒȽ��꒤ϒ̵��뒤����) */
  int days[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
/* ��ƒ�Β�ђ̾ */
  char *m_name[12] = {"Jan.", "Feb.", "Mar.", "Apr.", "May.", "Jun.",
                      "Jul.", "Aug.", "Sep.", "Oct.", "Nov.", "Dec."};
  int month=0, day=0;

/* ��������������ϒ����ƒ����Βǧ��Β����Ւ��В�ϒ����� */
  if(birthday(&month,&day,days,m_name)){
    printf("Error : strange data was entered.\n");
    return -1;
  }
/* �������Ĵ��ْ�ƒ�В�ϒ����� */
    if(constellation(month,day,days,term,c_name)){
    printf("Error : strange data was entered.\n");
    return -1;
  }
  return 0;
}

/*
��ݒ��19���20
�ɸ��������ϒ���������Ւ������ϒ�������ђ�쒤Β�Ȓ������ɽ��������뒥ג�풥���钥�
��͒�������Ȓ����ƒ�ϒ�Β�����1������12�����ޒ�ǒ��Ƚ��꒤�
�����Ւ��1��ʒ�咤���Ē�������Β�Β�������ʒ�������Ò�����ɽ��������뒥ג�풥���钥�
��ؒ�����if��Β�撤˒����뒤Β�ǒ����ے����Ò�����-1����֒����Ȓ����钡����
��������Ò�����0����֒�������Ȓ�ǒ������λ(if�ʸ��Β�撤����)

������ϒ�ǒ�钤˒����Ւ���������������Ƚ��꒤򒤷���
������Β�ϒ�ϒ��2�ʬ���
��������ϒ�������钷���
������Ƭ�����钽��λ���
��ǒ����������뒡�

12��ʒ�Β��12���뒡���ג�������ƒ�咵����2�ʬ��䒤����������������������
�������ɽ������0����֒��
��ے����ϒƱ������-1����֒�����
*/
