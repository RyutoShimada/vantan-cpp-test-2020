#include <iostream>

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

//問6
/*
#include <iostream>

int main()
{
	int size;				//制限するサイズ
	const int MAX = 25;		//制限値

	if ( size > MAX )
		std::cout << "サイズが大きすぎる" << std::endl;
		size = MAX;
	std::cout << "サイズ : " << size << std::endl;

	return 0;
}

1.const int MAX	 2.if ( size > MAX )  3.size = MAX;  4.MAX = 25;
A.if ( size > MAX )
ex.if分に{}がないため、size = MAX;が外に出てしまう。
*/

//問7
//
//static int length(
//	const char string[]		//チェックする文字列
//)
//{
//	int index;				//文字列のインデックス
//	/*
//   *　文字列の末尾に達するまでループする
//   */
//	for (index = 0; string[index] != '\0'; ++index)
//		/* 何もしない */
//
//		return index;
//}
//
//int main()
//{
//	char line[100];			//ユーザーからの入力行
//
//	while (1) {
//		std::cout << "文字列を入力してください : ";
//		std::cin.getline(line, sizeof(line));
//
//		std::cout << "文字列の長さ: "
//			<< length(line) << std::endl;
//	}
//	return 0;
//}

//1.std::cin.getline(line, sizeof(line));  2.const char string[]  3.char line[100];  4./* 何もしない */
//A./* 何もしない */
//ex./* 何もしない */の後にセミコロン(;)がないため、return index;がfor文の一部になってしまう。

//問8
/*
#include <iostream>

int main()
{
	int n1, n2;		//2つの整数

	std::cout << "2つの整数を入力してください ; ";
	std::cin >> n1 >> n2;

	if (n2 = !0)
		std::cout << "除算結果 : "
				  << (n1 / n2) << '\n';
	else
		std::cout <<"ゼロで割ることはできません" <<std::endl;

	return 0;
}

1.n2 = !0  2.std::cout << "除算結果 : "  3.<< (n1 / n2) << '\n';  4.std::cin >> n1 >> n2;
A.n2 = !0
ex.n2 = !0 n2に0以外の数値を代入する式になっている。n2 != 0が正しい。
*/

//問9
/*
#include <iostream>

#define MAX = 10;

int main()
{
	int counter;		//現在のあいさつ回数

	for ( counter = MAX; counter > 0; --counter )
		sed::cout << "はい、こんにちは！\n";

	return (0);
}

1.counter = MAX;  2.MAX = 10;  3.counter > 0; --counter  4.<< "はい、こんにちは！\n";
A.MAX = 10;
ex.counter = MAX は MAX = 10 によって counter == 10 となり、初期化できていないので、回数が不定になる。
*/

//問10
/*
#include <iostream>

//簡単な行列
	int matrix[3][3] = {
		{11, 12, 13},
		{21, 22, 23},
		{31, 32, 33}
	};

int main()
{
	std::cout << "Element[1, 2] : " << matrix[1, 2]
			  << std::endl;
	return (0);
}

1.{31, 32, 33}  2.int matrix[3][3] = {  3.{21, 22, 23},  4.matrix[1, 2]
A.matrix[1, 2]
ex.C++のカンマ演算子は、単純に第2部分の結果を返すので、第1部分を捨てるように指示することになる。正しくは、matrix[1][2]。
*/

//問11
/*
#include <iostream>

#define CI const int
CI P_USER = (1 << 1);		//通常ユーザーの特権
CI P_REBOOT = (1 << 2);		//システムをリブートできる
CI P_KILL = (1 << 3);		//任意のプロセスを殺せる
CI P_TAPE = (1 << 4);		//テープデバイスを使える
CI P_RAW = (1 << 5);		//RAWデバイスの入出力ができる
CI P_DRIVER = (1 << 6);		//ドライバをロードできる
CI P_ADMIN = (1 << 7);		//管理を行うことができる
CI P_BACKUP = (1 << 8);		//バックアップ操作ができる

int main()
{
	//特権
	unsigned char privs = 0;

	//いくつかの特権を設定する
	privs |= P_ADMIN;
	privs |= P_BACKUP;

	std::cout << "特権";

	if ((privs & P_ADMIN) != 0)
		std::cout << "管理特権";

	if ((privs & P_BACKUP) != 0)
		std::cout << "バックアップ特権";

	std::cout << std::endl;
	return 0;
}

1.privs |= P_BACKUP;  2.CI P_ADMIN = (1 << 7);  3.privs |= P_ADMIN;  4.#define CI const int
A.privs |= P_BACKUP;
ex.1個の文字は0～7までの番号が付いた8個のビットを持つ。番号8のビットは存在しいないので、この式は何もしない。
*/

