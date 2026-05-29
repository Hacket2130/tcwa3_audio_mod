class CfgPatches
{
    class tcwa3_audio_mod
    {
        name = "The Clone Wars Arma 3 - Audio Mod";
        author = "Hacket";
    };
};


// CFG SOUNDS: Triggers, Environment Effects, Zeus Modules, and playSound

class CfgSounds
{
    sounds[] = {};

    #include "ambience/ambience.hpp"
    #include "cis/cis.hpp"
    #include "gar/gar.hpp"
    #include "galactic_Senate/galactic_senate.hpp"
    #include "misc_Factions/misc_factions.hpp"
    #include "mission_Openings/mission_openings.hpp"
};


// CFG MUSIC: Background tracks and Zeus/Eden Music Modules

class CfgMusic
{
    #include "music/music.hpp"
};