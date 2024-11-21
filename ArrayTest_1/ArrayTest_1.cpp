// ArrayTest_1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>  // 이 두개는 필수
#include <array>	 //  c++컴파일러에서 제공하는 헤더 

using namespace std; //

// 동적 메모리 할당 예제
int main()
{
	// 동적 메모리 할당 
	int* ptr = new int[3] {};
	ptr[0] = 10;
	ptr[1] = 20;

	for (int i = 0; i < 3; i++)
	{
		cout << ptr[i] << endl;
	}

	// 동적 메모리 할당 해제 -  반드시 해야함 
	delete[] ptr;
	ptr = nullptr ;

}

// ==========================================================================

//// c++언어 배열 구현 - 점수들의 평균을 구하라
//int main()
//{
//	// 배열구하기
//	array<int, 5>  scores = { 50,60,70,80,90 }; // c#에선 제네릭, c++은 탬플릿 = <>
//
//	// 합계구하기
//	int sum = 0;
//	for (int i = 0; i < scores.size(); i++) // .size() = 배열을 구해줌
//	{
//		sum += scores[i];
//	}
//
//	// 평균구하기
//	float avg = (float)sum / scores.size();
//
//	// 출력
//	cout << "Average Score: " << avg << endl; // endl: 라인이 끝남  << = +
//
//}
// ★ alt +드래그하면 부분만 드래그 가능 ★

//=======================================================================

// c언어 배열 구현 - 점수들의 평균을 구하라 
//int main()
//{
//	// 배열 선언
//	int scores[5] = { 50, 60, 70, 80, 90};
//
////	int lenght = sizeof(scores) / sizeof(scores[0]); // 스코어스의 총 방의 길이 / 배열 1
//	int lenght = size(scores);  // ->위의 코드랑 같은 기능을 c++에서 제공 
//
//	// 합계 구하기
//	int sum = 0;
//	for (int i = 0; i < lenght; i++)
//	{
//		sum += scores[i];
//	}
//
//	// 평균구하기
//	float avg = (float)sum / lenght; 
//
//	// 출력
//	cout << "Average Score: " << avg << endl; // endl: 라인이 끝남  << = +
//
//}

//====================================================================

//int main()
//{
//    std::cout << "Hello Array!\n";
//}

