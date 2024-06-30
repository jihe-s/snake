#include "map.h"
#include <windows.h>

void Map::PrintInitmap()//���Ƴ�ʼ��ͼ
{
    for (auto& point : initmap)
    {
        point.Print();
        Sleep(10);//����Sleep������Ӫ�춯��Ч��
    }
}
//