#include<stdio.h>
#include<math.h>
int fen(double x,double y){
	double r=x*x+y*y;
	if(r<=3*3)
	return 100;
	else if(r<=6*6)
	return 80;
	else if(r<=9*9)
	return 60;
	else if(r<=12*12)
	return 40;
	else if(r<=15*15)
	return 20;
	else
	return 0;
}
int main(){
	int score1,score2;
	double a[6],b[6];
	while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&b[0],&b[1],&b[2],&b[3],&b[4],&b[5])){
		if(a[0] == -100)
		{ 
			break;
		}
		score1=fen(a[0],a[1])+fen(a[2],a[3])+fen(a[4],a[5]);
		score2=fen(b[0],b[1])+fen(b[2],b[3])+fen(b[4],b[5]);
		if(score1==score2)
			printf("SCORE: %d to %d, TIE.\n",score1,score2);
		else if(score1>score2)
			printf("SCORE: %d to %d, PLAYER 1 WINS.\n",score1,score2);
		else
			printf("SCORE: %d to %d, PLAYER 2 WINS.\n",score1,score2);
	}
	return 0;
} 