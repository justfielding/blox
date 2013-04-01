//
//  iAudio.h
//  Tetris
//
//  Created by Fielding Johnston on 3/31/13.
//  Copyright (c) 2013 Fielding Johnston. All rights reserved.
//

#ifndef Tetris_iAudio_h
#define Tetris_iAudio_h

#include <string>

class IAudio
{
public:
  virtual ~IAudio() {}
  virtual void playSound( std::string filename, int looping ) = 0;
  virtual void playSong( std::string filename, int looping ) = 0;
  virtual void stopAllSounds() = 0;
  
  virtual bool isSoundPlaying() = 0;
  virtual bool isSongPlaying() = 0;
  
};

#endif
