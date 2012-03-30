//
//  TALAccomReadMoreViewController.m
//  LG Shell
//
//  Created by Todd Lubin on 3/30/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "TALAccomReadMoreViewController.h"

@interface TALAccomReadMoreViewController ()

@end

@implementation TALAccomReadMoreViewController
@synthesize nameLabel;
@synthesize addressLabel;
@synthesize websiteLabel;
@synthesize descriptionLabel;
@synthesize miscLabel;
@synthesize directionsLabel;
@synthesize pdiversityLabel;
@synthesize telLabel;
@synthesize distanceLabel;

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
}

- (void)viewDidUnload
{
    [self setNameLabel:nil];
    [self setAddressLabel:nil];
    [self setWebsiteLabel:nil];
    [self setDescriptionLabel:nil];
    [self setMiscLabel:nil];
    [self setDirectionsLabel:nil];
    [self setPdiversityLabel:nil];
    [self setTelLabel:nil];
    [self setDistanceLabel:nil];
    [super viewDidUnload];
    // Release any retained subviews of the main view.
    // e.g. self.myOutlet = nil;
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}

- (void)dealloc {
    [nameLabel release];
    [addressLabel release];
    [websiteLabel release];
    [descriptionLabel release];
    [miscLabel release];
    [directionsLabel release];
    [pdiversityLabel release];
    [telLabel release];
    [distanceLabel release];
    [super dealloc];
}
- (IBAction)tweetPressed:(id)sender {
}

- (IBAction)facebookPressed:(id)sender {
}

- (IBAction)addToTripPressed:(id)sender {
}
@end
