#pragma once

#include <game/levels/i_level_creator.h>

class Lvl2Creator : public ILevelCreator {
  void InitSystems();
  void InitEntities();
  void CreateBricks();
  void CreateBorders();

 public:
  Lvl2Creator(Engine *engine, Context &ctx, SceneManager *scene_manager);
  void Init() override;
  void Dispose() override;
};