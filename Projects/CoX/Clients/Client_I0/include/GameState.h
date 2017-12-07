#pragma once
#include <stdint.h>

struct Vector3
{
    float x, y, z;
};
struct Vector4
{
    float x, y, z, w;
};
struct Matrix4x4
{
    Vector4 a, b, c, d;
};
#pragma pack(push, 1)
struct EntRef
{
    int      owner_id;
    uint32_t db_id;
    bool     operator==(EntRef s) const { return owner_id == s.owner_id && db_id == s.db_id; }
    explicit operator bool() const { return owner_id != 0 || db_id != 0; }
};
#pragma pack(pop)

struct ViewState
{
    int       fullscreen;
    int       maximized;
    int       inactive_display;
    int       stoprender_ifinactivedisplay;
    int       screen_w;
    int       screen_h;
    int       screen_x_restored;
    int       screen_y_restored;
    int       screenX_pos;
    int       screenY_pos;
    float     fovY;
    float     fov;
    float     fov_3rd;
    float     fov_custom;
    int       ortho;
    float     orthoViewScale;
    Matrix4x4 params_proj_mat;
    int       bPrintDebInfo;
    int       bPrintSeqInfo;
    int       bPrintAmbientInfo;
    int       bPrintSoundInfo;
    float     camera_shake;
    float     camera_shake_falloff;
    float     bFloor_info;
    int       bWireframe;
    int       iClothmode;
    int       unkn_A4;
    int       unkn_A8;
    int       unkn_AC;
    int       unkn_B0[20];
    int       unkn_100[9];
    int       unkn_124;
    char      unkn_128[4];
    int       unkn_12C;
    int       bNetgraph;
    int       bNetfloaters;
    float     fps;
    int       iMaxFps;
    int       bShowFps;
    int       iFrameDelay;
    int       unkn_148;
    int       iTcp;
    int       iPort;
    char      local_map_server_ip[256];
    int       edit_req;
    char      db_server_ip_str[256];
    char      auth_server_ip_str[256];
    int       game_mode;
    int       groupDefVersion;
    int       unkn_460;
    int       maxParticles;
    int       maxParticleFill;
    int       splatShadowBias;
    int       disableSimpleShadows;
    float     LODBias;
    int       disablesky;
    float     fxSoundVolume;
    float     musicSoundVolume;
    int       mipLevel;
    int       min_tex_size;
    float     controls_draw_dist;
    float     gamma;
    int       bShadowVol;
    int       unkn_498;
    int       noPixShaders;
    int       noVBOs;
    int       noParticles;
    int       noVertShaders;
    int       enableVBOs;
    int       enableVBOs_particles;
    int       unkn_4B4;
    int       disableVBOs_particles;
    Vector3   fogcolor;
    int       fogdepth;
    int       fogdist;
    float     fogdist2;
    float     near_far_Z;
    float     zFar;
    int       bNoGLFog;
    int       debTest0;
    int       debTest1;
    int       debTest2;
    float     debTest3;
    int       debTest4;
    int       debTest5;
    float     debTest6;
    float     debTest7;
    float     debTest8;
    float     debTest9;
    int       whiteParticles;
    int       bShowDepthComplexity;
    int       bShowPerformSet;
    int       costumeHeadShot;
    int       unkn_518;
    int       bSimpleShadowDeb;
    int       restoreShadow;
    float     unkn_524;
    int       unkn_528;
    float     unkn_52C;
    int       tstart_ticks;
    int       unkn_534;
    int       unkn_538;
    int       fx_debug_req;
    int       iAnimDebugFlags;
    int       unkn_544;
    int       showSpecs;
    int       quickLoadAnims;
    int       unkn_550;
    char      show_state[128];
    int       selected_debug_ent_id;
    int       waxkyxlate;
    int       netfxdebug;
    int       perf_flags;
    int       fxprint;
    int       resetparthigh;
    int       bonescale;
};

struct GameState
{
    int       unkn_0;
    int       version;
    char      cmd[256];
    char      unkn_108[128];
    char      audioinfo_str[128];
    ViewState view;
    char      tfx[100];
    float     unkn_85C;
    int       unkn_860;
    int       checkcostume;
    int       checklod;
    int       nopredictplayerseq;
    int       nointerpolation;
    int       fxkill;
    int       unkn_878;
    int       unkn_87C;
    int       martinboxes;
    int       g_ImageServerMode;
    char      image_server_src_dir[2048];
    char      image_server_target_dir[2048];
    int       gNoDebug;
    int       unkn_188C;
    char      unkn_1890[128];
    int       g_spin360_speed;
    int       g_BuildCubeMaps;
    float     cam_dist;
    int       unkn_191C;
    int       gl_lock;
    int       gl_nosort;
    int       tri_hist;
    int       tri_cutoff;
    int       gConsole;
    Vector3   bg_color;
    int       demopause;
    int       demofps;
    int       demodump;
    int       demoloop;
    int       demoframestats;
    char      demo_name[260];
    int       can_edit;
    int       gLocalMapServer;
    int       gNoversioncheck;
    int       local_map_server_requested;
    int       create_bins;
    int       sound_disable_requested;
    int       gAllowEditNpc;
    int       maptest;
    int       gCryptic;
    int       unkn_1A7C;
    int       unkn_1A80;
    int       g_txt_locale_id;
    int       bVTune;
    char      gPlaysound[1000];
    int       see_everything;
    int       g_debug_info;
    int       gEntdebugclient;
    int       gQuickLogin;
    int       quick_login_requested;
    int       gDisable2D;
    int       ttDebug_enabled;
    int       bPlaceentityMode;
    int       bSuperVision;
    int       g_select_any_entity;
    int       unkn_1E9C;
    EntRef    g_currently_selected_ent_idx;
    int       unkn_1EA8;
    int       gReload_costume_bin;
    int       gDispMouseCoord;
    int       dword_12DCBB4;
    int       dword_12DCBB8;
    int       gShowPointersUnderPlayer;
    int       gTutorialOn;
    int       gAlwaysMissionMap;
    int       gScreenshotUI;
    char      map_name[128];
    int       m_outdoor_map;
    int       m_map_number;
    char      selected_server_name[128];
    int       gE3screenshot;
    int       unkn_1FD8;
    char      driver_notice[1024];
    char      driver_notice_2[1024];
    char      driver_notice_3[3072];
    char      run_at_exit[1024];
    int       unkn_37DC;
};
static_assert(sizeof(GameState) == 0x37E0, "GameState size must be 0x37E0");
extern "C" {
__declspec(dllimport) GameState g_State;
}