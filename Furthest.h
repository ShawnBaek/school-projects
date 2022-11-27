#pragma once
#include "MN_MOBILITY.h"
#include <windows.h>

#define FMAP_NUM 4
#define AS_NUM  16 

#define SET 1
#define RESET 0
#define BUF_LEN 256
#define NS_INFILE "common\\NS_output.txt"


typedef struct {
	int AS[AS_NUM+1];
	int Join_MN[F_MN_NUM + L_MN_NUM+1];
} HMAP_struct;



class Furthest{
public:	Furthest();
			
		int numOfBU;
		int numOfNode;
	
		CString str;
		HMAP_struct FMAP[FMAP_NUM+1];
		Node_struct Node[(F_MN_NUM + L_MN_NUM)*MOVED_NUM + 1];
		
		//����� ���� 
		//Node_struct Node[(F_MN_NUM + L_MN_NUM)*MOVED_NUM + 1] ;
	
		//��� ����
		int makeNode(Node_struct *, char *);
		//���ε� ������Ʈ ���
		int cal_numOfBU(Node_struct * , int );
		//��尡 �ӹ����� �ð�
		int isStay(Node_struct);
		//������ ��尡 �ӹ����� ��
		int whereWas(Node_struct);
		//���� ��尡 �̴� ��	
		int whereIs(Node_struct);
		//���� �ٲٴ� �Լ�
		void changeMAP(Node_struct);
		//���� ����
		void removeAllinMAP (Node_struct);
		//���� üũ
		void checkMAP (Node_struct);
		//��带 ���
		void printNode(Node_struct *, int );
};
