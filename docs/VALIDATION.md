# Documentation review and manual checks

Baseline: `0fef2a7f928da491934fa8dbec88dd9e801b1b7a`.

## Scope and evidence

README and these notes only. No scripts, scenes, assets, packages, settings, or saved data are changed.

Reviewed question content structure, four-button assignment, correct/incorrect feedback, five-attempt progression, local scoring/profile selection, initialization/build scenes, framework controllers, and the score-reporting request. Checked documentation links, seven enabled scene paths, and whitespace.

No Unity compilation, gameplay, device build, or live service request was performed. This is not a full-history security or asset-rights audit.

## Source observations

- QuestionClasses.Start appends groups to its public levels list. Confirm that scene serialization and initialization do not duplicate or reorder content.
- QuestionController indexes level minus one and assumes four answer entries, four buttons, and a valid answer index. Inspect every configured question/group and invalid or empty inputs.
- Random distractor bookkeeping samples other question indices even though displayed distractors come from the current question's answer list. Check retained randomAnswer state and small banks for excessive loops or stalled prompts.
- Delayed answer feedback and button-enabling coroutines can overlap if the panel is reopened quickly. Check duplicate rewards, prompt reset, and dismissal during feedback.
- QuestionAssign uses a delayed named-object lookup; feedback finds named audio objects and fixed child components. Verify references and initialization order in each world.
- DetailPlayer derives the profile index from only the final character of a key. Check selection/deletion with ten or more profiles.
- Score persistence and external reporting are separate mechanisms. Test network failure without assuming server synchronization is successful.
- Generated Burst debug directories and published build artifacts are tracked. They were not removed; inspect distributable contents and asset/vendor permissions separately before release.

## Manual checklist

1. Import in Unity 6000.0.62f1, check compilation/references, start from Init, and verify Game plus all five worlds load correctly.
2. Review networking and use synthetic profiles in an approved development setup. Exercise profile creation, switching, restart, and deletion.
3. Verify question/answer accuracy with a subject reviewer. Test all four buttons, correct and incorrect feedback, five-attempt completion, repeated panels, and +10 scoring exactly once.
4. Test small/empty banks, invalid group indices, initialization order, interruptions during feedback, and multi-digit profile keys.
5. Exercise intended controls and device builds; review package/vendor licenses, published artifacts, and network error behavior before distribution.

Source concerns above remain unfixed in this documentation-only change.
