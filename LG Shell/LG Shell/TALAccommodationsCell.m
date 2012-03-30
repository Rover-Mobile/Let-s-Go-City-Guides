//
//  TALAccommodationsCell.m
//  LG Shell
//
//  Created by Todd Lubin on 3/28/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "TALAccommodationsCell.h"
#import "TALAccomReadMoreViewController.h"

@implementation TALAccommodationsCell
@synthesize nameLabel;
@synthesize addressLabel;
@synthesize websiteLabel;
@synthesize descriptionLabel;
@synthesize pdiversityLabel;
@synthesize telnumberLabel;
@synthesize distanceLabel;

@synthesize owner;

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        // Initialization code
    }
    return self;
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated
{
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

- (void)dealloc {
    [nameLabel release];
    [addressLabel release];
    [websiteLabel release];
    [descriptionLabel release];
    [pdiversityLabel release];
    [telnumberLabel release];
    [distanceLabel release];
    [super dealloc];
}
- (IBAction)readMorePressed:(id)sender {
    TALAccomReadMoreViewController *vc = [[TALAccomReadMoreViewController alloc]init];
    [[self.owner navigationController] pushViewController:vc animated:YES];
}

- (IBAction)tweetPressed:(id)sender {
}

- (IBAction)facebookPressed:(id)sender {
}

- (IBAction)addToTripPressed:(id)sender {
}
@end
