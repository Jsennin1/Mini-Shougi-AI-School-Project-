#include "../types.h"
#include "../misc.h"
#include "../position.h"
#include <vector>
#include <iostream>     // std::cout
#include <sstream>      // std::istringstream
#include "../usi.h"
#include <string> 
void user_test(Position& pos, std::istringstream& is)
{
	StateInfo si;
	ExtMove m;
	
	
	for (ExtMove a : MoveList<LEGAL_ALL>(pos)) {
		//if (a.move == USI::to_move(pos, std::to_string(is)))

	}
	pos.do_move(m.move, si); // 1 手進める
	std::cout << m.move << std::endl; // 指し手を出力
	std::cout << pos << std::endl; // 局面を出力

}

