#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> v;
    v.reserve(8);        // 벡터 메모리 공간 8 예약 할당

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << endl;
    cout << endl;

    cout << "size : " << v.size()                // 벡터 원소 개수
        << " capacity : " << v.capacity()            // 벡터의 할당된 메모리의 크기
        << "  max_size : " << v.max_size() << endl;    // 최대 저장 가능한 원소 개수


    cout << endl << "-- resize(10) -- " << endl;
    
    v.resize(10);            // 벡터의 원소 갯수를 10개로 확장, 추가된 공간은 디폴트 0으로 채워진다.
    
    for (vector<int>::size_type i = 0; i < v.size(); ++i)   // 벡터의 size 타입으로 i를 지정한다 (unsigned int) 
        cout << v[i] << endl;
    cout << endl;

    cout << "size : " << v.size()
        << " capacity : " << v.capacity()
        << "  max_size : " << v.max_size() << endl;


    cout << endl << "-- resize(3) -- " << endl;

    v.resize(3);            // 벡터의 원소 갯수를 3개로 축소, capacity는 변화 없다.

    for (vector<int>::size_type i = 0; i < v.size(); i++)
        cout << v[i] << endl;
    cout << endl;

    cout << "size : " << v.size()                
        << " capacity : " << v.capacity()            
        << "  max_size : " << v.max_size() << endl;


    cout << endl << "-- vector clear() -- " << endl;

    v.clear();    // 벡터 비운다    capacity(메모리) 는 그대로 남아있다.

    if (v.empty()){    // 벡터에 원소가 없는지 확인한다.
        cout << "벡터에 원소가 없다." << endl;
    }

    cout << "size : " << v.size()
        << " capacity : " << v.capacity()
        << "  max_size : " << v.max_size() << endl;

    return 0;
}

