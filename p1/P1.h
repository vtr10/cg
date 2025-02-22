#ifndef __P1_h
#define __P1_h

#include "Primitive.h"
#include "Scene.h"
#include "graphics/Application.h"
#include "SceneObject.h"

using namespace cg;

class P1: public GLWindow
{
public:
  P1(int width, int height):
    GLWindow{"cg2019 - P1", width, height},
    _program{"P1"}
  {
    // do nothing
  }


  /// Initialize the app.
  void initialize() override;

  /// Update the GUI.
  void gui() override;

  /// Render the scene.
  void render() override;

private:
  GLSL::Program _program;
  Reference<Scene> _scene;
  Reference<SceneObject> _box;
  Reference<Primitive> _primitive;
  SceneNode* _current{};
  Color selectedWireframeColor{255, 102, 0};
  mat4f _transform{mat4f::identity()};
  int counter, counterBox = 0;

  void buildScene();

  void hierarchyWindow();
  void inspectorWindow();
  void sceneGui();
  void sceneObjectGui();
  void objectGui();
  void funcao(SceneObject* obj, ImGuiTreeNodeFlags* flag);
  void func(SceneObject*);

  int getCountObject() {
	  return counter;
  }

  void addCountObject() {
	  counter += 1;
  }

  int getCountBox() {
	  return counterBox;
  }

  void addCountBox(){
	  counterBox += 1;
  }
}; // P1



#endif // __P1_h
 