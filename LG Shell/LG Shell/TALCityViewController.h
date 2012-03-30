//
//  TALCityViewController.h
//  LG Shell
//
//  Created by Todd Lubin on 3/25/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TALCityViewController : UITableViewController

@property (strong, nonatomic) NSString *city;

-(id)initWithCity:(NSString*)c;

@end
