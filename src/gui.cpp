/**
 * @file gui.cpp
 * @author Rob Barton (robmakesgam.es)
 * @brief Implementation for gui.hpp
 *
 */

#include <raylib.h>

#include "gui.hpp"

void gui::DrawMainMenu() {

    const char *title_text = "BRICK BREAKER";
    int title_width = MeasureText(title_text, 54);
    DrawText(title_text, (GetScreenWidth() / 2) - title_width / 2, 80, 54, WHITE);

    if (menu_option == 1) {
        const char *play_text = "PLAY";
        int play_width = MeasureText(play_text, 28);
        DrawText(play_text, (GetScreenWidth() / 2) - play_width / 2, 220, 28, RED);

        const char *high_score_text = "HIGH SCORES";
        int high_score_width = MeasureText(high_score_text, 28);
        DrawText(high_score_text, (GetScreenWidth() / 2) - high_score_width / 2, 300, 28, WHITE);

        const char *exit_text = "EXIT";
        int exit_width = MeasureText(exit_text, 28);
        DrawText(exit_text, (GetScreenWidth() / 2) - exit_width / 2, 380, 28, WHITE);
    }
    if (menu_option == 2) {
        const char *play_text = "PLAY";
        int play_width = MeasureText(play_text, 28);
        DrawText(play_text, (GetScreenWidth() / 2) - play_width / 2, 220, 28, WHITE);

        const char *high_score_text = "HIGH SCORES";
        int high_score_width = MeasureText(high_score_text, 28);
        DrawText(high_score_text, (GetScreenWidth() / 2) - high_score_width / 2, 300, 28, RED);

        const char *exit_text = "EXIT";
        int exit_width = MeasureText(exit_text, 28);
        DrawText(exit_text, (GetScreenWidth() / 2) - exit_width / 2, 380, 28, WHITE);
    }
    if (menu_option == 3) {
        const char *play_text = "PLAY";
        int play_width = MeasureText(play_text, 28);
        DrawText(play_text, (GetScreenWidth() / 2) - play_width / 2, 220, 28, WHITE);

        const char *high_score_text = "HIGH SCORES";
        int high_score_width = MeasureText(high_score_text, 28);
        DrawText(high_score_text, (GetScreenWidth() / 2) - high_score_width / 2, 300, 28, WHITE);

        const char *exit_text = "EXIT";
        int exit_width = MeasureText(exit_text, 28);
        DrawText(exit_text, (GetScreenWidth() / 2) - exit_width / 2, 380, 28, RED);
    }
}

void gui::DrawPreGameUI() {
    const char *pre_game_text = TextFormat("Press SPACE to begin");
    int pre_game_text_width = MeasureText(pre_game_text, 32);
    DrawText(pre_game_text, (GetScreenWidth() / 2) - pre_game_text_width / 2, 350, 32, WHITE);
}

void gui::DrawInGameUI(int lives, int score, int current_level, int total_levels) {
    DrawText(TextFormat("LIVES: %i", lives), 10, GetScreenHeight() - 20, 16, WHITE);
    DrawText(TextFormat("Score: %i", score), 10, 7, 16, WHITE);
    DrawText(TextFormat("LEVEL: %i/%i", (current_level + 1), total_levels), GetScreenWidth() - 100,
             GetScreenHeight() - 20, 16, WHITE);
}

void gui::DrawLevelText(int level_number) {
    const char *level_text = TextFormat("Level %i", level_number + 1);
    int level_text_width = MeasureText(level_text, 48);
    DrawText(level_text, (GetScreenWidth() / 2) - level_text_width / 2, 350, 48, WHITE);
}

void gui::MoveUpMainMenu() {
    if (menu_option > 1) {
        menu_option--;
    } else {
        menu_option = 3;
    }
}

void gui::MoveDownMainMenu() {
    if (menu_option < 3) {
        menu_option++;
    } else {
        menu_option = 1;
    }
}

int gui::GetCurrentMainMenuOption() {
    return menu_option;
}

void gui::DrawGameOverScreen() {
    const char *game_over_title = "Game Over!";
    int game_over_title_width = MeasureText(game_over_title, 48);
    DrawText(game_over_title, (GetScreenWidth() / 2) - game_over_title_width / 2, 150, 48, WHITE);

    const char *game_over_subtitle = "Press SPACE to go to the main menu";
    int game_over_subtitle_width = MeasureText(game_over_subtitle, 28);
    DrawText(game_over_subtitle, (GetScreenWidth() / 2) - game_over_subtitle_width / 2, 250, 28,
             WHITE);
}

void gui::DrawGameCompleteScreen(int score) {
    const char *game_over_title = "Game Complete!!";
    int game_over_title_width = MeasureText(game_over_title, 48);
    DrawText(game_over_title, (GetScreenWidth() / 2) - game_over_title_width / 2, 150, 48, WHITE);

    const char *game_over_subtitle = "Press SPACE to go to the main menu";
    int game_over_subtitle_width = MeasureText(game_over_subtitle, 28);
    DrawText(game_over_subtitle, (GetScreenWidth() / 2) - game_over_subtitle_width / 2, 250, 28,
             WHITE);

    const char *score_text = TextFormat("Score: %i", score);
    int score_text_width = MeasureText(score_text, 28);
    DrawText(score_text, (GetScreenWidth() / 2) - score_text_width / 2, 350, 28, WHITE);
}
