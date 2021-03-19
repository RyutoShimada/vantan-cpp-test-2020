#include <iostream>

using namespace std;

int main()
{
	
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

int main()
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

//問4
/*
#include <iostream>

using namespace std;

int main()
{
	float result;		//除算の結果

	result = 1 / 3;		//resultに何かを代入する

	std::cout << "除算の結果 : "<< result << endl;
	return (0);
}

1.return(0)	 2.std::cout;  3.result = 1 / 3;  4.result << endl;
A.result = 1 / 3;
ex.1と3は整数なので、結果は0となる。正しくは、1.0 / 3.0
*/

//問5
/*
#include <iostream>

int main()
{
	int i;		//チェックする数値

	for (i = 2; i< 10; ++i) {
		switch(i){
		case 2:
		case 3:
		case 5:
		case 7:
			std::cout << i << "は素数である" << std::endl;
			break;
		defualt;
			std::cout << i << "は素数ではない" << std::endl;
			break;
		}
	}

	return 0;
}

1.case 3:	 2.case 7:  3.defualt;  4.for (i = 2; i < 10; ++i)
A.defualt;
ex.スペルが違う。正しくは、default;
*/
