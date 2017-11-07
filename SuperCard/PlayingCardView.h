//
//  PlayingCardView.h
//  SuperCard
//
//  Created by Albert on 06/11/17.
//  Copyright © 2017 Albert. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PlayingCardView : UIView

@property (nonatomic)NSUInteger rank;
@property (strong, nonatomic) NSString *suit;
@property (nonatomic) BOOL faceUp;

- (void)pinch:(UIPinchGestureRecognizer *)gesture;
    
@end
