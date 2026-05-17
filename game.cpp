#include <array>
#include <iostream>

constexpr int MAP_SIZE = 10;
constexpr char TILE = '#';
constexpr char EXIT_KEY = 'p';
constexpr char PLAYER_SYMBOL[] = "4";

using Map = std::array<std::array<char, MAP_SIZE>, MAP_SIZE>;

Map createMap() {
  Map map{};
  for (int row = 0; row < MAP_SIZE; ++row) {
    for (int col = 0; col < MAP_SIZE; ++col) {
      map[row][col] = TILE;
    }
  }
  return map;
}

void drawMap(int posX, int posY, const Map& gameMap) {
  for (int row = 0; row < MAP_SIZE; ++row) {
    for (int col = 0; col < MAP_SIZE; ++col) {
      if (posX == col && posY == row) {
        std::cout << PLAYER_SYMBOL;
      } else {
        std::cout << gameMap[row][col];
      }
    }
    std::cout << '\n';
  }
  std::cout << '\n';
}

void updatePosition(char input, int& posX, int& posY, bool& gameOver) {
  switch (input) {
    case 'a':
      if (posX > 0) {
        --posX;
      }
      break;
    case 'd':
      if (posX < MAP_SIZE - 1) {
        ++posX;
      }
      break;
    case 'w':
      if (posY > 0) {
        --posY;
      }
      break;
    case 's':
      if (posY < MAP_SIZE - 1) {
        ++posY;
      }
      break;
    case EXIT_KEY:
      gameOver = true;
      break;
    default:
      break;
  }
}

int main() {
  int posX = 0;
  int posY = 0;
  Map map = createMap();

  bool gameOver = false;
  char teclado = '\0';

  drawMap(posX, posY, map);
  while (!gameOver) {
    std::cin >> teclado;
    updatePosition(teclado, posX, posY, gameOver);
    drawMap(posX, posY, map);
  }

  return 0;
}