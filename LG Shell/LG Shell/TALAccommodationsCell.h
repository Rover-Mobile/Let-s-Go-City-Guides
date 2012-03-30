//
//  TALAccommodationsCell.h
//  LG Shell
//
//  Created by Todd Lubin on 3/28/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
@interface TALAccommodationsCell : UITableViewCell
@property (retain, nonatomic) IBOutlet UILabel *nameLabel;
@property (retain, nonatomic) IBOutlet UILabel *addressLabel;
@property (retain, nonatomic) IBOutlet UILabel *websiteLabel;
@property (retain, nonatomic) IBOutlet UILabel *descriptionLabel;
@property (retain, nonatomic) IBOutlet UILabel *pdiversityLabel;
@property (retain, nonatomic) IBOutlet UILabel *telnumberLabel;
@property (retain, nonatomic) IBOutlet UILabel *distanceLabel;

@property (nonatomic, assign) id owner;

- (IBAction)readMorePressed:(id)sender;
- (IBAction)tweetPressed:(id)sender;
- (IBAction)facebookPressed:(id)sender;
- (IBAction)addToTripPressed:(id)sender;

@end
