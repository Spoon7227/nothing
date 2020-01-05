#include "src/color.c"
#include "src/game.c"
#include "src/game/camera.c"
#include "src/game/level.c"
#include "src/game/level/background.c"
#include "src/game/level/boxes.c"
#include "src/game/level/goals.c"
#include "src/game/level/labels.c"
#include "src/game/level/lava.c"
#include "src/game/level/lava/wavy_rect.c"
#include "src/game/level/platforms.c"
#include "src/game/level/player.c"
#include "src/game/level/explosion.c"
#include "src/game/level/regions.c"
#include "src/game/level/rigid_bodies.c"
#include "src/game/level_picker.c"
#include "src/game/credits.c"
#include "src/game/settings.c"
#include "src/game/sound_samples.c"
#include "src/game/sprite_font.c"
#include "src/main.c"
#include "src/math/rand.c"
#include "src/math/rect.c"
#include "src/math/triangle.c"
#include "src/sdl/renderer.c"
#include "src/sdl/texture.c"
#include "src/ui/cursor.c"
#include "src/ui/console.c"
#include "src/ui/console_log.c"
#include "src/ui/edit_field.c"
#include "src/ui/history.c"
#include "src/ui/wiggly_text.c"
#include "src/ui/slider.c"
#include "src/ui/grid.c"
#include "src/game/level/level_editor.c"
#include "src/game/level/level_editor/color_picker.c"
#include "src/game/level/level_editor/rect_layer.c"
#include "src/game/level/level_editor/layer_picker.c"
#include "src/game/level/level_editor/point_layer.c"
#include "src/game/level/level_editor/player_layer.c"
#include "src/game/level/level_editor/layer.c"
#include "src/game/level/level_editor/label_layer.c"
#include "src/game/level/level_editor/background_layer.c"
#include "src/game/level/level_editor/undo_history.c"
#include "src/game/level/level_editor/action_picker.c"
#include "src/system/log.c"
#include "src/system/lt_adapters.c"
#include "src/system/nth_alloc.c"
#include "src/system/stacktrace.c"
#include "src/system/str.c"
#include "src/dynarray.c"
#include "src/system/file.c"
#include "src/ring_buffer.c"
