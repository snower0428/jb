/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "APStyleBaseTableViewCell.h"

@class UILabel;

@interface APStyle4TableViewCell : APStyleBaseTableViewCell {
	UILabel* _nameLabel;
	UILabel* _accountLabel;
	UILabel* _amountLabel;
}
-(void)loadData;
-(void)layoutSubviews;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end

