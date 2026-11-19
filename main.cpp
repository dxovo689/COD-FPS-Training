
#include <iostream>
#include <vector>
#include <string>

using namespace std;

// 游戏基本设置
struct GameSettings {
    float sensitivity = 5.0f;
    float fov = 90.0f;
    int targetCount = 8;
    bool trainingMode = true;
};

// 训练靶子
struct Target {
    int id;
    float x;
    float y;
    bool active;
};

// 初始化训练场
int main() {

    GameSettings settings;

    vector<Target> targets;

    for (int i = 0; i < settings.targetCount; i++) {
        Target target;

        target.id = i + 1;
        target.x = 100.0f + i * 80.0f;
        target.y = 200.0f;
        target.active = true;

        targets.push_back(target);
    }

    cout << "COD FPS TRAINING" << endl;
    cout << "Training Simulator Started!" << endl;
    cout << "FOV: " << settings.fov << endl;
    cout << "Sensitivity: " << settings.sensitivity << endl;
    cout << "Targets: " << targets.size() << endl;

    return 0;
}
