//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class RateItem, UILabel, UIView;

@interface DetailReviewCell : UITableViewCell
{
    RateItem *_review;
    UILabel *_contentLabel;
    UILabel *_usernameLable;
    UILabel *_dateLabel;
    UILabel *_skuDescLable;
    UIView *_bottomLine;
}

+ (float)cellHeightWithReview:(id)arg1;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)getUserLevel:(unsigned int)arg1 PicNum:(int *)arg2;
- (id)getIconImage:(int)arg1;
- (id)configWithReview:(id)arg1;
- (float)cellHeight;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
