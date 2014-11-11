//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface LiveIndexTableCell : UITableViewCell
{
    UIImageView *_imageViewType;
    UILabel *_type;
    UILabel *_state;
    UILabel *_detail;
}

@property(retain, nonatomic) UILabel *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) UILabel *state; // @synthesize state=_state;
@property(retain, nonatomic) UILabel *type; // @synthesize type=_type;
@property(retain, nonatomic) UIImageView *imageViewType; // @synthesize imageViewType=_imageViewType;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setStateText:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

