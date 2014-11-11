/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol DMFilterViewDelegate <NSObject>
-(void)filterView:(id)view didSelectedAtIndex:(int)index button:(id)button;
@optional
-(void)filterViewSelectionAnimationDidEnd:(id)filterViewSelectionAnimation;
-(void)filterViewSelectionAnimationDidBegin:(id)filterViewSelectionAnimation;
-(float)filterViewSelectionAnimationSpeed:(id)speed;
-(float)filterViewDisplayAnimatioSpeed:(id)speed;
@end

