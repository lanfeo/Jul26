//
//  View.h
//  Jun28
//
//  Created by Matthew Fong on 6/28/12.
//  Copyright (c) 2012. All rights reserved.
//

#import <UIKit/UIKit.h>
#include "ViewController.h"

@class Asteroid;
@class Ship;

@interface View : UIView {
    Asteroid *asteroid1;
    Asteroid *asteroid2;
    Ship *ship;
    UILabel *fuel;
    int fueltank;
    UILabel *score;
    int highscore;
    UIButton *gameover;
    ViewController *controller;
}

@property ViewController *controller;

- (void) move: (CADisplayLink *) displayLink;
- (id) initWithFrame: (CGRect) frame controller: (ViewController *) c;
- (void) resetGame: (id) sender;

@end
