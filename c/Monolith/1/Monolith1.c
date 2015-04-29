/**********
** 課題1 **
**********/

#include <stdio.h>
#include <stdlib.h>

struct rectangle{
	int x;
	int y;
	int width;
	int height;
};

int main(void)
{
	int x = 0, y = 0;
	char cx[80], cy[80];
	struct rectangle r = {10, 10, 70, 50};	//初期化

	puts("座標を入力して下さい．(x, y)");
	
	printf("x = ");
	fgets(cx, 80, stdin);
	x = atoi(cx);

	printf("y = ");
	fgets(cy, 80, stdin);
	y = atoi(cy);

	if(r.x <= x && r.y <= y && x <= (r.x + r.width) 
		&& y <= (r.y + r.height)) {
		printf("(%d, %d)は，図形の中にあります．\n", x, y);
	} else {
		printf("(%d, %d)は，図形の中にありません．\n", x, y);
	}
	
	return 0;
}
