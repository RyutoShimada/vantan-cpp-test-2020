#include <iostream>

int main()
{
	char ch;		//フラグ
	ch = 0xFF;		//フラグを設定する

	//フラグをチェックする
	if (ch == 0xFF)
		std::cout << "成功" << std::endl;
	else
		std::cout << "失敗" << std::endl;

	return 0;
}

//問1
/*
#include <iostream>

void main()
{
	std::cout << "Hello World!\n";
}

1.iostream	2.void main  3.main(void)  4.\n  
A.void main
ex.main()関数はオペレーティングシステムに終了コードを返す(return 0;)
*/

//問2
/*
#include <iostream>

int main()
{
	int sum;		//合計
	int count;		//現在の数値

	for(count = 1; count <= 100; ++count)
		sum += count;

	std::cout
		<< "1から100までの数値の合計 :"
		<< sum << std::endl;

	return (0);
}

1.int sum  2.count = 1  3.++count  4.return(0)
A.int sum
ex.sumが初期化されていないので、変数にどんな値が入っているか分からない。(VisualStudioでは初期化しないと実行できなかった)
*/

//問3
/*
#include <iostream>

void main()
{
	char ch;		//フラグ
	ch = OxFF;		//フラグを設定する
	
	//フラグをチェックする
	if( ch == OxFF )
		std::cout << "成功" << std::endl;
	else
		std::cout << "失敗" << std::endl;

	return 0;
}

1.main()  2.if(ch == 0xFF)  3.ch = 0xFF  4.char ch
A.char ch
ex.このchは符号付文字かもしれない。比較のために符号付整数に変換されると、int(ch) = -1(0xFFFFFFFF)となり、比較結果は偽になる。
int(ch) = 0xFF;  このように書くと真になる。
*/
