#pragma once
class Hex
{
	private:
		bool moveAllowed;
		bool occupiedByPlayer;

	public:
		bool isMoveAllowed();
		void setMove(bool move);

		bool isOccupiedByPlayer();
		void setOccupation(bool occupation);

		Hex();
};

