//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIButton, UIImageView;

@interface TBShoppingCartGroupHeaderCell : UITableViewCell
{
    UIButton *_groupTitleLabel;
    UIButton *_groupSelectionButton;
    UIButton *_editStateButton;
    UIButton *_promotionButton;
    UIImageView *_seperator;
}

+ (id)topCell;
+ (id)editCell;
+ (id)cell;
@property(nonatomic) UIImageView *seperator; // @synthesize seperator=_seperator;
@property(nonatomic) UIButton *promotionButton; // @synthesize promotionButton=_promotionButton;
@property(nonatomic) UIButton *editStateButton; // @synthesize editStateButton=_editStateButton;
@property(nonatomic) UIButton *groupSelectionButton; // @synthesize groupSelectionButton=_groupSelectionButton;
@property(nonatomic) UIButton *groupTitleLabel; // @synthesize groupTitleLabel=_groupTitleLabel;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)ConfigTop;
- (void)config;

@end
