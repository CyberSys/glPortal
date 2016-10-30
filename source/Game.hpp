#ifndef GAME_HPP
#define GAME_HPP

#include "World.hpp"
#include "GameController.hpp"

#include <radix/Window.hpp>
#include <radix/renderer/Renderer.hpp>
#include <radix/env/Config.hpp>
#include <radix/BaseGame.hpp>
#include "renderer/GameRenderer.hpp"
#include "renderer/UiRenderer.hpp"

namespace glPortal {

class Game : public radix::BaseGame {
public:
  Game();
  void processInput();
  void update();
private:
  std::unique_ptr<GameController> gameController;
  std::unique_ptr<GameRenderer> gameRenderer;
  std::unique_ptr<UiRenderer> uiRenderer;
  void initHook();
  double dtime;
};

} /* namespace glPortal */

#endif /* GAME_HPP */
