============================== GRADING RUBRIC ===============================

20% - Project shows skills the student has learned this semester (whether in C++, prompting, or in a separate game engine or library)

20% - README.txt or README.md explains what the program is, and how to run it.

20% - Student added some material (puzzle, choices, or feature) other than suggested by the original assignments.

40% - Overall functionality and clarity of program.

================================ INFORMATION =================================

Hello! Welcome to my text-escape room game! When you begin the game, you will
come across three puzzles that you need to solve in the respective order:

1. Guess the number
2. Morse code cracking
3. Scramble

All you have to do is get through these puzzles and you win the game!
Simply begin the game and then follow the instructions.

====================== AI PROMPTS: GPT-4o mini & Gemini ======================

Bot 1: Timer Bot (GPT-4o mini)
Prompt 1: "I'm making an escape room game in C++, please give me some puzzle ideas I could use for it in levels of increasing difficulty for the player."
Prompt 2: "How do I put in a timer feature for my C++ game that will lead them to a game over if they fail to reach the end in time? This will all be text."
Prompt 3: "Can you remake this, but with "using namespace std" in it?"
Prompt 4: "Can you make it so the timer starts when the player enters into a specific room (the different rooms are different void functions)."
Prompt 5: "I don't fully understand the part where the timer starts when a player enters a room. Could you explain that more? Also, will the timer continue to go as the player advances through each room? If not, please add that in to the code."
Prompt 6: "It says that "timerThread" was not declared. What do I do?"
Prompt 7: "When starting the escape room game, it pops up a line that says "Room 1emaining: 300 seconds". How do I get rid of that and just keep the count down timer?"
Prompt 8: "The timer shows a frozen line that says "Time remaining: 300 seconds", also the cursor is stuck on the count down timer under it, so I can't do the puzzle for the first room. How can I have it so only the count down timer shows up at the top and I can interact with the puzzle"
Prompt 9: "When I start the escape room, the count down timer is at the top; however, my cursor is still stuck in the timer and gives me an error when I try to move to the next room. How do I fix this? My code: *Copy and pastes code*"

Bot 2: Puzzle Bot (GPT-4o mini)
Prompt 1: "How do I code a logic grid puzzle for an escape room in C++"
Prompt 2: "I got this error: "redefinition of ‘void LogicGrid::applyClue(const std::string&)’" What do I do?"
Prompt 3: "What are some pretty simple puzzles (with examples) I can put for my escape room that's all C++"
Prompt 4: "Now, give me 5 more puzzles, but bump up the difficulty"
Prompt 5: "I need 2 more examples"
Prompt 6: "Now, give me another 5 puzzles, but bump up the difficulty even more"
Prompt 7: "How can I build a small minesweeper puzzle in C++?"
Prompt 8: "Can I have a puzzle that tells a random riddle each time?"
Prompt 9: "Can you give me other puzzle ideas that are medium difficulty?"
Prompt 10: "How do I make a codebreaker morse code escape room, but make the words random?"
Prompt 11: "The morse code puzzle in my code immediately displays the "Incorrect. The original word was: " with the answer once it starts. How do I fix this? Code: *Copy and prints code*"
Prompt 12: "Can you point out specifically what areas in my code need to be adjusted?"
Prompt 13: "That's the same code I have, besides it going to the next puzzle. How do I fix this?"

Bot 3: Morse code & Scramble Bot (Gemini)
Prompt 1: "CHICKEN is the first word I'm using for a word scramble / morse code puzzle.

code snippet in c++

    cout << "═════════ Puzzle Three: Scramble ══════════" << endl;

    vector<string> words = {"Chicken"};



Ok let's come up with 5-7 other good words that increase in complexity for this puzzle"
Prompt 2: "they dont have to be agriculture related focus more on complexity of the words, but thats a good start"
Prompt 3: "just for fun show me what that c++ snippet would look like if you used like 3 words from list 1 and 3 from list 2"
Prompt 4: "Can you give me a list of words that are hard to unscramble? Focus on complexity alone, does not need to be themed"
Prompt 5: "Can you give me another list of words?"
Prompt 6: "Can I get words that are a bit less complex now?"
Prompt 7: "Give me short messages (3-4 words) that I can use for my morse code puzzle"
Prompt 8: "Could you give me some more examples?"


