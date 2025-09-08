# Capture The Flag Game - Setup Guide

This project implements a complete multiplayer Capture The Flag game using Unreal Engine 5 with the Gameplay Ability System (GAS).

## Requirements Met

✅ **Multiplayer**: Can be run as listen server or dedicated server  
✅ **Team Assignment**: Players are automatically assigned to Red or Blue teams  
✅ **Flag System**: Flag starts at center, players capture by walking over it  
✅ **Scoring**: Players score by entering their base with the enemy flag  
✅ **Flag Drop**: When players die, they drop the flag at their location  
✅ **Flag Return**: When players score, flag returns to original location  
✅ **Win Condition**: Game resets when a team scores 3 points  
✅ **GAS Integration**: Uses Gameplay Ability System throughout  
✅ **UI System**: UMG scoreboard showing team scores and game status  

## Project Structure

### Core Classes
- `ACaptureTheFlagGASGameMode`: Main game mode with team management
- `ACTFGameState`: Handles team scores and match state
- `ACTFPlayerState`: Player stats, team assignment, and GAS integration
- `ACTFFlag`: Flag actor with pickup/drop/capture mechanics
- `ACTFCaptureZone`: Team bases for flag capture
- `UCTFScoreboardWidget`: UMG scoreboard widget

### Gameplay Ability System
- `UCTFAttributeSet`: Player attributes (Health, etc.)
- Full GAS integration for all gameplay mechanics

## Setup Instructions

### 1. Level Setup
1. Create a new level or use existing First Person template level
2. Set Game Mode Override to "CTF Game Mode Blueprint" (create from ACTFGameMode)
3. Place Player Starts with tags:
   - Tag "Red" for red team spawns  
   - Tag "Blue" for blue team spawns

### 2. Game Mode Configuration
Create a Blueprint based on `ACTFGameMode` and configure:
- **Flag Spawn Position**: Center of the map between team bases
- **Red Team Base**: Location of red team's base
- **Blue Team Base**: Location of blue team's base  
- **Winning Score**: Points needed to win (default: 3)
- **Flag Class**: Blueprint based on ACTFFlag

### 3. Flag Setup
1. Create a Blueprint based on `ACTFFlag`
2. Set up visual mesh (flagpole, flag, etc.)
3. Configure interaction radius
4. Set owning team (for multi-flag variants)

### 4. Capture Zones Setup
1. Create Blueprints based on `ACTFCaptureZone`
2. Place one at each team's base
3. Set owning team (Red/Blue)
4. Configure capture radius and visual effects

### 5. UI Setup
1. Create UMG widget based on `UCTFScoreboardWidget`
2. Add TextBlocks with names:
   - RedScoreText
   - BlueScoreText  
   - TimeText
   - MatchStateText
3. Add ProgressBar named GameProgressBar
4. Set widget to display in Player Controller or HUD

### 6. Multiplayer Testing
1. Set Number of Players to 2+ in Play settings
2. Enable "Run Dedicated Server" for dedicated server testing
3. Or use "Listen Server" option for peer-to-peer

## Key Features

### Team Management
- Automatic team balancing
- Player assignment on join
- Team-based spawning

### Flag Mechanics
- Physics-based flag dropping
- Automatic return timer (30 seconds)
- Visual state changes (carried/dropped/at base)

### Scoring System
- Flag capture scoring
- Flag return bonuses
- Kill/Death tracking
- Time with flag statistics

### Multiplayer Architecture
- Full replication support
- Authority-based validation
- Network-optimized updates

## Testing the Game

1. **Single Player**: Start with 1 player to test basic mechanics
2. **Local Multiplayer**: Use PIE with 2+ players for team testing  
3. **Network Testing**: Package and test on multiple machines
4. **Dedicated Server**: Deploy to server for production testing

## Customization Options

### Gameplay Rules
- Modify `FGameConfig` in CTFTypes.h for game settings
- Adjust respawn delays, match time limits
- Change scoring values and win conditions

### Visual Polish
- Replace placeholder flag mesh
- Add particle effects for captures
- Implement team-colored player materials
- Add sound effects for game events

### Additional Features
- Multiple flags per team
- Power-ups and special abilities
- Different game modes (King of the Hill, etc.)
- Advanced AI for bot players

## File Locations

### Source Files
- `Source/CaptureTheFlagGAS/` - All C++ source code
- Core types: `Public/Core/CTFTypes.h`
- Game framework: `Public/GameFramework/`
- Gameplay mechanics: `Public/Gameplay/`

### Content
- Create Blueprint assets in `Content/CTF/` folder
- UI widgets in `Content/CTF/UI/`
- Game mode and player blueprints in `Content/CTF/GameMode/`

## Performance Notes

- UI updates at 10 FPS (optimized)
- Flag validation every 5 seconds
- Network replication optimized for bandwidth
- LOD and culling should be implemented for large maps

This implementation provides a solid foundation for a multiplayer CTF game that can be easily extended and customized through Blueprints while maintaining robust C++ core functionality.