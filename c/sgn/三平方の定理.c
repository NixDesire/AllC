double triangle_edge(double a, double b)	
{
	double box=0;	//cの長さを格納する変数

	box = sqrt((pow(a,2) + pow(b,2)));	//余弦定理実行5
	
	return box;	//boxを返す
}