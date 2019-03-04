#pragma once

#include <ecs/i_system.h>
#include <ecs/entity.h>

class TextureRenderSystem : public ISystem {
 protected:
  void Update(Context &ctx, Entity &entity) override;
  bool Filter(const Entity &entity) const override;
};