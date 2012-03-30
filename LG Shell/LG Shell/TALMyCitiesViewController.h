//
//  TALMyCitiesViewController.h
//  LG Shell
//
//  Created by Todd Lubin on 3/24/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TALMyCitiesViewController : UITableViewController

@property (strong, nonatomic) NSArray *cities;

-(id)initWithCities:(NSArray*)myCities;


@end
