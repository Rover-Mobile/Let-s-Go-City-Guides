//
//  LG_ShellAppDelegate.h
//  LG Shell
//
//  Created by Joseph on 3/12/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class LG_ShellViewController;

@interface LG_ShellAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet LG_ShellViewController *viewController;

@end
