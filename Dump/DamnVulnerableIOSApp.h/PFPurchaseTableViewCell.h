/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PFTableViewCell.h"

@class UILabel, UIProgressView;

@interface PFPurchaseTableViewCell : PFTableViewCell {
	UILabel* priceLabel;
	UIProgressView* progressView;
	int state;
}
@property(retain, nonatomic) UIProgressView* progressView;
@property(retain, nonatomic) UILabel* priceLabel;
@property(assign, nonatomic) int state;
-(void).cxx_destruct;
-(void)layoutSubviews;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end
