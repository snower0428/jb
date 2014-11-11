/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BaseDetailCell.h"

@class UIImageView, UILabel;

@interface GoodsCell : BaseDetailCell {
@private
	UIImageView* _goodsIcon;
	UILabel* _describeLabel;
	UIImageView* _goodsBg;
}
@property(assign, nonatomic) __weak UIImageView* goodsBg;
@property(assign, nonatomic) __weak UILabel* describeLabel;
@property(assign, nonatomic) __weak UIImageView* goodsIcon;
-(void).cxx_destruct;
-(void)layoutCell:(int)cell;
-(void)fillCell:(id)cell hasLine:(BOOL)line;
-(void)setSelected:(BOOL)selected animated:(BOOL)animated;
-(void)layoutSubviews;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
-(void)dealloc;
@end

