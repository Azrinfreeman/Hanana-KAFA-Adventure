# Hanana KAFA Adventure

A Unity educational adventure prototype integrating multiple-choice Islamic-studies questions into a 3D adventure framework. The repository contains Watermelon game/core systems alongside Hanana question, profile, and score-reporting code.

## Educational integration

- Question groups include Akidah and Ibadah content in Malay.
- Four answer buttons present shuffled choices for randomly selected questions.
- Correct answers award 10 points; both correct and incorrect answers advance a five-attempt quiz session.
- Tick/cross, answer highlighting, animations, and audio provide feedback.
- Local profiles and per-player scores use PlayerPrefs; an existing Hanana endpoint receives score reports.

The underlying adventure framework includes world loading, resource/building systems, missions, inventory, and character controls. Included framework code is not evidence that every system is configured or working in this adaptation. Unity gameplay and device builds were not tested during this documentation review.

## Open the project

1. Install **Unity 6000.0.62f1**, matching [ProjectVersion.txt](ProjectSettings/ProjectVersion.txt), and clone the repository with its required assets.
2. Add the repository root through Unity Hub and allow asset import and package resolution to finish.
3. Open the enabled initialization scene at `Assets/Project Files/Game/Scenes/Init.unity`. Review the backend paths below before using Play mode with player data.
4. Test the world flow and question interactions in a development setup with synthetic profiles.

The [manifest](Packages/manifest.json) includes URP 17.2.0, Input System 1.14.2, AI Navigation 2.0.8, and Unity UI 2.0.0. [Build settings](ProjectSettings/EditorBuildSettings.asset) enable Init, Game, and World 0–4; MainMenu and framework examples are disabled.

## Code guide

| Area | Entry point |
| --- | --- |
| Question content and selected group | [QuestionClasses](Assets/QuestionClasses.cs) |
| Answer assignment, feedback, and session progression | [QuestionController](Assets/QuestionController.cs) |
| Linking adventure events to the question panel | [QuestionAssign](Assets/QuestionAssign.cs) |
| Local score increments | [ScoreController](Assets/ScoreController.cs) |
| Profile setup and score reporting | [GameStartupController](Assets/GameStartupController.cs) |

## Data and backend

Scores are stored under `StarsCollected_` plus the current player index. GameStartupController contains a POST to `app-hanana.com/adventuregamekafa/insertmark.php` with player name, player ID, star/round totals, and device name. Server source and deployment instructions are not included. The service was not contacted during this review, and its availability, authorization, and data handling are unverified. Inspect networking code before demonstrations with real player data.

## Status and reuse

See [validation notes](docs/VALIDATION.md) for source concerns and a manual checklist. This update changes documentation only; question correctness, scene wiring, progression, platform compatibility, and asset rights still require review.

Watermelon components and bundled assets remain unchanged. Preserve their existing notices and check vendor/asset/audio terms before redistribution. No new license or claim of sole authorship is added by this documentation update.
