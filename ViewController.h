//
//  ViewController.h
//  Jul26
//
//  Created by Ian Foo on 26/7/12.
//  Copyright (c) 2012 briandennehy@gmail.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>	//for CADisplayLink

@interface ViewController : UIViewController {
    CADisplayLink *displayLink;
}

-(void) setupDisplayLink;

@property CADisplayLink *displayLink;

@end
