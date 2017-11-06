//
//  ViewController.m
//  SuperCard
//
//  Created by Albert on 06/11/17.
//  Copyright © 2017 Albert. All rights reserved.
//

#import "ViewController.h"
#import "PlayingCardView.h"

@interface ViewController ()
@property (weak, nonatomic) IBOutlet PlayingCardView *playnigCardView;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    self.playnigCardView.suit = @"♥️";
    self.playnigCardView.rank = 13;
}

@end
