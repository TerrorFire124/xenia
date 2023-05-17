#include <retroarch.h>
#include <xenia.h>

void xenia_init(void) {
  // Initialize Xenia.
  xenia_init_library();

  // Register Xenia as a kernel.
  retro_add_system(Xenia_System);
}

void xenia_deinit(void) {
  // Shutdown Xenia.
  xenia_shutdown_library();
}

void xenia_run(void) {
  // Run Xenia.
  xenia_run_game();
}

void xenia_pause(void) {
  // Pause Xenia.
  xenia_pause_game();
}

void xenia_resume(void) {
  // Resume Xenia.
  xenia_resume_game();
}

void xenia_step(void) {
  // Step Xenia forward one frame.
  xenia_step_game();
}

void xenia_save_state(void) {
  // Save the Xenia state.
  xenia_save_state();
}

void xenia_load_state(void) {
  // Load the Xenia state.
  xenia_load_state();
}

void xenia_cheat(void) {
  // Enable cheats in Xenia.
  xenia_enable_cheats();
}

void xenia_disable_cheat(void) {
  // Disable cheats in Xenia.
  xenia_disable_cheats();
}

void xenia_toggle_cheat(void) {
  // Toggle cheats in Xenia.
  xenia_toggle_cheats();
}

void xenia_set_cheat_value(const char* cheat_name, const char* value) {
  // Set the value of a cheat in Xenia.
  xenia_set_cheat_value(cheat_name, value);
}

void xenia_get_cheat_value(const char* cheat_name, char* value, int value_size) {
  // Get the value of a cheat in Xenia.
  xenia_get_cheat_value(cheat_name, value, value_size);
}

void xenia_list_cheats(void) {
  // List all cheats in Xenia.
  xenia_list_cheats();
}

void xenia_info(void) {
  // Print information about Xenia.
  xenia_info();
}

void xenia_help(void) {
  // Print help for Xenia.
  xenia_help();
}

void xenia_about(void) {
  // Print information about Xenia.
  xenia_about();
}

struct retro_system_info Xenia_System = {
  .name = "Xenia",
  .description = "Xenia is an open-source Xbox 360 emulator",
  .init = xenia_init,
  .deinit = xenia_deinit,
  .run = xenia_run,
  .pause = xenia_pause,
  .resume = xenia_resume,
  .step = xenia_step,
  .save_state = xenia_save_state,
  .load_state = xenia_load_state,
  .cheat = xenia_cheat,
  .disable_cheat = xenia_disable_cheat,
  .toggle_cheat = xenia_toggle_cheat,
  .set_cheat_value = xenia_set_cheat_value,
  .get_cheat_value = xenia_get_cheat_value,
  .list_cheats = xenia_list_cheats,
  .info = xenia_info,
  .help = xenia_help,
  .about = xenia_about,
};
