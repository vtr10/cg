//[]---------------------------------------------------------------[]
//|                                                                 |
//| Copyright (C) 2018 Orthrus Group.                               |
//|                                                                 |
//| This software is provided 'as-is', without any express or       |
//| implied warranty. In no event will the authors be held liable   |
//| for any damages arising from the use of this software.          |
//|                                                                 |
//| Permission is granted to anyone to use this software for any    |
//| purpose, including commercial applications, and to alter it and |
//| redistribute it freely, subject to the following restrictions:  |
//|                                                                 |
//| 1. The origin of this software must not be misrepresented; you  |
//| must not claim that you wrote the original software. If you use |
//| this software in a product, an acknowledgment in the product    |
//| documentation would be appreciated but is not required.         |
//|                                                                 |
//| 2. Altered source versions must be plainly marked as such, and  |
//| must not be misrepresented as being the original software.      |
//|                                                                 |
//| 3. This notice may not be removed or altered from any source    |
//| distribution.                                                   |
//|                                                                 |
//[]---------------------------------------------------------------[]
//
// OVERVIEW: Scene.h
// ========
// Class definition for scene.
//
// Author(s): Paulo Pagliosa (and your name)
// Last revision: 25/08/2018

#ifndef __Scene_h
#define __Scene_h

#include "SceneObject.h"
#include "graphics/Color.h"
#include <list>

namespace cg
{ // begin namespace cg


/////////////////////////////////////////////////////////////////////
//
// Scene: scene class
// =====
class Scene: public SceneNode
{
private:
	std::list<SceneObject*> sceneObjectList;
	
public:
  Color backgroundColor{Color::gray};

  /// Constructs an empty scene.
  Scene(const char* name):
    SceneNode{name}
  {
    // do nothing
  }

int 
sizeReturn() {
  return sceneObjectList.size();
}

auto 
listReturn() {
  return sceneObjectList;
}

void
removeSceneObject(SceneObject* a) {
  sceneObjectList.remove(a);
}
	
void
addObjectScene(SceneObject* o) {
  sceneObjectList.insert(sceneObjectList.begin(), o);
}

}; // Scene
	

} // end namespace cg

#endif // __Scene_h
