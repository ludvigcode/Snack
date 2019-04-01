#pragma once

#include "BaseTypes.hpp"

#include <glm/glm.hpp>
#include <string>
#include <vector>

namespace spy
{
class RENDER_CORE_API ObjParser final
{
public:

    ObjParser();

    ~ObjParser();

    static bool Parse(const std::string& filename, std::vector<glm::vec3>& positions, std::vector<glm::vec3>& normals,
        std::vector<glm::vec2>& textureCoordiantes, std::vector<uint32>& elements);

private:

    std::string m_error;
};
} // namespace spy