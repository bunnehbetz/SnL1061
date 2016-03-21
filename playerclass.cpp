class Player {
private:
  int pos;
  string name;
  bool isTurn;
  bool winner;
public:
  void setName(string);
  string getName();
  void setPos(int);
  int getPos();
};

class Board {
public:
  bool isSnake(int);
  bool isLadder(int);

};

bool isSnake(int pos) {
  switch(pos) {
    case 17: case 54: case
  }
}