//問12
/*
#include <iostream>

int main()
{
	char ch = 'A';

	std::cout << ch;		//Aを出力する
	std::cout << ch + 1;	//Bを出力する
	std::cout << ch + 2;	//Cを出力する
	std::cout << std::endl;
	return (0);
}

1.std::cout << std::endl;  2.char ch = 'A';  3.std::cout << ch + 1;  4.std::cout << ch;
A.std::cout << std::endl;
ex.「ch + 1」は整数(66)になる。C++はこれを検出し、std::cout.operator << (int)関数を呼びだすので、整数値を出力する。正しくは、static_cast<char>(ch + 1)
*/

//問13
/*
#include <iostream>
#include <string>

static const std::string& bool_name(
	const bool value	//チェックする値
)
{
	//'true'の値
	const std::string& true_name("true");

	//'true'の値
	const std::string& false_name("false");

	if (value == true)
		return(true_name);

	return(false_name);
}

int main()
{
	char ch = 'A';

	std::cout << "true は " << bool_name(true)
		<< std::endl;

	std::cout << "false は " << bool_name(false)
		<< std::endl;

	return 0;
}

1.bool_name(true)bool_name(true)  2.const std::string& false_name("false");  3.const bool value  4.static const std::string& bool_name
A.static const std::string& bool_name
ex.この関数がローカル変数への参照を返す点が問題。これでは宙吊り参照となり存在しない何かを参照するのでトラブルとなる。
*/

//問14
/*
#include <iostream>

const int& max(
	const int& i1,	//1つの変数
	const int& i2	//もう1つの変数
)
{
	if (i1 < i2)
		return (i1);
	return (i2);
}

int main()
{
	//iは、2つの式の最大のものである
	const int& i = max(1 + 2, 3 + 4);

	std::cout
		<< "最大の式は : "
		<< i << std::endl;

	return 0;
}

1.const int& max  2.const int& i  3.max(1 + 2, 3 + 4)  4.const int& i1
A.const int& max
ex.max()が仮引数へ参照を返すことが問題。関数を抜けた時点でiは存在しない何かを参照することになるで、宙づり参照となる。
*/

//問15
/*
#include <iostream>

struct data
{
	//次のパラメーターの意味を示すフラグ
	char flag;

	//パラメーターの値
	long int value;
};

void read_data(
	std::istream& in_file,	//読み取るファイル
	struct data& what		//取得するファイル
)
{
	in_file.read(
		(char*)(&what),
		sizeof(what));
}

1.struct data& what  2.char flag;  3.(char*)(&what)  4.std::istream& in_file,
A.char flag;
ex.アライメントの問題。C++の構造体では、整頓するためにパディング(詰め物)を挿入する。
*/

//問16
/*
#include <iostream>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <sys/param.h>

char* tmp_name(void) {
	//生成する名前
	char name[MAXPATHLEN];

	//生成する名前の基本部分
	const char DIR[] = "/var/tmp/tmp";

	//最終桁用の連番
	static int sequence = 0;

	++sequence;		//次のファイルに移る

	sprintf(name, "%.%d", DIR, sequence);

	return (name);
}

int main()
{
	char* a_name = tmp_name();	//	一時的な名前
	std::cout << "Name : " << a_name << std::endl;
	return 0;
}

1.char* a_name = tmp_name();  2.static int sequence  3.char name[MAXPATHLEN];  4.sprintf(name, "%.%d"
A.char name[MAXPATHLEN];
ex.tmp_name()がローカル変数をnameへのポインタを返すことが問題。staticと宣言することで解決。
*/

//問17
/*
#include <iostream>



1.  2.  3.  4.
A.
ex.
*/

//問18
/*
#include <iostream>



1.  2.  3.  4.
A.
ex.
*/

//問19
/*
#include <iostream>



1.  2.  3.  4.
A.
ex.
*/

//問20
/*
#include <iostream>



1.  2.  3.  4.
A.
ex.
*/

//問21
/*
#include <iostream>



1.  2.  3.  4.
A.
ex.
*/

//問22
/*
#include <iostream>



1.  2.  3.  4.
A.
ex.
*/

//問23
/*
#include <iostream>



1.  2.  3.  4.
A.
ex.
*/

//問24
/*
#include <iostream>



1.  2.  3.  4.
A.
ex.
*/

//問25
/*
#include <iostream>



1.  2.  3.  4.
A.
ex.
*/