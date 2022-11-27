
#include "stdafx.h"
#include "Furthest.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*
typedef struct {
	int AS[AS_NUM+1];
	int Join_MN[F_MN_NUM + L_MN_NUM+1];
} LMAP_struct;
*/

//생성자 함수 부분에 삽입시켜 주자.
Furthest::Furthest(){
	
	int i, j, k;
	int size = -1;
	numOfBU = 0;
	numOfNode = F_MN_NUM + L_MN_NUM ;
	
//init
	int index = 1;

	for(i = 1; i <= FMAP_NUM ; i++){
		
		for(j=1;j<= 16; ){
			for(k=0; k<4;k++,j++){
				FMAP[i].AS[j] = index++;
			}
			index+=4;	
		}
		switch(i){
			case 1 : index =5; break;
			case 2 : index =33; break;
			case 3 : index =37; break;
		}
/* 이부분을 함수로 만들란 소리인가?
		printf("i: %d  - %d %d %d %d \n", i,FMAP[i].AS[1],FMAP[i].AS[2],FMAP[i].AS[3],FMAP[i].AS[4]);
		printf("i: %d  - %d %d %d %d \n", i,FMAP[i].AS[5],FMAP[i].AS[6],FMAP[i].AS[7],FMAP[i].AS[8]);
		printf("i: %d  - %d %d %d %d \n", i,FMAP[i].AS[9],FMAP[i].AS[10],FMAP[i].AS[11],FMAP[i].AS[12]);
		printf("i: %d  - %d %d %d %d \n", i,FMAP[i].AS[13],FMAP[i].AS[14],FMAP[i].AS[15],FMAP[i].AS[16]);
*/
	}
	
	for (i=1 ; i<=FMAP_NUM ; i++){
		for(j=1 ; j <= numOfNode; j++){
			   FMAP[i].Join_MN[j] = 0;
		}
	}
		
	size = makeNode(Node, NS_INFILE); 	
	numOfBU = cal_numOfBU ( Node, size );
	
	printf("result : %d\n", numOfBU);
	
//	printNode(Node, size);
	
	//return 0;
} //end main



int Furthest::makeNode(Node_struct * Node, char *file){
	
	FILE *fd;
	int num_line, i;
	char buf[BUF_LEN], *token;
	
	fd = fopen(file, "r");
	i = 0;
	while(fgets(buf, BUF_LEN, fd)){

		i++;
		token = strtok(buf, " \t\n"); 
		Node[i].MN_ID = atoi(token);
		token = strtok(NULL," \t\n");
		Node[i].AS_ID = atoi(token);
		token = strtok(NULL," \t\n");
		Node[i].Moved_Time = atof(token);
	}
	
	//printNode(Node,i);
	
	return i;		
}


int Furthest::cal_numOfBU(Node_struct * Node, int size){
	
	int i = -1;	
	numOfBU = 0 ;
	for(i =1; i <= size; i++){
//		printf("%d %d ", i, isStay(Node[i]));
		if(!isStay(Node[i])){
			numOfBU++;
			changeMAP(Node[i]);
		}
	}
	return numOfBU;
}  //end FT.

int Furthest::isStay(Node_struct a){
	
	int oMAP, nMAP;
	
	oMAP = whereWas(a);
	nMAP = whereIs(a);
//	printf("		oMAP %d   nMAP  %d\n", oMAP, nMAP);
	if(oMAP == nMAP) return TRUE;
	else return FALSE;

}


int Furthest::whereWas(Node_struct k){
	
	int i = -1;
	
	for(i = 1; i <= FMAP_NUM; i++){
		if( FMAP[i].Join_MN[k.MN_ID] == SET){
//			printf("Was : %d \n", i);
			return i;
		}
	}
	return FALSE ;
}


int Furthest::whereIs(Node_struct k){

	int i, j ;

	for( i = 1; i<= FMAP_NUM; i++){
		for( j = 1; j <= AS_NUM ; j++){
			if( FMAP[i].AS[j] == k.AS_ID){
		//	printf("is : %d \n", i);
				return i;
			}
		}
	}

	return FALSE ;
}


void Furthest::changeMAP(Node_struct k){

	removeAllinMAP (k);
	checkMAP (k);	
		
}


void Furthest::removeAllinMAP (Node_struct k) {
	
	int i;
	
	for(i = 1; i <= FMAP_NUM; i++){
		FMAP[i].Join_MN[k.MN_ID] = RESET ; 
	}

}

void Furthest::checkMAP (Node_struct k) {

	int i = whereIs(k);
	FMAP[i].Join_MN[k.MN_ID] = SET ; 
		
}

void Furthest::printNode(Node_struct *Node, int size){
	int i ;
	printf("--------------------------------------\n");
	for (i=1; i<=size; i++){
		printf("%2d   %2d   %2d   %2f  \n",i, Node[i].MN_ID, Node[i].AS_ID, Node[i].Moved_Time);
	}
}

