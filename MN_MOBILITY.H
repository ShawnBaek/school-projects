#define  TRUE 1
#define  FALSE 0 
#define  NORTH 1
#define  SOUTH 2
#define  EAST 3
#define  WEST 4 

#define  WIDTH_NUM 8 
#define  LENGTH_NUM 8 

#define  F_MN_NUM  50
#define  L_MN_NUM  50

#define  MOVED_NUM 100
 
#define MAX 1000000
#define END_TIME 10000

#define MN_FILE1 "gamma_100.txt"
#define MN_FILE2 "gamma_1000.txt"

#define NS_OUTFILE "common\\NS_output.txt"
#define TS_OUTFILE "common\\TS_output.txt"


//#define NS_OUTFILE "/home/duman2/MN_MOBILITY/NS_output.txt"
//#define TS_OUTFILE "/home/duman2/MN_MOBILITY/TS_output.txt"
typedef struct {
    int MN_ID;
    int AS_ID;
    float Moved_Time;
} Node_struct;

