#include <lib/ecs/entity.h>
#include <lib/ecs/entity_manager.h>
#include <algorithm>
#include <memory>

Entity* EntityManager::CreateEntity() {
  auto entity = new Entity();
  entity->id = ++last_entity_id;
  entities.push_back(std::unique_ptr<Entity>(entity));
  return entity;
}
void EntityManager::DeleteEntity(size_t id) {
  auto iter =
      std::remove_if(entities.begin(), entities.end(), [id](const auto& entity) { return entity->GetId() == id; });
  entities.erase(iter, entities.end());
}
EntityManager::~EntityManager() {
  entities.clear();
}
void EntityManager::RemoveEntities() {
  entities.clear();
}
