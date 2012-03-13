//
//  LG_Shell_AppAppDelegate.h
//  LG Shell App
//
//  Created by Joseph Schiavone on 3/12/12.
//  Copyright 2012 HSA Rover. All rights reserved.
//

#import <UIKit/UIKit.h>

@class LG_Shell_AppViewController;

@interface LG_Shell_AppAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet LG_Shell_AppViewController *viewController;

@end
