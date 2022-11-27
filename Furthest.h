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
		
		//노드의 개수 
		//Node_struct Node[(F_MN_NUM + L_MN_NUM)*MOVED_NUM + 1] ;
	
		//노드 생성
		int makeNode(Node_struct *, char *);
		//바인딩 업데이트 계산
		int cal_numOfBU(Node_struct * , int );
		//노드가 머무리는 시간
		int isStay(Node_struct);
		//이전에 노드가 머물렀던 곳
		int whereWas(Node_struct);
		//현재 노드가 이는 곳	
		int whereIs(Node_struct);
		//맵을 바꾸는 함수
		void changeMAP(Node_struct);
		//맵을 삭제
		void removeAllinMAP (Node_struct);
		//맵을 체크
		void checkMAP (Node_struct);
		//노드를 출력
		void printNode(Node_struct *, int );
};
