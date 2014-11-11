/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BLGestureCell.h"

@class UIImageView, UILabel;

@interface BLNoDataCell : BLGestureCell {
@private
	UILabel* titleLabel;
	UIImageView* iconView;
}
@property(retain, nonatomic) UIImageView* iconView;
@property(retain, nonatomic) UILabel* titleLabel;
-(void).cxx_destruct;
-(void)onLayout;
-(void)layoutSubviews;
-(void)shadowEffect:(id)effect;
-(void)configData;
-(void)releaseUI;
-(void)initUI;
@end
