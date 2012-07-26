//
//  Asteroid.h
//  Jun28
//
//  Created by Matthew Fong on 6/28/12.
//  Copyright (c) 2012. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Asteroid : UIView {
    
    BOOL color;
    CGFloat dx;
    CGFloat dy;
}

@property BOOL color;
@property CGFloat dx, dy;

@end
