#include <ecs/entity_manager.h>
#include <ecs/i_system.h>

void ISystem::Update(Context &ctx) {
  OnUpdate(ctx);
  entityManager->ForEach([this, &ctx](auto &entity) {
    if (Filter(entity)) Update(ctx, entity);
  });
  OnPostUpdate(ctx);
}