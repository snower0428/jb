//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class TBMessageCenterRedMarkView, UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface TBMessageCenterCell : UITableViewCell
{
    UIImageView *_headImageView;
    UILabel *_titleLabel;
    UILabel *_timeLabel;
    UILabel *_contentLabel;
    UIView *_cutLine;
    TBMessageCenterRedMarkView *_redMarkView;
}

- (void).cxx_destruct;
- (void)setRedMark:(id)arg1;
- (void)setMessageTypeItem:(id)arg1;
- (void)fillData;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (id)labelWithColorStyle:(int)arg1 fontStyle:(int)arg2;

@end
