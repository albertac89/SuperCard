//
//  CardMatchingGame.h
//  Matchismo
//
//  Created by Albert on 30/10/17.
//  Copyright © 2017 Albert. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Deck.h"

@interface CardMatchingGame : NSObject
// designated initializer
- (instancetype)initWithCardCOunt:(NSUInteger)count
                        usingDeck:(Deck *)deck;

- (void)chooseCardAtIndex:(NSUInteger)index;
- (Card *)cardAtIndex:(NSUInteger)index;

@property(nonatomic, readonly) NSInteger score;

@end
