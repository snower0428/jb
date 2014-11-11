/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import "BaseDetailCell.h"

@class UIImageView, UILabel;

@interface AmountCell : BaseDetailCell {
@private
	UILabel* _blTitle;
	UIImageView* _spLine;
	UILabel* _blContent;
	UILabel* _unitContent;
	UILabel* _slaveContent;
}
@property(retain, nonatomic) UILabel* slaveContent;
@property(retain, nonatomic) UILabel* unitContent;
@property(retain, nonatomic) UILabel* blContent;
@property(retain, nonatomic) UIImageView* spLine;
@property(retain, nonatomic) UILabel* blTitle;
-(void).cxx_destruct;
-(void)fillCell:(id)cell hasLine:(BOOL)line;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
@end

