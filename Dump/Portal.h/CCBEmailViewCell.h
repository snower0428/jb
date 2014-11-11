/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "CCBCustomSelectColorCell.h"

@class UIImageView, UILabel;

@interface CCBEmailViewCell : CCBCustomSelectColorCell {
@private
	UILabel* _topLabel;
	UILabel* _bottomLabel;
	UIImageView* _iconImageView;
}
@property(retain, nonatomic) UIImageView* iconImageView;
@property(retain, nonatomic) UILabel* bottomLabel;
@property(retain, nonatomic) UILabel* topLabel;
-(void).cxx_destruct;
-(void)setBottomText:(id)text;
-(void)setTopText:(id)text;
-(void)setLeftIcon:(id)icon;
-(void)initLabel;
-(void)initImageView;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end
