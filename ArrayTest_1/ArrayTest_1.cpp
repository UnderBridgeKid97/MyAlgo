// ArrayTest_1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.

#include <iostream>  // 이 두개는 필수
#include <array>	 //  c++컴파일러에서 제공하는 헤더 
#include <vector>

using namespace std; 

// 2행 3열의 원소를 출력하라
// c++ vector 2차원 배열 활용
int main()
{
	// 2차원 배열 선언 및 초기화
	vector<vector<int>> mat1(2, vector<int>(3,0)); // int형 배열을 가진 배열
	
	vector<vector<int>> mat2{
		{1, 2, 3},
		{4, 5, 6}
	};

	// 출력
	for (int r = 0; r < mat2.size(); r++) // 가지고잇는 벡터의 개수
	{
		for (int c = 0; c < mat2[r].size(); c++) // 백터안의 원소수 
		{
			cout << mat2[r][c] << " ";
		}
		cout << endl;

	}
}




// ==========================================================================


// 2행 3열 원ㅅ의 합을 구하라
// c언어 2차원 배열 활용
//int main()
//{
//	int mat[2][3] = { 
//			{1,2,3} , 
//			{4,5,6}		};
//
//	int sum = 0;
//	for (int r = 0; r < 2; r++)
//	{
//		for (int c = 0; c < 3; c++)
//		{
//			sum += mat[r][c];
//		}
//	}
//	cout << "Sum:" << sum << endl;
//}

// ==========================================================================

// 가변형 배열 vector 활용
//int main()
//{
//	vector<int> v1;
//
//	v1.push_back(10); // push_back()으로 데이터 삽입
//	v1.push_back(20);
//	v1.push_back(30);
//
//	vector<int> v2(10); // 0으로 초기화된 10개의 방 생성 (메모리 할당)
//	vector<int> v3(10, 1); // 1으로 초기화된 10개의 방 생성 (메모리 할당)
//	vector<int> v4{ 10, 20, 30, 40 ,50 }; // 값이 각각 들어간 방 5개 생성
//
//	vector<int> v5(v4);  // 다른 벡터값을 가져와 초기화 가능
//	vector<int> v6(v4.begin(), v4.begin() + 3);
//
//	for (int i = 0; i < v6.size(); i++)
//	{
//		cout << v6[i] << endl;
//	}
//}

//// 동적 메모리를 관리하는 클래스
//template<typename T>
//class DynamicArray
//{
//private:				// public & private에 할당하는 내용을 아래에 적음
//	unsigned int sz;
//	T* arr;
//
//public:
//	// 생성자 : 매개변수를 크기를 입력받아 동적 메모리 할당
//	DynamicArray(int n) : sz(n)
//	{
//		arr = new T[sz] {}; // 쓰래기값이 들어가지않게  {} =0 으로 초기화
//	}
//
//	// 소멸사 : 할당된 메모리를 해제
//	~DynamicArray() // 1. 메인 프로세스가 끝나면 소멸자를 불러 메모리 해제하지않아도 알아서 소멸
//	{
//		delete[] arr;
//		cout << "동적 메모리 해제" << endl;
//	}
//
//	unsigned int size()
//	{
//		return sz;
//	}
//	T & operator[] (const int i) { return arr[i]; }
//};
//
//int main()
//{
//	// 메모리 할당
//	DynamicArray<float> da(5);
//	da[0] = 10.5;
//	da[1] = 20.4;
//	da[2] = 30.3;
//
//	for (int i = 0; i < da.size(); i++)
//	{
//		cout << da[i] << endl;
//	}
//	// 2. 메모리 해제안해도됨 
//
//}

// ==========================================================================

//// 동적 메모리 할당 예제
//int main()
//{
//	// 동적 메모리 할당 
//	int* ptr = new int[3] {};
//	ptr[0] = 10;
//	ptr[1] = 20;
//
//	for (int i = 0; i < 3; i++)
//	{
//		cout << ptr[i] << endl;
//	}
//
//	// 동적 메모리 할당 해제 -  반드시 해야함 delete, free
//	delete[] ptr;
//	ptr = nullptr ;
//
//}

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

