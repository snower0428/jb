/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView, NSArray;

@interface ALPSegmentedBox : XXUnknownSuperclass {
@private
	NSArray* _segmentedButtons;
	UIImageView* _backgroundView;
}
@property(retain, nonatomic) UIImageView* backgroundView;
@property(assign, nonatomic) int selectedSegmentIndex;
@property(readonly, assign, nonatomic) NSArray* segmentedButtons;
+(float)heightOfControl;
+(id)segmentedBoxWithOriginY:(float)originY titles:(id)titles target:(id)target action:(SEL)action;
-(void).cxx_destruct;
-(void)buttonClicked:(id)clicked;
-(void)adjustImageForButton:(id)button;
-(id)createImageWithColor:(id)color;
-(id)initWithOriginY:(float)originY titles:(id)titles target:(id)target action:(SEL)action;
@end

