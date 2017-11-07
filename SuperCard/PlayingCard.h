//
//  PlayingCard.h
//  Matchismo
//
//  Created by Albert on 30/10/17.
//  Copyright © 2017 Albert. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
 