/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "CCBBaseLineCell.h"

@class UIImageView, UILabel;

@interface CCBBillDetailViewErrorCell : CCBBaseLineCell {
@private
	UILabel* _topLabel;
	UILabel* _bottomLabel;
	UIImageView* _errorLogoImageView;
}
@property(retain, nonatomic) UIImageView* errorLogoImageView;
@property(retain, nonatomic) UILabel* bottomLabel;
@property(retain, nonatomic) UILabel* topLabel;
-(void).cxx_destruct;
-(void)setErrorMessage:(id)message;
-(void)initLabel;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end
