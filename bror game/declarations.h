


//define (w,a,s,d,jump,accept,back,map,pause,attack,second)
#define moveset 11

//define 
#define max_players 4


//frame_timing
long frame_time_stop;
long frame_time_start;
long frame_time;

//window size
int win_w = 800;
int win_h = 600;
int window_x = 0;
int window_y = 0;

//winow renderer and events
SDL_Window *window;
SDL_Renderer *renderer;
SDL_Event e;



/*

//useless stuff
int players_wasd_input[2] = {0};
int players_movement_speed = 1;


int blueboxheight = 100;

//players colors
int playercolor[16][3] = {
{255, 0, 0},
{255, 0, 255},
{255, 255, 0},
{255, 255, 255},
{255, 0, 150},
{155, 255, 155},
{0, 255, 0},
{0, 0, 255},
{155, 0, 0},
{0, 155, 0},
{0, 0, 155},
{155, 155, 0},
{155, 0, 155},
{0, 155, 155},
{155, 155, 155},
{155, 0, 255}
};

//players active
int players_active = 16;

//if in level and if running
bool running = true;
bool inlevel = true;

//controllers
SDL_GameController* ctrl[16];
SDL_Joystick *joy[16];
Sint16 joylocation[16][6];

//player rects
SDL_Rect playerrect[16][1];
int playerxywh[4][16];

//number of keys pressed down on keyboard
int keysdown = 0;

//player acceleration and velocity in x and y direction
double player_acceleration[16][2] = {0};
double player_velocity[16][2] = {0};

//number of controllers active


//if player useing controller or keyboard
bool player_inputdevice[16] = {0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };

//what controller is tied to what player controller is konstant and change what player is tied to which
int player_inputcontroller[16] = {2, 0, 1, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

//controller controls

//players with keyboard controls
int players_with_keyboard = 1;
int players_with_keyboardlist[16] = {};

//if player is on ground
bool player_onground[16] = {};

//how much the velocity is consirved x y
double player_drag[16][2] = {
{0.99, 1}, {0.99, 1}, {0.99, 1}, {0.99, 1}, {0.99, 1}, {0.99, 1}, {0.99, 1}, {0.99, 1},
{0.99, 1}, {0.99, 1}, {0.99, 1}, {0.99, 1}, {0.99, 1}, {0.99, 1}, {0.99, 1}, {0.99, 1}
};

//what key each player has presed
int player_movement[16][moveset];

//controler controls (a0 b1 x2 y3 back4 guide5 start6 lj7 rj8 lb9 rb10 up11 down12 left13 right14 (15-22 joysticks)(23-24 triggers))
//a0 b1 x2 y3 back4 guide5 start6 lj7 rj8 lb9 rb10 up11 down12 left13 right14
//(15 left joy right) (16 left joy left) (17 left joy up) (18 left joy down)
//(19 right joy right) (20 right joy left) (21 right joy up) (22 right joy down)
//(23 rt down) (24 lt down)
int player_controler_controls[16][moveset] = {
{},
{15, 16, 17, 18, },
{},
{},
{},
{},
{},
{},
{},
{},
{},
{},
{},
{},
{},
{}};

//keyboard controls for all players
int players_keyboard_controls[16][moveset] = {
{SDL_SCANCODE_D, SDL_SCANCODE_A, SDL_SCANCODE_W, SDL_SCANCODE_S, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};
// (w,a,s,d,jump,accept,back,map,pause,attack,second)
// (right left up down
//trigger continously (w,a,s,d)
//trigger once (accept,back,map,pause,attack)
//trigger charge ()
//trigger once then charge (jump)
//trigger once or charge(second)

*/

//render update
bool build_update;

//render update textures
SDL_Texture *build;

//useless stuff
int players_wasd_input[2] = { 0 };
int players_movement_speed = 1;

int remapping_controllers = false;

//
int blueboxheight = 100;

//players colors
int playercolor[3] = { 255, 0, 0 };

//if in level and if running
bool running = true;
bool inlevel = true;

//controllers
SDL_GameController *ctrl;
SDL_Joystick *joy;
Sint16 joylocation[6];

//player rects
SDL_Rect playerrect[1];
int playerxywh[4];

//number of keys pressed down on keyboard
int keysdown = 0;

//player acceleration and velocity in x and y direction
double player_acceleration[16][2] = { 0 };
double player_velocity[16][2] = { 0 };

//players with keyboard controls
int players_with_keyboard = 1;
int players_with_keyboardlist[16] = {};

//if player is on ground
bool player_onground[16] = {};

//how much the velocity is consirved x y
double player_drag[16][2] = {
{0.99, 1}, {0.99, 1}, {0.99, 1}, {0.99, 1}, {0.99, 1}, {0.99, 1}, {0.99, 1}, {0.99, 1},
{0.99, 1}, {0.99, 1}, {0.99, 1}, {0.99, 1}, {0.99, 1}, {0.99, 1}, {0.99, 1}, {0.99, 1}
};

//what key each player has presed
int player_movement[moveset];

//controler controls (a0 b1 x2 y3 back4 guide5 start6 lj7 rj8 lb9 rb10 up11 down12 left13 right14 (15-22 joysticks)(23-24 triggers))

//a0 b1 x2 y3 back4 guide5 start6 lj7 rj8 lb9 rb10 up11 down12 left13 right14 
//(15 left joy right) (16 left joy left) (17 left joy up) (18 left joy down)
//(19 right joy right) (20 right joy left) (21 right joy up) (22 right joy down)
//(23 rt down) (24 lt down)

//a1 b2 x3 y4 back5 guide6 start7 lj8 rj9 lb10 rb11 up12 down13 left14 right15 
//(16 left joy right) (17 left joy left) (18 left joy up) (19 left joy down)
//(20 right joy right) (21 right joy left) (22 right joy up) (23 right joy down)
//(24 rt down) (25 lt down)

int player_controler_controls[moveset] = { 16, 17, 18, 19, 0, 0, 0, 0, 0, 0, 0 };

//keyboard controls for all players
int players_keyboard_controls[moveset] = { SDL_SCANCODE_D, SDL_SCANCODE_A, SDL_SCANCODE_W, SDL_SCANCODE_S, 0, 0, 0, 0, 0, 0, 0 };



// (w,a,s,d,jump,accept,back,map,pause,attack,second)
// (right left up down
//trigger continously (w,a,s,d)
//trigger once (accept,back,map,pause,attack)
//trigger charge ()
//trigger once then charge (jump)
//trigger once or charge(second)










