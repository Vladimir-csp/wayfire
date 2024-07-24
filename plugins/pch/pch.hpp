#define JSON_NO_IO
#define JSON_HAS_FILESYSTEM 0
#define JSON_HAS_EXPERIMENTAL_FILESYSTEM 0
#define JSON_USE_GLOBAL_UDLS 0

#include <nlohmann/json.hpp>
//#include "../ipc/nlohmann.hpp"
//#include "../ipc/ipc-helpers.hpp"
//#include "../ipc/ipc-activator.hpp"

#include <wayland-server.h>
#include <glm/glm.hpp>

#include <string>
#include <vector>
#include <utility>
#include <memory>
#include <functional>
#include <algorithm>
#include <sstream>
#include <map>
#include <cmath>
#include <cstddef>
//
//#include "wayfire/view-transform.hpp"
//#include "wayfire/core.hpp"
//#include "wayfire/per-output-plugin.hpp"
//#include "wayfire/view-transform.hpp"
//#include "wayfire/scene.hpp"
//#include "wayfire/workarea.hpp"
//#include "wayfire/seat.hpp"
//#include "wayfire/render-manager.hpp"
//
//#include "wayfire/plugins/common/workspace-wall.hpp"
//#include "wayfire/plugins/common/move-drag-interface.hpp"
//#include "wayfire/plugins/common/input-grab.hpp"
