//
//  setup.hpp
//  SDLprojectM
//
//  Created by Cyber on 2/27/21.
//  Copyright © 2021 int80. All rights reserved.
//

#ifndef setup_hpp
#define setup_hpp

#include "pmSDL.hpp"

class projectMSDL;

void debugGL(GLenum source,
               GLenum type,
               GLuint id,
               GLenum severity,
               GLsizei length,
               const GLchar* message,
             const void* userParam);

std::string getConfigFilePath(std::string datadir_path);
void seedRand();
void initGL();
void dumpOpenGLInfo();
void initStereoscopicView(SDL_Window *win);
void enableGLDebugOutput();
void testAllPresets(projectMSDL *app);
projectMSDL *setupSDLApp();
int64_t startUnlockedFPSCounter();
void advanceUnlockedFPSCounterFrame(int64_t startFrame);

#endif /* setup_hpp */
