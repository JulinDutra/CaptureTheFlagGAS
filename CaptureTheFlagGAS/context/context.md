LogDebuggerCommands: Repeating last play command: Selected Viewport
LogPlayLevel: PlayLevel: No blueprints needed recompiling
LogOnline: OSS: Created online subsystem instance for: NULL
LogOnline: OSS: TryLoadSubsystemAndSetDefault: Loaded subsystem for type [NULL]
LogPlayLevel: Creating play world package: /Game/Maps/UEDPIE_0_CTF_TestMap
LogPlayLevel: PIE: StaticDuplicateObject took: (0.003475s)
LogPlayLevel: PIE: Created PIE world by copying editor world from /Game/Maps/CTF_TestMap.CTF_TestMap to /Game/Maps/UEDPIE_0_CTF_TestMap.CTF_TestMap (0.003528s)
LogUObjectHash: Compacting FUObjectHashTables data took   0.60ms
LogChaosDD: Creating Chaos Debug Draw Scene for world CTF_TestMap
LogPlayLevel: PIE: World Init took: (0.001938s)
LogAudio: Display: Creating Audio Device:                 Id: 2, Scope: Unique, Realtime: True
LogAudioMixer: Display: Audio Mixer Platform Settings:
LogAudioMixer: Display:     Sample Rate:                          48000
LogAudioMixer: Display:     Callback Buffer Frame Size Requested: 1024
LogAudioMixer: Display:     Callback Buffer Frame Size To Use:    1024
LogAudioMixer: Display:     Number of buffers to queue:           1
LogAudioMixer: Display:     Max Channels (voices):                32
LogAudioMixer: Display:     Number of Async Source Workers:       4
LogAudio: Display: AudioDevice MaxSources: 32
LogAudio: Display: Audio Spatialization Plugin: None (built-in).
LogAudio: Display: Audio Reverb Plugin: None (built-in).
LogAudio: Display: Audio Occlusion Plugin: None (built-in).
LogAudioMixer: Display: Initializing audio mixer using platform API: 'XAudio2'
LogAudioMixer: Display: Using Audio Hardware Device Speakers (Realtek(R) Audio)
LogAudioMixer: Display: Initializing Sound Submixes...
LogAudioMixer: Display: Creating Master Submix 'MasterSubmixDefault'
LogAudioMixer: Display: Creating Master Submix 'MasterReverbSubmixDefault'
LogAudioMixer: FMixerPlatformXAudio2::StartAudioStream() called. InstanceID=2
LogAudioMixer: Display: Output buffers initialized: Frames=1024, Channels=2, Samples=2048, InstanceID=2
LogAudioMixer: Display: Starting AudioMixerPlatformInterface::RunInternal(), InstanceID=2
LogAudioMixer: Display: FMixerPlatformXAudio2::SubmitBuffer() called for the first time. InstanceID=2
LogInit: FAudioDevice initialized with ID 2.
LogAudio: Display: Audio Device (ID: 2) registered with world 'CTF_TestMap'.
LogAudioMixer: Initializing Audio Bus Subsystem for audio device with ID 2
LogLoad: Game class is 'GM_CaptureTheFlag_C'
LogWorld: Bringing World /Game/Maps/UEDPIE_0_CTF_TestMap.CTF_TestMap up for play (max tick rate 60) at 2025.09.07-20.05.07
LogTemp: Error: === CTFGameState CREATED - SIMPLIFIED FOR TEST ===
LogWorld: Bringing up level for play took: 0.001436
LogOnline: OSS: Created online subsystem instance for: :Context_1
LogStats: UGameplayCueManager::InitializeEditorObjectLibrary -  0.003 s
LogAbilitySystem: Warning: No GameplayCueNotifyPaths were specified in DefaultGame.ini under [/Script/GameplayAbilities.AbilitySystemGlobals]. Falling back to using all of /Game/. This may be slow on large projects. Consider specifying which paths are to be searched.
LogAbilitySystem: Display: Processing InitializeRuntimeObjectLibrary.
LogTemp: Error: Cannot assign team - invalid Player or GameState
LogTemp: Warning: Failed to select team for player - assigning to Red as fallback
LogTemp: Player LAPTOP-QBQJG1U6-2BC3 assigned to team 1
LogTemp: PostLogin - Player joined and assigned to team
LogGameMode: Display: Match State Changed from EnteringMap to WaitingToStart
LogTemp: Error: HandleMatchIsWaitingToStart - SKIP TO PROGRESS
LogGameMode: Display: Match State Changed from WaitingToStart to InProgress
LogTemp: Error: SetupPlayerInputComponent called - SETTING UP INPUT
LogTemp: Warning: PlayerStarts cached - Red: 0, Blue: 0, Spectator: 0, Neutral: 2
LogTemp: CTF GameMode initialized
LogTemp: Flag registered with GameState
LogTemp: Flag registered with GameState
LogTemp: Error: CTFGameState BeginPlay - TECHNICAL TEST VERSION
LogTemp: Error: GameState: Phase set to 1
LogTemp: Warning: CTF Scoreboard Widget constructed with event bindings
LogTemp: Warning: CTFPlayerComponent bound to zone owned by team 2
LogTemp: Warning: CTFPlayerComponent bound to zone owned by team 1
LogTemp: Warning: CTFPlayerComponent bound to 2 capture zones (total found: 2)
LogTemp: CTFPlayerComponent initialized for BP_FirstPersonCharacter_C_0
LogTemp: Error: === MATCH HAS STARTED SUCCESSFULLY ===
LogGameState: Match State Changed from EnteringMap to InProgress
LogGameState: Match State Changed from InProgress to WaitingToStart
PIE: Server logged in
PIE: Play in editor total start time 0,287 seconds.
LogTemp: Warning: ValidateCapture: Player cannot pick up own team flag - Player: 1, Flag: 1
LogTemp: Flag picked up by player CTFPlayerState_0 from team 1
LogTemp: Error: HandlePlayerEnteredZone called! Player: CTFPlayerState_0, ZoneTeam: 1
LogTemp: Warning: Broadcasting OnPlayerEnteredZone for player CTFPlayerState_0, team 1
LogTemp: Player CTFPlayerState_0 entered Red capture zone
LogTemp: Player CTFPlayerState_0 exited Red capture zone
LogSlate: Updating window title bar state: overlay mode, drag disabled, window buttons hidden, title bar hidden
LogWorld: BeginTearingDown for /Game/Maps/UEDPIE_0_CTF_TestMap
LogWorld: UWorld::CleanupWorld for CTF_TestMap, bSessionEnded=true, bCleanupResources=true
LogSlate: InvalidateAllWidgets triggered.  All widgets were invalidated
LogPlayLevel: Display: Shutting down PIE online subsystems
LogSlate: InvalidateAllWidgets triggered.  All widgets were invalidated
LogSlate: Updating window title bar state: overlay mode, drag disabled, window buttons hidden, title bar hidden
LogAudioMixer: Deinitializing Audio Bus Subsystem for audio device with ID 2
LogAudioMixer: Display: FMixerPlatformXAudio2::StopAudioStream() called. InstanceID=2, StreamState=4
LogAudioMixer: Display: FMixerPlatformXAudio2::StopAudioStream() called. InstanceID=2, StreamState=2
LogUObjectHash: Compacting FUObjectHashTables data took   1.16ms
LogPlayLevel: Display: Destroying online subsystem :Context_1