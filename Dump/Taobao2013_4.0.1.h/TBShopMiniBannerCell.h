//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class TBBlockActionButton;

__attribute__((visibility("hidden")))
@interface TBShopMiniBannerCell : UITableViewCell
{
    TBBlockActionButton *_leftMiniBanner;
    TBBlockActionButton *_rightMiniBanner;
}

@property(retain, nonatomic) TBBlockActionButton *rightMiniBanner; // @synthesize rightMiniBanner=_rightMiniBanner;
@property(retain, nonatomic) TBBlockActionButton *leftMiniBanner; // @synthesize leftMiniBanner=_leftMiniBanner;
- (void).cxx_destruct;
- (void)configrightPicUrl:(id)arg1 weakNetwork:(BOOL)arg2;
- (void)configleftPicUrl:(id)arg1 weakNetwork:(BOOL)arg2;
- (void)configPicUrl:(id)arg1 and:(id)arg2 weakNetwork:(BOOL)arg3;
- (void)buttonClicked:(id)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
