# pragma once

# include "renderer/renderer_internal.h"
# include "renderer/camera_internal.h"
# include "core/core_internal.h"
# include "scene_manager/scene_manager_internal.h"
# include "ecs/ecs.h"

typedef struct global
{
	// Application
	Application_State application_state;
	// Scene Manager
	Scene_Manager* scene_manager;
	// Renderer
	Render_State renderer_state;
	// Camera
	Camera camera;
	// Level
	u32 level_width;
	u32 level_height;
	// ECS
	Ecs_State ecs_state;
	// IO
	char* prefs_directory;

}Global;

extern Global global;
