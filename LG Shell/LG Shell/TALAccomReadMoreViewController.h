//
//  TALAccomReadMoreViewController.h
//  LG Shell
//
//  Created by Todd Lubin on 3/30/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TALAccomReadMoreViewController : UIViewController
@property (retain, nonatomic) IBOutlet UILabel *nameLabel;
@property (retain, nonatomic) IBOutlet UILabel *addressLabel;
@property (retain, nonatomic) IBOutlet UILabel *websiteLabel;
@property (retain, nonatomic) IBOutlet UILabel *descriptionLabel;
@property (retain, nonatomic) IBOutlet UILabel *miscLabel;
@property (retain, nonatomic) IBOutlet UILabel *directionsLabel;
@property (retain, nonatomic) IBOutlet UILabel *pdiversityLabel;
@property (retain, nonatomic) IBOutlet UILabel *telLabel;
@property (retain, nonatomic) IBOutlet UILabel *distanceLabel;

- (IBAction)tweetPressed:(id)sender;
- (IBAction)facebookPressed:(id)sender;
- (IBAction)addToTripPressed:(id)sender;

//Once the database is set up, initialize the view controller with a Accommodation object
//-(id)initWithAccommodation:(Accommodation*)accom;
@end
