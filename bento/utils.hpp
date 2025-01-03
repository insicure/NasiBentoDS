#pragma once

#include "bento/struct.hpp"
#include "nds/touch.h"
namespace nb {

  enum TouchPhase { TouchPhase_RELEASE, TouchPhase_DOWN, TouchPhase_HELD };

  void TraceLog(const char *format, ...);

  Vec2 GetCameraToScreen(const Vec2 &position, const Camera &camera);
  Vec2 GetScreenToCamera(const Vec2 &position, const Camera &camera);
  Matrix GetCameraMatrix(const Camera &camera);

  bool GetTouch(TouchPhase phase, touchPosition &touch);
}