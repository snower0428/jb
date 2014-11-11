//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class TBLoadingView, UIImageView, UILabel, UIView;

@interface TBSNSMoreTableViewCell : UITableViewCell
{
    TBLoadingView *_activityView;
    UILabel *_titleLabel;
    UIImageView *_imageICon;
    UIView *_view;
    int _loadStatus;
}

+ (id)cellIdentifer;
+ (float)cellHeight;
+ (id)createCell;
@property(nonatomic) int loadStatus; // @synthesize loadStatus=_loadStatus;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(retain, nonatomic) UIImageView *imageICon; // @synthesize imageICon=_imageICon;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)changeLoadStatus:(id)arg1;
- (void)LoadDataSuccess:(BOOL)arg1;
- (void)setupCellWithLoadStatus:(int)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)setupView;

@end
