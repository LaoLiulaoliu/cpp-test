#include <stdio.h>
int main(int argc, char *argv[])
{
	printf("%d\t%d\t%d\t%d\t%d\n", sizeof(short), sizeof(int), sizeof(long), sizeof(char *), sizeof(short *));
	printf("%d\t%d\t%d\t%d\n", sizeof(bool), sizeof(wchar_t), sizeof(double), sizeof(long double));

    /* 枚举型尺寸是能够容纳最大枚举子值的整数尺寸
     *  enum长度不确定会带来可移植性问题，在enum 的最后加一个 UndefinedType = 0xFFFFFFFF，强制变成32位的 */
	enum Color {red, green, blue, mauve, black, orange,
	_Color_dummy=0x80000000};
	printf("%d\t%d\n", sizeof(Color), sizeof(size_t));
	return 0;
}
