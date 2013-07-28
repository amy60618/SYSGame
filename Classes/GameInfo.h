#include "cocos2d.h"

#include <string>

USING_NS_CC;

#define GI (GameInfo::instance())

class Character;
class MainGame;
class Queue;

const int M_N = 20;
const int M_M = 20;

/** 
 * @brief ����ȫ����Ϣ�ĵ���
 */
class GameInfo
{
public:	
	static GameInfo& instance();

	GameInfo();

public:

public:

	MainGame*			Game;						// ָ��ǰ��ϷLayer��ָ��
	std::string			PathOfHero;					// Ӣ�۵�ͼƬ·��
	Queue*				Me;							// ָ����ҵ�ָ��
	float				ValidDraggedLength;			// ��Ч�Ļ������룬�ڴ˻����ϲŽ��л����ж�

	// ��ͼ���
	int					MapN;						//
	int					MapM;						// N��M�еĵ�ͼ
	int					GridSize;					// ��ͼÿһС��Ĵ�С
	bool				IsConq[M_N][M_M];			// ��ͼ��ĳһ���Ƿ�ռ��
	CCPoint				Grids[M_N][M_M];			// ÿһ����е�
};