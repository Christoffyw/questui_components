#pragma once

#include "Component.hpp"
#include "RootContainer.hpp"

#include <utility>
#include <vector>

namespace UnityEngine::UI {
    class VerticalLayoutGroup;
}

namespace QuestUI_Components {

    class VerticalLayoutGroup : public Component, public Container {
    public:
        explicit VerticalLayoutGroup(std::vector<ComponentWrapper> children) {
            renderChildren = std::move(children);
        }

    protected:
        void renderComponentInContainer(ComponentWrapper &comp) override;

        UnityEngine::Transform* render(UnityEngine::Transform *parentTransform) override;

        UnityEngine::UI::VerticalLayoutGroup* verticalLayoutGroup;
    };
}