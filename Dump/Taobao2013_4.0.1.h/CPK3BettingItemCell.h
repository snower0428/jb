//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBGridViewCell.h"

@class CPK3BettingItemCellButton, CPK3ChipPosition, UIImageView;

@interface CPK3BettingItemCell : TBGridViewCell
{
    BOOL _hasSelected;
    CPK3BettingItemCellButton *_contentButton;
    UIImageView *_hasSelectIcon;
    CPK3ChipPosition *_data;
}

@property(retain, nonatomic) CPK3ChipPosition *data; // @synthesize data=_data;
@property(nonatomic) BOOL hasSelected; // @synthesize hasSelected=_hasSelected;
- (void).cxx_destruct;
- (void)setPrompt_label_size:(float)arg1;
- (void)setContent_label_size:(float)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
