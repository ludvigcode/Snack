#pragma once
#include "RenderCoreForward.hpp"
#include <glm/glm.hpp>
#include <unordered_map>
#include <string>

namespace spy
{
class ENGINE_API Material final
{
private:
    struct TextureProperty 
    {
        Texture* texture;
        glm::vec4 color;
    };
public:
    Material();
    ~Material();
    Texture* LoadTexture(const std::string& filename, const std::string& uniform);
    Texture* LoadTexture(const std::string& filename, const std::string& uniform, const glm::vec4& color);
private:
    std::unordered_map<std::string, TextureProperty> m_textures;
};
}