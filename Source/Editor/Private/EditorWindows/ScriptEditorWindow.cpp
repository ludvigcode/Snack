#include "EditorWindows\ScriptEditorWindow.hpp"
#include "SketchInclude.hpp"

namespace snack
{
ScriptEditorWindow::ScriptEditorWindow()
{
}

ScriptEditorWindow::~ScriptEditorWindow()
{
}

std::string ScriptEditorWindow::GetTitle()
{
    return "Script Editor";
}

void ScriptEditorWindow::OnDraw(f32 deltaTime)
{
    Sketch::Button("Save");
    Sketch::SameLine();
    Sketch::Button("Debug");
}
} // namespace snack
