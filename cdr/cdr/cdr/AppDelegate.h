//
//  AppDelegate.h
//  cdr
//
//  Created by George Williams on 8/29/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ViewController;
@class SplashView;
@class TimeLineView;
@class PhaseView;
@class KeyPeopleView;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) ViewController *viewController;

@property (strong, nonatomic) SplashView *splashController;

@property (strong, nonatomic) TimeLineView *timelineController;

@property (strong, nonatomic) PhaseView *phaseController;

@property (strong, nonatomic) KeyPeopleView *keypeopleController;

-(void) GoToTimeline;

-(void) GoToKeypeople;

@end
