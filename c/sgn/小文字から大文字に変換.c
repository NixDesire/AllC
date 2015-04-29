char henkan(char moji)
{
	if(('a' <= moji) && (moji <= 'z'))
		return moji - 0x20;
	else return moji;
}