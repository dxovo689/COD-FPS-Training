
#ifndef GAME_CORE_H
#define GAME_CORE_H

#include <vector>
#include <cstdint>

// 游戏设置
struct GameSettings {
    float sensitivity = 5.0f;
    float fov = 90.0f;
    int targetCount = 8;
    bool trainingMode = true;
};

// 训练靶子
struct Target {
    int id = 0;
    float x = 0.0f;
    float y = 0.0f;
    float speed = 2.0f;
    bool active = true;
};

// 游戏核心
class GameCore {
public:
    GameCore();

    void initialize();
    void update(float deltaTime);

    void setSensitivity(float value);
    void setFOV(float value);

    const GameSettings& getSettings() const;
    const std::vector<Target>& getTargets() const;

private:
    GameSettings settings;
    std::vector<Target> targets;
};

#endif
